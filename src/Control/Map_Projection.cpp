#include "stdafx.h"
#include "map.h"
#include "GeoProjection.h"
#include "Tiles.h"
#include "ExtentsHelper.h"
#include "ProjectionHelper.h"
#include "ShapeHelper.h"

// some simple encapsulation for readability of code
IGeoProjection* CMapView::GetMapToWgs84Transform() 
{ 
	VARIANT_BOOL vb;
	_projection->get_HasTransformation(&vb);
	return vb ?  _projection : NULL; 
}
IGeoProjection* CMapView::GetWgs84ToMapTransform() 
{ 
	VARIANT_BOOL vb;
	_wgsProjection->get_HasTransformation(&vb);
	return vb ?  _wgsProjection : NULL; 
}
IGeoProjection* CMapView::GetTilesToMapTransform() 
{ 
	VARIANT_BOOL vb;
	_tileProjection->get_HasTransformation(&vb);
	return vb ?  _tileProjection : NULL; 
}

IGeoProjection* CMapView::GetMapToTilesTransform() 
{
	VARIANT_BOOL vb;
	_tileReverseProjection->get_HasTransformation(&vb);
	return vb ?  _tileReverseProjection : NULL; 
}

IGeoProjection* CMapView::GetWgs84Projection() { return _wgsProjection; }
IGeoProjection* CMapView::GetGMercProjection() { return _gmercProjection; }
IGeoProjection* CMapView::GetMapProjection() { return _projection; }

// *****************************************************
//		ReleaseProjections()
// *****************************************************
void CMapView::ReleaseProjections()
{
	((CGeoProjection*)_projection)->SetIsFrozen(false);
	VARIANT_BOOL vb;
	_projection->Clear(&vb);
	UINT count = _projection->Release();

	_tileProjection->Clear(&vb);
	count = _tileProjection->Release();

	_tileReverseProjection->Clear(&vb);
	count = _tileReverseProjection->Release();
	
	_wgsProjection->Clear(&vb);
	count = _wgsProjection->Release();
	
	_gmercProjection->Clear(&vb);
	count = _gmercProjection->Release();
}

// *****************************************************
//		InitProjections()
// *****************************************************
void CMapView::InitProjections()
{
	ComHelper::CreateInstance(idGeoProjection, (IMyInterface**)&_tileProjection);
	ComHelper::CreateInstance(idGeoProjection, (IMyInterface**)&_tileReverseProjection);
	ComHelper::CreateInstance(idGeoProjection, (IMyInterface**)&_wgsProjection);
	ComHelper::CreateInstance(idGeoProjection, (IMyInterface**)&_gmercProjection);
	_transformationMode = tmNotDefined;
	VARIANT_BOOL vb;
	_wgsProjection->SetWgs84(&vb);				// EPSG:4326
	_gmercProjection->SetGoogleMercator(&vb);	// EPSG:3857
	
	ComHelper::CreateInstance(idGeoProjection, (IMyInterface**)&_projection);

	CComPtr<IGeoProjection> p = NULL;
	ComHelper::CreateInstance(idGeoProjection, (IMyInterface**)&p);
	SetGeoProjection(p);
}

// *****************************************************
//		SetGeoProjection()
// *****************************************************
void CMapView::SetGeoProjection(IGeoProjection* pVal)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	if (!pVal || pVal == _projection) {
		return;
	}

	bool preserveExtents = _activeLayers.size() == 0;
	IExtents* ext = preserveExtents ? GetGeographicExtents() : NULL;	// try to preserve extents

	((CGeoProjection*)_projection)->SetIsFrozen(false);
	_projection->StopTransform();

	ComHelper::SetRef(pVal, (IMyInterface**)&_projection);

#ifndef RELEASE_MODE
	CString s = ProjectionHelper::ToString(_projection);
	Debug::WriteLine("MAP PROJECTION SET: %s", s);
#endif

	_projectionChangeCount++;
	
	UpdateMapTranformation();

	UpdateTileProjection();	

	((CGeoProjection*)_projection)->SetIsFrozen(true);

	_projection->get_LinearUnits(&_unitsOfMeasure);

	ClearExtentHistory();

	// restore extents
	if (ext) 
	{
		if (preserveExtents) {
			SetGeographicExtents(ext);
		}

		ext->Release();
	}
	
	FireProjectionChanged();
}

