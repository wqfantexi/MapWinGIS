/**************************************************************************************
 * File name: ChartField.h
 *
 * Project: MapWindow Open Source (MapWinGis ActiveX control) 
 * Description: Declaration of CChartsField
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
 // Sergei Leschinski (lsu) 19 june 2010 - created the file.

#pragma once

// CChartField
class CChartField : public IChartField
{
public:
	CChartField()
	{
		_name =  SysAllocString(L"");
		_index = -1;
		_color = RGB(255, 255, 255);
	}

	~CChartField()
	{
		SysFreeString(_name);
	}

public:
	STDMETHOD(get_Index)( long* retVal);
	STDMETHOD(put_Index)( long newVal);
	STDMETHOD(get_Color)( OLE_COLOR* retVal);
	STDMETHOD(put_Color)( OLE_COLOR newVal);
	STDMETHOD(get_Name)( BSTR* retVal);
	STDMETHOD(put_Name)( BSTR newVal);

private:	
	BSTR _name;
	int _index;
	OLE_COLOR _color;

};
