// DrawingRectangle.h : Declaration of the CDrawingRectangle

#pragma once

// CDrawingRectangle
class CDrawingRectangle : public IDrawingRectangle
{
public:
	CDrawingRectangle()
	{
		_x = _y = _width = _height = 0.0;
		_visible = VARIANT_TRUE;
		_referenceType = dlScreenReferencedList;
		_transparency = 255;
		_color = 255;	// Red
		_lineWidth = 2;
	}

public:
	STDMETHOD(get_X)(DOUBLE* pVal);
	STDMETHOD(put_X)(DOUBLE newVal);
	STDMETHOD(get_Y)(DOUBLE* pVal);
	STDMETHOD(put_Y)(DOUBLE newVal);
	STDMETHOD(get_Width)(DOUBLE* pVal);
	STDMETHOD(put_Width)(DOUBLE newVal);
	STDMETHOD(get_Height)(DOUBLE* pVal);
	STDMETHOD(put_Height)(DOUBLE newVal);
	STDMETHOD(get_Visible)(VARIANT_BOOL* pVal);
	STDMETHOD(put_Visible)(VARIANT_BOOL newVal);
	STDMETHOD(get_ReferenceType)(tkDrawReferenceList* pVal);
	STDMETHOD(put_ReferenceType)(tkDrawReferenceList newVal);
	STDMETHOD(get_FillTransparency)(BYTE* pVal);
	STDMETHOD(put_FillTransparency)(BYTE newVal);
	STDMETHOD(get_Color)(OLE_COLOR* pVal);
	STDMETHOD(put_Color)(OLE_COLOR newVal);
	STDMETHOD(get_LineWidth)(float* pVal);
	STDMETHOD(put_LineWidth)(float newVal);

private:
	double _x;
	double _y;
	double _width;
	double _height;
    VARIANT_BOOL _visible;
	tkDrawReferenceList _referenceType;
	BYTE _transparency;
	OLE_COLOR _color;
	float _lineWidth;
	
};
