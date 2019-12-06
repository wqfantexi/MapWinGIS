/**************************************************************************************
 * File name: ShapefileCategory.h
 *
 * Project: MapWindow Open Source (MapWinGis ActiveX control) 
 * Description: declaration of CShapefileCategory - a class representing a particular
 * of shapfile visualization scheme
 *
 **************************************************************************************
 * The contents of this file are subject to the Mozilla Public License Version 1.1
 * (the "License"); you may not use this file except in compliance with 
 * the License. You may obtain a copy of the License at http://www.mozilla.org/mpl/ 
 * See the License for the specific language governing rights and limitations
 * under the License.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 ************************************************************************************** 
 * Contributor(s): 
 * (Open source contributors should list themselves and their modifications here). */
 // lsu 9 may 2010 - created the file

#pragma once
#include "ShapeDrawingOptions.h"

// CShapefileCategory
class CShapefileCategory : public IShapefileCategory
{
public:
	CShapefileCategory()
	{
		_name = SysAllocString(L"");
		_expression = SysAllocString(L"");
		_priority = - 1;
		_drawingOptions = NULL;
		
		_categories = NULL;
		_categoryValue = cvExpression;
	}
	
	~CShapefileCategory()
	{
		::SysFreeString(_name);
		::SysFreeString(_expression);
		if(_drawingOptions != NULL)
			_drawingOptions->Release();
	}

public:
	STDMETHOD(get_Name)(BSTR* retval);
	STDMETHOD(put_Name)(BSTR newVal);
	STDMETHOD(get_Expression)(BSTR* retval);
	STDMETHOD(put_Expression)(BSTR newVal);
	STDMETHOD(get_DrawingOptions)(IShapeDrawingOptions** retval);
	STDMETHOD(put_DrawingOptions)(IShapeDrawingOptions* newVal);
	STDMETHOD(get_Priority)(LONG* retval)							{*retval = _priority;			return S_OK;};
	STDMETHOD(put_Priority)(LONG newVal)							{_priority = newVal;			return S_OK;};
	STDMETHOD(get_ValueType)(tkCategoryValue* pVal);
	STDMETHOD(put_ValueType)(tkCategoryValue newVal);
	STDMETHOD(get_MinValue)(VARIANT* pVal);
	STDMETHOD(put_MinValue)(VARIANT newVal);
	STDMETHOD(get_MaxValue)(VARIANT* pVal);
	STDMETHOD(put_MaxValue)(VARIANT newVal);

private:
	BSTR _name;
	BSTR _expression;
	IShapeDrawingOptions* _drawingOptions;
	long _priority;
	IShapefileCategories* _categories;
	tkCategoryValue _categoryValue;
	CComVariant _minValue;
	CComVariant _maxValue;
	
public:
	CDrawingOptionsEx* get_UnderlyingOptions();
	void put_underlyingOptions(CDrawingOptionsEx*);
	void put_parentCollection(IShapefileCategories* categories) {_categories = categories;}
	tkCategoryValue GetCategoryValue() {return _categoryValue; }
	CComVariant* GetMinValue() { return &_minValue; }
	CComVariant* GetMaxValue() { return &_maxValue; }
};