// *****************************************************
//		UpdateMapTranformation()
// *****************************************************
void CMapView::UpdateMapTranformation()
{
	bool isEmpty = ProjectionHelper::IsEmpty(_projection);

	IGeoProjection* gp = NULL;

	_wgsProjection->StopTransform();

	if (!isEmpty)
	{
		VARIANT_BOOL isSame, vb;
		CComPtr<IExtents> box = NULL;
		box.Attach(ExtentsHelper::GetWorldBounds());
		_wgsProjection->get_IsSameExt(_projection, box, 20, &isSame);

		if (isSame)
		{
			_transformationMode = tmWgs84Complied;
		}
		else
		{
			_wgsProjection->StartTransform(_projection, &vb);	// must always have transformation to current projection
			_transformationMode = vb ? tmDoTransformation : tmNotDefined;
			if (!vb) {
				ErrorMessage(tkFAILED_TRANSFORM_WGS84_TO_MAP);
			}

			_projection->StartTransform(_wgsProjection, &vb);	// must always have transformation to WGS84
			if (!vb) {
				ErrorMessage(tkFAILED_TRANSFORM_MAP_TO_WGS84);
			}
		}
	}
	else
	{
		_transformationMode = tmNotDefined;
	}
}



// *****************************************************
//		GetProjection()
// *****************************************************
IGeoProjection* CMapView::GetGeoProjection (void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	if (_projection)
		_projection->AddRef();
	return _projection;
}

// ***************************************************************
//		ClearMapProjectionWithLastLayer()
// ***************************************************************
void CMapView::ClearMapProjectionWithLastLayer()
{
	if (_grabProjectionFromData)
	{
		VARIANT_BOOL isEmpty;
		_projection->get_IsEmpty(&isEmpty);
		if (!isEmpty)
		{
			CComPtr<IGeoProjection> proj = NULL;
			ComHelper::CreateInstance(idGeoProjection, (IMyInterface**)&proj);
			if (proj)
			{
				SetGeoProjection(proj);
			}
		}
	}
}

// ***************************************************************
//		GeodesicLength()
// ***************************************************************
DOUBLE CMapView::GeodesicLength(IShape* polyline)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	if (!polyline)
	{
		ErrorMessage(tkUNEXPECTED_NULL_PARAMETER);
		return 0.0;
	}

	ShpfileType shpType = ShapeHelper::GetShapeType2D(polyline);
	if (shpType != SHP_POLYLINE && shpType != SHP_POLYGON)
	{
		ErrorMessage(tkUNEXPECTED_SHAPE_TYPE);
		return 0.0;
	}

	VARIANT_BOOL ellipsoid;
	_geodesicShape->get_IsUsingEllipsoid(&ellipsoid);
	if (!ellipsoid)
	{
		ErrorMessage(tkFAILED_TRANSFORM_MAP_TO_WGS84);
		return 0.0;   // Euclidean area can be calculated using Shape.Area, so better to return 0.0
	}

	_geodesicShape->SetShape(polyline);

	double length = 0.0;
	 _geodesicShape->get_Length(&length);
	
	 return length;
}

// ***************************************************************
//		GeodesicArea()
// ***************************************************************
DOUBLE CMapView::GeodesicArea(IShape* polygon)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	if (!polygon)
	{
		ErrorMessage(tkUNEXPECTED_NULL_PARAMETER);
		return 0.0;
	}

	ShpfileType shpType = ShapeHelper::GetShapeType2D(polygon);
	if (shpType != SHP_POLYGON)
	{
		ErrorMessage(tkUNEXPECTED_SHAPE_TYPE);
		return 0.0;
	}

	VARIANT_BOOL ellipsoid;
	_geodesicShape->get_IsUsingEllipsoid(&ellipsoid);
	if (!ellipsoid)
	{
		ErrorMessage(tkFAILED_TRANSFORM_MAP_TO_WGS84);
		return 0.0;   // Euclidean area can be calculated using Shape.Area, so better to return 0.0
	}

	_geodesicShape->SetShape(polygon);

	double area = 0.0;
	_geodesicShape->get_Area(&area);

	return area;
}

// ***************************************************************
//		GeodesicDistance()
// ***************************************************************
DOUBLE CMapView::GeodesicDistance(DOUBLE projX1, DOUBLE projY1, DOUBLE projX2, DOUBLE projY2)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());
	IGeoProjection* gp = GetMapToWgs84Transform();
	if (!gp) {
		ErrorMessage(tkFAILED_TRANSFORM_MAP_TO_WGS84);
		return 0.0;
	}

	VARIANT_BOOL transform;
	gp->get_HasTransformation(&transform);
	if (_transformationMode == tmNotDefined || !transform)  {
		ErrorMessage(tkFAILED_TRANSFORM_MAP_TO_WGS84);
		return 0.0;
	}

	VARIANT_BOOL vb, vb2;
	gp->Transform(&projX1, &projY1, &vb);
	gp->Transform(&projX2, &projY2, &vb2);

	if (!vb || !vb2) {
		ErrorMessage(tkFAILED_TRANSFORM_MAP_TO_WGS84);
		return 0.0;
	}

	double distance = 0.0;
	GetUtils()->GeodesicDistance(projY1, projX1, projY2, projX2, &distance);
	return distance;
}

