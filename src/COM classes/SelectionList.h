// SelectionList.h : Declaration of the CSelectionList
#pragma once
#include "SelectedItem.h"
using namespace std;

class CSelectionList : public ISelectionList
{
public:
	CSelectionList()
	{
	}

public:
	STDMETHOD(AddShape)(LONG layerHandle, LONG shapeIndex);
	STDMETHOD(get_Count)(LONG* pVal);
	STDMETHOD(get_LayerHandle)(LONG index, LONG* pVal);
	STDMETHOD(get_ShapeIndex)(LONG index, LONG* pVal);
	STDMETHOD(Clear)();
	STDMETHOD(RemoveByLayerHandle)(LONG layerHandle);
	STDMETHOD(AddPixel)(LONG layerHandle, LONG column, LONG row);
	STDMETHOD(get_LayerType)(LONG index, tkLayerType* pVal);
	STDMETHOD(get_RasterX)(LONG index, LONG* pVal);
	STDMETHOD(get_RasterY)(LONG index, LONG* pVal);
	STDMETHOD(get_Row)(LONG index, LONG* pVal);
	STDMETHOD(get_Column)(LONG index, LONG* pVal);
	STDMETHOD(TogglePixel)(LONG layerHandle, LONG column, LONG row);

private:
	vector<SelectedItem*> _items;

public:
	void UpdatePixelBounds(long layerHandle, IImage* source, bool polygon);
	SelectedItem* GetItem(int index);
	
};
