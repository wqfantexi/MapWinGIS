/**************************************************************************************
 * File name: LabelClass.h
 *
 * Project: MapWindow Open Source (MapWinGis ActiveX control) 
 * Description: Declaration of the CLabelClass
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
 // lsu: jan 2010 - created the file.

#pragma once
#include "LabelOptions.h"

// CLabelClass
class CLabelClass : public ILabel
{
public:
	CLabelClass()
	{
		_canDelete = true;
		_label = new CLabelInfo();
	}
	~CLabelClass()
	{
		if (_label != NULL && _canDelete) 
			delete _label;
	}
public:
	STDMETHOD(get_Visible)(VARIANT_BOOL* retval)			{*retval = _label->visible ? VARIANT_TRUE : VARIANT_FALSE;	return S_OK;};
	STDMETHOD(put_Visible)(VARIANT_BOOL newVal)				{_label->visible = newVal?true:false;	return S_OK;};		
	
	STDMETHOD(get_Rotation)(double* retval)					{*retval = _label->rotation;		return S_OK;};
	STDMETHOD(put_Rotation)(double newVal)					{_label->rotation = newVal;		return S_OK;};
	
	STDMETHOD(get_Text)(BSTR* retval);						
	STDMETHOD(put_Text)(BSTR newVal);
	
	STDMETHOD(get_X)(double* retval)						{*retval = _label->x;				return S_OK;};
	STDMETHOD(put_X)(double newVal)							{_label->x = newVal;				return S_OK;};
	
	STDMETHOD(get_Y)(double* retval)						{*retval = _label->y;				return S_OK;};
	STDMETHOD(put_Y)(double newVal)							{_label->y = newVal;				return S_OK;};
	
	STDMETHOD(get_Category)(long* retval)					{*retval = _label->category;		return S_OK;};
	STDMETHOD(put_Category)(long newVal)					{_label->category = newVal;		return S_OK;};

	STDMETHOD(get_IsDrawn)(VARIANT_BOOL* retval)			{*retval = _label->isDrawn;		return S_OK;};

	STDMETHOD(get_ScreenExtents)(IExtents** retval);

private:
	CLabelInfo* _label;
	bool _canDelete;		// CLabelInfo can be allocated locally, then we need to delete it
							// For example, when client create CLabel class with new command.
							// In case CLabelInfo is a pointer to the element of CLabels vector we must not delete it
							// For a example if a client receive reference to some existing label and then releases 
							// CLabelClass.

public:
	char* get_LabelData();
	void put_LabelData(char* newVal);
};
