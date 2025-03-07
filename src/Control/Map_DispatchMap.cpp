#include "stdafx.h"
#include "Map.h"

BEGIN_MESSAGE_MAP(CMapView, COleControl)
	//{{AFX_MSG_MAP(CMapView)
	// NOTE - ClassWizard will add and remove message map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	ON_WM_CREATE()
	ON_WM_SIZE()
	ON_WM_DROPFILES()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONDBLCLK()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	ON_WM_RBUTTONDOWN()
	ON_WM_RBUTTONDBLCLK()
	ON_WM_RBUTTONUP()
	ON_WM_SETCURSOR()
	ON_WM_TIMER()
	ON_WM_MBUTTONUP()
	ON_WM_MOUSEWHEEL()
	ON_WM_KEYDOWN()
	ON_WM_KEYUP()
	ON_WM_MOUSELEAVE()

	//ON_WM_CHAR()
	//}}AFX_MSG_MAP
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
	
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(CMapView, COleControl)
	//{{AFX_DISPATCH_MAP(CMapView)
	// NOTE - ClassWizard will add and remove dispatch map entries
	//    DO NOT EDIT what you see in these blocks of generated code !
	DISP_PROPERTY_NOTIFY(CMapView, "BackColor", m_backColor, OnBackColorChanged, VT_COLOR)
	DISP_PROPERTY_NOTIFY(CMapView, "ZoomPercent", m_zoomPercent, OnZoomPercentChanged, VT_R8)
	DISP_PROPERTY_EX(CMapView, "CursorMode", GetCursorMode, SetCursorMode, VT_I2)
	DISP_PROPERTY_NOTIFY(CMapView, "MapCursor", m_mapCursor, OnMapCursorChanged, VT_I2)
	DISP_PROPERTY_NOTIFY(CMapView, "UDCursorHandle", m_uDCursorHandle, OnUDCursorHandleChanged, VT_I4)
	DISP_PROPERTY_NOTIFY(CMapView, "SendMouseDown", m_sendMouseDown, OnSendMouseDownChanged, VT_BOOL)
	DISP_PROPERTY_NOTIFY(CMapView, "SendMouseUp", m_sendMouseUp, OnSendMouseUpChanged, VT_BOOL)
	DISP_PROPERTY_NOTIFY(CMapView, "SendMouseMove", m_sendMouseMove, OnSendMouseMoveChanged, VT_BOOL)
	DISP_PROPERTY_NOTIFY(CMapView, "SendSelectBoxDrag", m_sendSelectBoxDrag, OnSendSelectBoxDragChanged, VT_BOOL)
	DISP_PROPERTY_NOTIFY(CMapView, "SendSelectBoxFinal", m_sendSelectBoxFinal, OnSendSelectBoxFinalChanged, VT_BOOL)
	DISP_PROPERTY_NOTIFY(CMapView, "ExtentPad", m_extentPad, OnExtentPadChanged, VT_R8)
	DISP_PROPERTY_NOTIFY(CMapView, "ExtentHistory", _extentHistoryCount, OnExtentHistoryChanged, VT_I4)
	DISP_PROPERTY_NOTIFY(CMapView, "Key", m_key, OnKeyChanged, VT_BSTR)
	DISP_PROPERTY_NOTIFY(CMapView, "DoubleBuffer", m_doubleBuffer, OnDoubleBufferChanged, VT_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "GlobalCallback", dispidGlobalCallback, GetGlobalCallback, SetGlobalCallback, VT_DISPATCH)
	DISP_PROPERTY_EX(CMapView, "NumLayers", GetNumLayers, SetNotSupported, VT_I4)
	DISP_PROPERTY_EX_ID(CMapView, "Extents", dispidExtents, GetExtents, SetExtents, VT_DISPATCH)
	DISP_PROPERTY_EX(CMapView, "LastErrorCode", GetLastErrorCode, SetNotSupported, VT_I4)
	DISP_PROPERTY_EX(CMapView, "IsLocked", GetIsLocked, SetNotSupported, VT_I2)
	DISP_PROPERTY_EX(CMapView, "MapState", GetMapState, SetMapState, VT_BSTR)
	DISP_FUNCTION(CMapView, "Redraw", Redraw, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION(CMapView, "AddLayer", AddLayer, VT_I4, VTS_DISPATCH VTS_BOOL)
	DISP_FUNCTION(CMapView, "RemoveLayer", RemoveLayer, VT_EMPTY, VTS_I4)
	DISP_FUNCTION(CMapView, "RemoveAllLayers", RemoveAllLayers, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION(CMapView, "MoveLayerUp", MoveLayerUp, VT_BOOL, VTS_I4)
	DISP_FUNCTION(CMapView, "MoveLayerDown", MoveLayerDown, VT_BOOL, VTS_I4)
	DISP_FUNCTION(CMapView, "MoveLayer", MoveLayer, VT_BOOL, VTS_I4 VTS_I4)
	DISP_FUNCTION(CMapView, "MoveLayerTop", MoveLayerTop, VT_BOOL, VTS_I4)
	DISP_FUNCTION(CMapView, "MoveLayerBottom", MoveLayerBottom, VT_BOOL, VTS_I4)
	DISP_FUNCTION(CMapView, "ZoomToMaxExtents", ZoomToMaxExtents, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION(CMapView, "ZoomToLayer", ZoomToLayer, VT_EMPTY, VTS_I4)
	DISP_FUNCTION(CMapView, "ZoomToShape", ZoomToShape, VT_EMPTY, VTS_I4 VTS_I4)
	DISP_FUNCTION(CMapView, "ZoomIn", ZoomIn, VT_EMPTY, VTS_R8)
	DISP_FUNCTION(CMapView, "ZoomOut", ZoomOut, VT_EMPTY, VTS_R8)
	DISP_FUNCTION(CMapView, "ZoomToPrev", ZoomToPrev, VT_I4, VTS_NONE)
	
	DISP_FUNCTION(CMapView, "ProjToPixel", ProjToPixel, VT_EMPTY, VTS_R8 VTS_R8 VTS_PR8 VTS_PR8)
	DISP_FUNCTION(CMapView, "PixelToProj", PixelToProj, VT_EMPTY, VTS_R8 VTS_R8 VTS_PR8 VTS_PR8)
	DISP_FUNCTION(CMapView, "ClearDrawing", ClearDrawing, VT_EMPTY, VTS_I4)
	DISP_FUNCTION(CMapView, "ClearDrawings", ClearDrawings, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION(CMapView, "SnapShot", SnapShot, VT_DISPATCH, VTS_DISPATCH)
	DISP_FUNCTION(CMapView, "ApplyLegendColors", ApplyLegendColors, VT_BOOL, VTS_DISPATCH)
	DISP_FUNCTION(CMapView, "LockWindow", LockWindow, VT_EMPTY, VTS_I2)
	DISP_FUNCTION(CMapView, "Resize", Resize, VT_EMPTY, VTS_I4 VTS_I4)
	DISP_FUNCTION(CMapView, "ShowToolTip", ShowToolTip, VT_EMPTY, VTS_BSTR VTS_I4)
	DISP_FUNCTION(CMapView, "AddLabel", AddLabel, VT_EMPTY, VTS_I4 VTS_BSTR VTS_COLOR VTS_R8 VTS_R8 VTS_I2)
	DISP_FUNCTION(CMapView, "ClearLabels", ClearLabels, VT_EMPTY, VTS_I4)
	DISP_FUNCTION(CMapView, "LayerFont", LayerFont, VT_EMPTY, VTS_I4 VTS_BSTR VTS_I4)
	DISP_FUNCTION(CMapView, "GetColorScheme", GetColorScheme, VT_DISPATCH, VTS_I4)
	DISP_FUNCTION(CMapView, "NewDrawing", NewDrawing, VT_I4, VTS_I2)
	DISP_FUNCTION(CMapView, "DrawPoint", DrawPoint, VT_EMPTY, VTS_R8 VTS_R8 VTS_I4 VTS_COLOR)
	DISP_FUNCTION(CMapView, "DrawLine", DrawLine, VT_EMPTY, VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I4 VTS_COLOR)
	DISP_FUNCTION(CMapView, "DrawCircle", DrawCircle, VT_EMPTY, VTS_R8 VTS_R8 VTS_R8 VTS_COLOR VTS_BOOL)
	DISP_FUNCTION(CMapView, "DrawPolygon", DrawPolygon, VT_EMPTY, VTS_VARIANT VTS_VARIANT VTS_I4 VTS_COLOR VTS_BOOL)
	DISP_PROPERTY_PARAM(CMapView, "LayerKey", GetLayerKey, SetLayerKey, VT_BSTR, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "LayerPosition", GetLayerPosition, SetNotSupported, VT_I4, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "LayerHandle", GetLayerHandle, SetNotSupported, VT_I4, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "LayerVisible", GetLayerVisible, SetLayerVisible, VT_BOOL, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerFillColor", GetShapeLayerFillColor, SetShapeLayerFillColor, VT_COLOR, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeFillColor", GetShapeFillColor, SetShapeFillColor, VT_COLOR, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerLineColor", GetShapeLayerLineColor, SetShapeLayerLineColor, VT_COLOR, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLineColor", GetShapeLineColor, SetShapeLineColor, VT_COLOR, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerPointColor", GetShapeLayerPointColor, SetShapeLayerPointColor, VT_COLOR, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapePointColor", GetShapePointColor, SetShapePointColor, VT_COLOR, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerDrawFill", GetShapeLayerDrawFill, SetShapeLayerDrawFill, VT_BOOL, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeDrawFill", GetShapeDrawFill, SetShapeDrawFill, VT_BOOL, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerDrawLine", GetShapeLayerDrawLine, SetShapeLayerDrawLine, VT_BOOL, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeDrawLine", GetShapeDrawLine, SetShapeDrawLine, VT_BOOL, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerDrawPoint", GetShapeLayerDrawPoint, SetShapeLayerDrawPoint, VT_BOOL, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeDrawPoint", GetShapeDrawPoint, SetShapeDrawPoint, VT_BOOL, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerLineWidth", GetShapeLayerLineWidth, SetShapeLayerLineWidth, VT_R4, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLineWidth", GetShapeLineWidth, SetShapeLineWidth, VT_R4, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerPointSize", GetShapeLayerPointSize, SetShapeLayerPointSize, VT_R4, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapePointSize", GetShapePointSize, SetShapePointSize, VT_R4, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerFillTransparency", GetShapeLayerFillTransparency, SetShapeLayerFillTransparency, VT_R4, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeFillTransparency", GetShapeFillTransparency, SetShapeFillTransparency, VT_R4, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerLineStipple", GetShapeLayerLineStipple, SetShapeLayerLineStipple, VT_I2, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLineStipple", GetShapeLineStipple, SetShapeLineStipple, VT_I2, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerFillStipple", GetShapeLayerFillStipple, SetShapeLayerFillStipple, VT_I2, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeFillStipple", GetShapeFillStipple, SetShapeFillStipple, VT_I2, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeVisible", GetShapeVisible, SetShapeVisible, VT_BOOL, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ImageLayerPercentTransparent", GetImageLayerPercentTransparent, SetImageLayerPercentTransparent, VT_R4, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ErrorMsg", GetErrorMsg, SetNotSupported, VT_BSTR, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "DrawingKey", GetDrawingKey, SetDrawingKey, VT_BSTR, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapeLayerPointType", GetShapeLayerPointType, SetShapeLayerPointType, VT_I2, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "ShapePointType", GetShapePointType, SetShapePointType, VT_I2, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "LayerLabelsVisible", GetLayerLabelsVisible, SetLayerLabelsVisible, VT_BOOL, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "UDLineStipple", GetUDLineStipple, SetUDLineStipple, VT_I4, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "UDFillStipple", GetUDFillStipple, SetUDFillStipple, VT_I4, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "UDPointType", GetUDPointType, SetUDPointType, VT_DISPATCH, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "GetObject", GetGetObject, SetNotSupported, VT_DISPATCH, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "SetImageLayerColorScheme", dispidSetImageLayerColorScheme, SetImageLayerColorScheme, VT_BOOL, VTS_I4 VTS_DISPATCH)
	DISP_FUNCTION_ID(CMapView, "UpdateImage", dispidUpdateImage, UpdateImage, VT_EMPTY, VTS_I4)
	DISP_PROPERTY_EX_ID(CMapView, "SerialNumber", dispidSerialNumber, GetSerialNumber, SetSerialNumber, VT_BSTR)
	DISP_PROPERTY_EX_ID(CMapView, "LineSeparationFactor", dispidLineSeparationFactor, GetLineSeparationFactor, SetLineSeparationFactor, VT_UI1)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerName", dispidLayerName, GetLayerName, SetLayerName, VT_BSTR, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "GridFileName", dispidGridFileName, GetGridFileName, SetGridFileName, VT_BSTR, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "LayerLabelsShadow", GetLayerLabelsShadow, SetLayerLabelsShadow, VT_BOOL, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "LayerLabelsScale", GetLayerLabelsScale, SetLayerLabelsScale, VT_BOOL, VTS_I4)
	DISP_FUNCTION(CMapView, "AddLabelEx", AddLabelEx, VT_EMPTY, VTS_I4 VTS_BSTR VTS_COLOR VTS_R8 VTS_R8 VTS_I2 VTS_R8)
	DISP_FUNCTION(CMapView, "GetLayerStandardViewWidth", GetLayerStandardViewWidth, VT_EMPTY, VTS_I4 VTS_PR8)
	DISP_FUNCTION(CMapView, "SetLayerStandardViewWidth", SetLayerStandardViewWidth, VT_EMPTY, VTS_I4 VTS_R8)
	DISP_PROPERTY_PARAM(CMapView, "LayerLabelsOffset", GetLayerLabelsOffset, SetLayerLabelsOffset, VT_I4, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "LayerLabelsShadowColor", GetLayerLabelsShadowColor, SetLayerLabelsShadowColor, VT_COLOR, VTS_I4)
	DISP_PROPERTY_PARAM(CMapView, "UseLabelCollision", GetUseLabelCollision, SetUseLabelCollision, VT_BOOL, VTS_I4)
	DISP_FUNCTION(CMapView, "IsTIFFGrid", IsTIFFGrid, VT_BOOL, VTS_BSTR)
	DISP_FUNCTION(CMapView, "IsSameProjection", IsSameProjection, VT_BOOL, VTS_BSTR VTS_BSTR)
	DISP_FUNCTION(CMapView, "ZoomToMaxVisibleExtents", ZoomToMaxVisibleExtents, VT_EMPTY, VTS_NONE)
	DISP_PROPERTY_EX(CMapView, "MapResizeBehavior", GetMapResizeBehavior, SetMapResizeBehavior, VT_I2)
	DISP_PROPERTY_EX(CMapView, "HWnd", HWnd, SetNotSupported, VT_I4)
	DISP_FUNCTION(CMapView, "set_UDPointImageListAdd", set_UDPointImageListAdd, VT_I4, VTS_I4 VTS_DISPATCH)
	DISP_PROPERTY_PARAM(CMapView, "ShapePointImageListID", GetShapePointImageListID, SetShapePointImageListID, VT_I4, VTS_I4 VTS_I4)
	DISP_FUNCTION(CMapView, "get_UDPointImageListCount", get_UDPointImageListCount, VT_I4, VTS_I4)
	DISP_FUNCTION(CMapView, "get_UDPointImageListItem", get_UDPointImageListItem, VT_DISPATCH, VTS_I4 VTS_I4)
	DISP_FUNCTION(CMapView, "ClearUDPointImageList", ClearUDPointImageList, VT_EMPTY, VTS_I4)
	DISP_FUNCTION(CMapView, "DrawLineEx", DrawLineEx, VT_EMPTY, VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I4 VTS_COLOR)
	DISP_FUNCTION(CMapView, "DrawPointEx", DrawPointEx, VT_EMPTY, VTS_I4 VTS_R8 VTS_R8 VTS_I4 VTS_COLOR)
	DISP_FUNCTION(CMapView, "DrawCircleEx", DrawCircleEx, VT_EMPTY, VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_COLOR VTS_BOOL)
	DISP_PROPERTY_NOTIFY_ID(CMapView, "SendOnDrawBackBuffer", dispidSendOnDrawBackBuffer, m_sendOnDrawBackBuffer, OnSendOnDrawBackBufferChanged, VT_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "MultilineLabels", dispidMultilineLabels, GetMultilineLabeling, SetMultilineLabeling, VT_BOOL)
	DISP_FUNCTION_ID(CMapView, "LabelColor", dispidLabelColor, LabelColor, VT_EMPTY, VTS_I4 VTS_COLOR)
	DISP_FUNCTION_ID(CMapView, "SetDrawingLayerVisible", dispidSetDrawingLayerVisible, SetDrawingLayerVisible, VT_EMPTY, VTS_I4 VTS_BOOL)
	DISP_FUNCTION_ID(CMapView, "ClearDrawingLabels", dispidClearDrawingLabels, ClearDrawingLabels, VT_EMPTY, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "DrawingFont", dispidDrawingFont, DrawingFont, VT_EMPTY, VTS_I4 VTS_BSTR VTS_I4)
	DISP_FUNCTION_ID(CMapView, "AddDrawingLabelEx", dispidAddDrawingLabelEx, AddDrawingLabelEx, VT_EMPTY, VTS_I4 VTS_BSTR VTS_COLOR VTS_R8 VTS_R8 VTS_I2 VTS_R8)
	DISP_FUNCTION_ID(CMapView, "AddDrawingLabel", dispidAddDrawingLabel, AddDrawingLabel, VT_EMPTY, VTS_I4 VTS_BSTR VTS_COLOR VTS_R8 VTS_R8 VTS_I2)
	DISP_PROPERTY_PARAM_ID(CMapView, "DrawingLabelsOffset", dispidDrawingLabelsOffset, GetDrawingLabelsOffset, SetDrawingLabelsOffset, VT_I4, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "DrawingLabelsShadowColor", dispidDrawingLabelsShadowColor, GetDrawingLabelsShadowColor, SetDrawingLabelsShadowColor, VT_COLOR, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "DrawingLabelsShadow", dispidDrawingLabelsShadow, GetDrawingLabelsShadow, SetDrawingLabelsShadow, VT_BOOL, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "DrawingLabelsScale", dispidDrawingLabelsScale, GetDrawingLabelsScale, SetDrawingLabelsScale, VT_BOOL, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "UseDrawingLabelCollision", dispidUseDrawingLabelCollision, GetUseDrawingLabelCollision, SetUseDrawingLabelCollision, VT_BOOL, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "DrawingLabelsVisible", dispidDrawingLabelsVisible, GetDrawingLabelsVisible, SetDrawingLabelsVisible, VT_BOOL, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "GetDrawingStandardViewWidth", dispidGetDrawingStandardViewWidth, GetDrawingStandardViewWidth, VT_EMPTY, VTS_I4 VTS_PR8)
	DISP_FUNCTION_ID(CMapView, "SetDrawingStandardViewWidth", dispidSetDrawingStandardViewWidth, SetDrawingStandardViewWidth, VT_EMPTY, VTS_I4 VTS_R8)
	DISP_FUNCTION(CMapView, "DrawWidePolygon", DrawWidePolygon, VT_EMPTY, VTS_VARIANT VTS_VARIANT VTS_I4 VTS_COLOR VTS_BOOL VTS_I2)
	DISP_FUNCTION(CMapView, "DrawWideCircle", DrawWideCircle, VT_EMPTY, VTS_R8 VTS_R8 VTS_R8 VTS_COLOR VTS_BOOL VTS_I2)
	DISP_FUNCTION_ID(CMapView, "SnapShot2", dispidSnapShot2, SnapShot2, VT_DISPATCH, VTS_I4 VTS_R8 VTS_I4)
	DISP_FUNCTION_ID(CMapView, "SnapShot3", dispidSnapShot3, SnapShot3, VT_DISPATCH, VTS_R8 VTS_R8 VTS_R8 VTS_R8 VTS_I4)
	DISP_FUNCTION_ID(CMapView, "LayerFontEx", dispidLayerFontEx, LayerFontEx, VT_EMPTY, VTS_I4 VTS_BSTR VTS_I4 VTS_BOOL VTS_BOOL VTS_BOOL)
	DISP_FUNCTION_ID(CMapView, "set_UDPointFontCharFont", dispidset_UDPointFontCharFont, set_UDPointFontCharFont, VT_EMPTY, VTS_I4 VTS_BSTR VTS_R4 VTS_BOOL VTS_BOOL VTS_BOOL)
	DISP_FUNCTION_ID(CMapView, "set_UDPointFontCharListAdd", dispidset_UDPointFontCharListAdd, set_UDPointFontCharListAdd, VT_I4, VTS_I4 VTS_I4 VTS_COLOR)
	DISP_FUNCTION_ID(CMapView, "set_UDPointFontCharFontSize", dispidset_UDPointFontCharFontSize, set_UDPointFontCharFontSize, VT_EMPTY, VTS_I4 VTS_R4)
	DISP_PROPERTY_PARAM_ID(CMapView, "ShapePointFontCharListID", dispidShapePointFontCharListID, GetShapePointFontCharListID, SetShapePointFontCharListID, VT_I4, VTS_I4 VTS_I4)
	DISP_FUNCTION_ID(CMapView, "ReSourceLayer", dispidReSourceLayer, ReSourceLayer, VT_EMPTY, VTS_I4 VTS_BSTR)
    DISP_PROPERTY_PARAM_ID(CMapView, "ShapeStippleColor", dispidShapeStippleColor, GetShapeStippleColor, SetShapeStippleColor, VT_COLOR, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "ShapeLayerStippleColor", dispidShapeLayerStippleColor, GetShapeLayerStippleColor, SetShapeLayerStippleColor, VT_COLOR, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "ShapeStippleTransparent", dispidShapeStippleTransparent, GetShapeStippleTransparent, SetShapeStippleTransparent, VT_BOOL, VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "ShapeLayerStippleTransparent", dispidShapeLayerStippleTransparent, GetShapeLayerStippleTransparent, SetShapeLayerStippleTransparent, VT_BOOL, VTS_I4)
	DISP_PROPERTY_EX_ID(CMapView, "TrapRMouseDown", dispidTrapRMouseDown, GetTrapRMouseDown, SetTrapRMouseDown, VT_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "DisableWaitCursor", dispidDisableWaitCursor, GetDisableWaitCursor, SetDisableWaitCursor, VT_BOOL)
	DISP_FUNCTION_ID(CMapView, "AdjustLayerExtents", dispidAdjustLayerExtents, AdjustLayerExtents, VT_BOOL, VTS_I4)
	DISP_PROPERTY_EX_ID(CMapView, "UseSeamlessPan", dispidUseSeamlessPan, GetUseSeamlessPan, SetUseSeamlessPan, VT_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "MouseWheelSpeed", dispidMouseWheelSpeed, GetMouseWheelSpeed, SetMouseWheelSpeed, VT_R8)
	DISP_PROPERTY_EX_ID(CMapView, "ShapeDrawingMethod", dispidShapeDrawingMethod, GetShapeDrawingMethod, SetShapeDrawingMethod, VT_I2)
	DISP_FUNCTION_ID(CMapView, "DrawPolygonEx", dispidDrawPolygonEx, DrawPolygonEx, VT_EMPTY, VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_COLOR VTS_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "CurrentScale", dispidCurrentScale, GetCurrentScale, SetCurrentScale, VT_R8)
	DISP_PROPERTY_PARAM_ID(CMapView, "DrawingLabels", dispidDrawingLabels, GetDrawingLabels, SetDrawingLabels, VT_DISPATCH, VTS_I4)
	DISP_PROPERTY_EX_ID(CMapView, "MapUnits", dispidMapUnits, GetMapUnits, SetMapUnits, VT_I2)
	DISP_FUNCTION_ID(CMapView, "SnapShotToDC", dispidSnapShotToDC, SnapShotToDC, VT_BOOL, VTS_I4 VTS_DISPATCH VTS_I4)
	DISP_FUNCTION_ID(CMapView, "SnapShotToDC2", dispidSnapShotToDC2, SnapShotToDC2, VT_BOOL, VTS_I4 VTS_DISPATCH VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 VTS_R4)
	DISP_FUNCTION_ID(CMapView, "LoadTilesForSnapshot", dispidLoadTilesForSnapshot, LoadTilesForSnapshot, VT_BOOL, VTS_DISPATCH VTS_I4 VTS_BSTR)
	DISP_FUNCTION_ID(CMapView, "DrawWideCircleEx", dispidDrawWideCircleEx, DrawWideCircleEx, VT_EMPTY, VTS_I4 VTS_R8 VTS_R8 VTS_R8 VTS_COLOR VTS_BOOL VTS_I2)
	DISP_FUNCTION_ID(CMapView, "DrawWidePolygonEx", dispidDrawWidePolygonEx, DrawWidePolygonEx, VT_EMPTY, VTS_I4 VTS_VARIANT VTS_VARIANT VTS_I4 VTS_COLOR VTS_BOOL VTS_I2)
	DISP_PROPERTY_EX_ID(CMapView, "DegreeRotationAngle", dispidMapRotationAngle, GetMapRotationAngle, SetMapRotationAngle, VT_R4)
	DISP_PROPERTY_EX_ID(CMapView, "RotatedExtent", dispidRotatedExtent, GetRotatedExtent, SetNotSupported, VT_DISPATCH)
	DISP_FUNCTION_ID(CMapView, "GetBaseProjectionPoint", dispidGetBaseProjectionPoint, GetBaseProjectionPoint, VT_DISPATCH, VTS_R8 VTS_R8)
	DISP_PROPERTY_EX_ID(CMapView, "CanUseImageGrouping", dispidCanUseImageGrouping, GetCanUseImageGrouping, SetCanUseImageGrouping, VT_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "VersionNumber", dispidVersionNumber, GetVersionNumber, SetNotSupported, VT_BSTR)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerMaxVisibleScale", dispidLayerMaxVisibleScale, GetLayerMaxVisibleScale, SetLayerMaxVisibleScale, VT_R8, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerMinVisibleScale", dispidLayerMinVisibleScale, GetLayerMinVisibleScale, SetLayerMinVisibleScale, VT_R8, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerMaxVisibleZoom", dispidLayerMaxVisibleZoom, GetLayerMaxVisibleZoom, SetLayerMaxVisibleZoom, VT_I4, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerMinVisibleZoom", dispidLayerMinVisibleZoom, GetLayerMinVisibleZoom, SetLayerMinVisibleZoom, VT_I4, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerDynamicVisibility", dispidLayerDynamicVisibility, GetLayerDynamicVisibility, SetLayerDynamicVisibility, VT_BOOL, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "DrawBackBuffer", dispidDrawBackBuffer, DrawBackBuffer, VT_EMPTY, VTS_I4 VTS_I4 VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerLabels", dispidLayerLabels, GetLayerLabels, SetLayerLabels, VT_DISPATCH, VTS_I4)
	DISP_PROPERTY_EX_ID(CMapView, "ShowRedrawTime", dispidShowRedrawTime, GetShowRedrawTime, SetShowRedrawTime, VT_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "ShowVersionNumber", dispidShowVersionNumber, GetShowVersionNumber, SetShowVersionNumber, VT_BOOL)
	DISP_PROPERTY_PARAM_ID(CMapView, "Shapefile", dispidShapefile, GetShapefile, SetShapefile, VT_DISPATCH, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "OgrLayer", dispidOgrLayer, GetOgrLayer, SetNotSupported, VT_DISPATCH, VTS_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "Image", dispidImage, GetImage, SetImage, VT_DISPATCH, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "SerializeLayer", dispidSerializeLayerOptions, SerializeLayer, VT_BSTR, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "DeserializeLayer", dispidDeserializeLayerOptions, DeserializeLayer, VT_BOOL, VTS_I4 VTS_BSTR)
	DISP_FUNCTION_ID(CMapView, "SaveMapState", dispidSaveMapState, SaveMapState, VT_BOOL, VTS_BSTR VTS_BOOL VTS_BOOL)
	DISP_FUNCTION_ID(CMapView, "LoadMapState", dispidLoadMapState, LoadMapState, VT_BOOL, VTS_BSTR VTS_DISPATCH)
	DISP_FUNCTION_ID(CMapView, "SaveLayerOptions", dispidSaveLayerOptions, SaveLayerOptions, VT_BOOL, VTS_I4 VTS_BSTR VTS_BOOL VTS_BSTR)
	DISP_FUNCTION_ID(CMapView, "LoadLayerOptions", dispidLoadLayerOptions, LoadLayerOptions, VT_BOOL, VTS_I4 VTS_BSTR VTS_PBSTR)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerDescription", dispidLayerDescription, GetLayerDescription, SetLayerDescription, VT_BSTR, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "DeserializeMapState", dispidDeserializeMapState, DeserializeMapState, VT_BOOL, VTS_BSTR VTS_BOOL VTS_BSTR)
	DISP_FUNCTION_ID(CMapView, "SerializeMapState", dispidSerializeMapState, SerializeMapState, VT_BSTR, VTS_BOOL VTS_BSTR)
	DISP_FUNCTION_ID(CMapView, "RemoveLayerOptions", dispidRemoveLayerOptions, RemoveLayerOptions, VT_BOOL, VTS_I4 VTS_BSTR)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerSkipOnSaving", dispidLayerSkipOnSaving, GetLayerSkipOnSaving, SetLayerSkipOnSaving, VT_BOOL, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "RemoveLayerWithoutClosing", dispidRemoveLayerWithoutClosing, RemoveLayerWithoutClosing, VT_EMPTY, VTS_I4)
	DISP_PROPERTY_EX_ID(CMapView, "MaxExtents", dispidMaxExtents, GetMaxExtents, SetNotSupported, VT_DISPATCH)
	DISP_PROPERTY_EX_ID(CMapView, "PixelsPerDegree", dispidPixelsPerDegree, GetPixelsPerDegree, SetNotSupported, VT_R8)
	DISP_PROPERTY_EX_ID(CMapView, "Tiles", dispidTiles, GetTiles, SetNotSupported, VT_DISPATCH)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerFilename", dispidLayerFilename, GetLayerFilename, SetNotSupported, VT_BSTR, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "ZoomToSelected", dispidZoomToSelected, ZoomToSelected, VT_BOOL, VTS_I4)
	DISP_PROPERTY_EX_ID(CMapView, "Projection", dispidProjection, GetGeoProjection, SetGeoProjection, VT_DISPATCH)
	DISP_PROPERTY_EX_ID(CMapView, "GeographicExtents", dispidGeographicExtents, GetGeographicExtents, SetNotSupported, VT_DISPATCH)
	DISP_FUNCTION_ID(CMapView, "SetGeographicExtents", dispidSetGeographicExtents, SetGeographicExtents, VT_BOOL, VTS_DISPATCH)
	DISP_PROPERTY_EX_ID(CMapView, "ScalebarVisible", dispidScalebarVisible, GetScalebarVisible, SetScalebarVisible, VT_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "ScalebarUnits", dispidScalebarUnits, GetScalebarUnits, SetScalebarUnits, VT_I2)
	DISP_PROPERTY_EX_ID(CMapView, "Measuring", dispidMeasuring, GetMeasuring, SetNotSupported, VT_DISPATCH)
	DISP_PROPERTY_EX_ID(CMapView, "ShapeEditor", dispidShapeEditor, GetShapeEditor, SetNotSupported, VT_DISPATCH)
	DISP_FUNCTION_ID(CMapView, "ZoomToTileLevel", dispidZoomToTileLevel, ZoomToTileLevel, VT_BOOL, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "ZoomToWorld", dispidZoomToWorld, ZoomToWorld, VT_BOOL, VTS_NONE)
	DISP_FUNCTION_ID(CMapView, "FindSnapPoint", dispidFindSnapPoint, FindSnapPoint, VT_BOOL, VTS_R8 VTS_R8 VTS_R8 VTS_PR8 VTS_PR8)
	DISP_FUNCTION_ID(CMapView, "Clear", dispidClear, Clear, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CMapView, "SetGeographicExtents2", dispidSetGeographicExtents2, SetGeographicExtents2, VT_BOOL, VTS_R8 VTS_R8 VTS_R8)
	DISP_FUNCTION_ID(CMapView, "AddLayerFromFilename", dispidAddLayerFromFilename, AddLayerFromFilename, VT_I4, VTS_BSTR VTS_I2 VTS_BOOL)
	DISP_FUNCTION_ID(CMapView, "AddLayerFromDatabase", dispidAddLayerFromDatabase, AddLayerFromDatabase, VT_I4, VTS_BSTR VTS_BSTR VTS_BOOL)
	DISP_FUNCTION_ID(CMapView, "GetKnownExtents", dispidGetKnownExtents, GetKnownExtents, VT_DISPATCH, VTS_I2)
	DISP_PROPERTY_EX_ID(CMapView, "ZoomBehavior", dispidZoomBehavior, GetZoomBehavior, SetZoomBehavior, VT_I2)
	DISP_PROPERTY_EX_ID(CMapView, "FileManager", dispidFileManager, GetFileManager, SetNotSupported, VT_DISPATCH)
	DISP_PROPERTY_EX_ID(CMapView, "Latitude", dispidLatitude, GetLatitude, SetLatitude, VT_R4)
	DISP_PROPERTY_EX_ID(CMapView, "Longitude", dispidLongitude, GetLongitude, SetLongitude, VT_R4)
	DISP_FUNCTION_ID(CMapView, "SetLatitudeLongitude", dispidSetLatitudeLongitude, SetLatitudeLongitude, VT_EMPTY, VTS_R8 VTS_R8)
	DISP_PROPERTY_EX_ID(CMapView, "CurrentZoom", dispidCurrentZoom, GetCurrentZoom, SetCurrentZoom, VT_I4)
	DISP_PROPERTY_EX_ID(CMapView, "TileProvider", dispidTileProvider, GetTileProvider, SetTileProvider, VT_I2)
	DISP_PROPERTY_EX_ID(CMapView, "Projection", dispidMapProjection, GetProjection, SetProjection, VT_I2)
	DISP_PROPERTY_EX_ID(CMapView, "KnownExtents", dispidKnownExtents, GetKnownExtentsCore, SetKnownExtentsCore, VT_I2)
	DISP_PROPERTY_EX_ID(CMapView, "ShowCoordinates", dispidShowCoordinates, GetShowCoordinates, SetShowCoordinates, VT_I2)
	DISP_PROPERTY_EX_ID(CMapView, "GrabProjectionFromData", dispidGrabProjectionFromData, GetGrabProjectionFromData, SetGrabProjectionFromData, VT_I2)
	DISP_FUNCTION_ID(CMapView, "Redraw2", dispidRedraw2, Redraw2, VT_EMPTY, VTS_I2)
	DISP_FUNCTION_ID(CMapView, "Redraw3", dispidRedraw3, Redraw3, VT_EMPTY, VTS_I2 VTS_BOOL)
	DISP_FUNCTION_ID(CMapView, "ProjToDegrees", dispidProjToDegrees, ProjToDegrees, VT_BOOL, VTS_R8 VTS_R8 VTS_PR8 VTS_PR8)
	DISP_FUNCTION_ID(CMapView, "DegreesToProj", dispidDegreesToProj, DegreesToProj, VT_BOOL, VTS_R8 VTS_R8 VTS_PR8 VTS_PR8)
	DISP_FUNCTION_ID(CMapView, "PixelToDegrees", dispidPixelToDegrees, PixelToDegrees, VT_BOOL, VTS_R8 VTS_R8 VTS_PR8 VTS_PR8)
	DISP_FUNCTION_ID(CMapView, "DegreesToPixel", dispidDegreesToPixel, DegreesToPixel, VT_BOOL, VTS_R8 VTS_R8 VTS_PR8 VTS_PR8)
	DISP_PROPERTY_EX_ID(CMapView, "ShowZoomBar", dispidShowZoomBar, GetShowZoomBar, SetShowZoomBar, VT_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "AnimationOnZooming", dispidAnimationOnZooming, GetAnimationOnZooming, SetAnimationOnZooming, VT_I2)
	DISP_PROPERTY_EX_ID(CMapView, "InertiaOnPanning", dispidInertiaOnPanning, GetInertiaOnPanning, SetInertiaOnPanning, VT_I2)
	DISP_PROPERTY_EX_ID(CMapView, "ReuseTileBuffer", dispidReuseTileBuffer, GetReuseTileBuffer, SetReuseTileBuffer, VT_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "ZoomBarVerbosity", dispidZoomBarVerbosity, GetZoomBarVerbosity, SetZoomBarVerbosity, VT_I2)
	DISP_PROPERTY_EX_ID(CMapView, "ZoomBoxStyle", dispidZoomBoxStyle, GetZoomBoxStyle, SetZoomBoxStyle, VT_I2)
	DISP_PROPERTY_EX_ID(CMapView, "ZoomBarMinZoom", dispidZoomBarMinZoom, GetZoomBarMinZoom, SetZoomBarMinZoom, VT_I4)
	DISP_PROPERTY_EX_ID(CMapView, "ZoomBarMaxZoom", dispidZoomBarMaxZoom, GetZoomBarMaxZoom, SetZoomBarMaxZoom, VT_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerVisibleAtCurrentScale", dispidLayerVisibleAtCurrentScale, GetLayerVisibleAtCurrentScale, SetNotSupported, VT_BOOL, VTS_I4)
	DISP_PROPERTY_EX_ID(CMapView, "UndoList", dispidUndoList, GetUndoList, SetNotSupported, VT_DISPATCH)
	DISP_PROPERTY_EX_ID(CMapView, "Identifier", dispidIdentifier, GetIdentifier, SetNotSupported, VT_DISPATCH)
	DISP_FUNCTION_ID(CMapView, "Undo", dispidUndo, Undo, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CMapView, "DrawLabel", dispidDrawLabel, DrawLabel, VT_I4, VTS_BSTR VTS_R8 VTS_R8 VTS_R8)
	DISP_FUNCTION_ID(CMapView, "DrawLabelEx", dispidDrawLabelEx, DrawLabelEx, VT_I4, VTS_I4 VTS_BSTR VTS_R8 VTS_R8 VTS_R8)
	DISP_FUNCTION_ID(CMapView, "GeodesicLength", dispidGeodesicLength, GeodesicLength, VT_R8, VTS_DISPATCH)
	DISP_FUNCTION_ID(CMapView, "GeodesicDistance", dispidGeodesicDistance, GeodesicDistance, VT_R8, VTS_R8 VTS_R8 VTS_R8 VTS_R8)
	DISP_FUNCTION_ID(CMapView, "GeodesicArea", dispidGeodesicArea, GeodesicArea, VT_R8, VTS_DISPATCH)
	DISP_PROPERTY_EX_ID(CMapView, "IdentifiedShapes", dispidIdentifiedShapes, GetIdentifiedShapes, SetNotSupported, VT_DISPATCH)
	DISP_PROPERTY_EX_ID(CMapView, "FocusRectangle", dispidFocusRectangle, GetFocusRectangle, SetNotSupported, VT_DISPATCH)
	DISP_PROPERTY_ID(CMapView, "CustomDrawingFlags", dispidCustomDrawingFlags, _customDrawingFlags, VT_I4)
	DISP_PROPERTY_PARAM_ID(CMapView, "LayerExtents", dispidLayerExtents, GetLayerExtents, SetNotSupported, VT_DISPATCH, VTS_I4)
	DISP_PROPERTY_NOTIFY_ID(CMapView, "ShowCoordinatesFormat", dispidShowCoordinatesFormat, _showCoordinatesFormat, OnShowCoordinatesFormatChanged, VT_I4)
	DISP_FUNCTION_ID(CMapView, "ZoomToNext", dispidZoomToNext, ZoomToNext, VT_I4, VTS_NONE)
	DISP_PROPERTY_EX_ID(CMapView, "ExtentHistoryUndoCount", dispidExtentHistoryUndoCount, GetExtentHistoryUndoCount, SetNotSupported, VT_I4)
	DISP_PROPERTY_EX_ID(CMapView, "ExtentHistoryRedoCount", dispidExtentHistoryRedoCount, GetExtentHistoryRedoCount, SetNotSupported, VT_I4)
	DISP_FUNCTION_ID(CMapView, "ClearExtentHistory", dispidClearExtentHistory, ClearExtentHistory, VT_EMPTY, VTS_NONE)
	DISP_PROPERTY_PARAM_ID(CMapView, "WmsLayer", dispidWmsLayer, GetWmsLayer, SetNotSupported, VT_DISPATCH, VTS_I4)
	DISP_PROPERTY_EX_ID(CMapView, "UseAlternatePanCursor", dispidUseAlternatePanCursor, GetUseAlternatePanCursor, SetUseAlternatePanCursor, VT_BOOL)
	DISP_PROPERTY_EX_ID(CMapView, "RecenterMapOnZoom", dispidRecenterMapOnZoom, GetRecenterMapOnZoom, SetRecenterMapOnZoom, VT_BOOL)
	DISP_FUNCTION_ID(CMapView, "ReloadOgrLayerFromSource", dispidReloadOgrLayerFromSource, ReloadOgrLayerFromSource, VT_BOOL, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "RestartBackgroundLoading", dispidRestartBackgroundLoading, RestartBackgroundLoading, VT_EMPTY, VTS_I4)
	DISP_FUNCTION_ID(CMapView, "StartNewBoundShape", dispidStartNewBoundShape, StartNewBoundShape, VT_BOOL, VTS_R8 VTS_R8)
	DISP_FUNCTION_ID(CMapView, "StartNewBoundShapeEx", dispidStartNewBoundShapeEx, StartNewBoundShapeEx, VT_BOOL, VTS_I4)

END_DISPATCH_MAP()
//}}AFX_DISPATCH_MAP
