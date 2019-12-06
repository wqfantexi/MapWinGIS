/**************************************************************************************
 * File name: Vector.h
 *
 * Project: MapWindow Open Source (MapWinGis ActiveX control) 
 * Description: declaration of CVector
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

#pragma once
#include "cppVector.h"

// CVector
class CVector : public IVector
{
public:
	CVector()
	{
		_lastErrorCode = tkNO_ERROR;
		_globalCallback = NULL;
		_key = SysAllocString(L"");
	}
	~CVector()
	{
		::SysFreeString(_key);
	}
// IVectro
public:
	STDMETHOD(get_Key)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(put_Key)(/*[in]*/ BSTR newVal);
	STDMETHOD(get_GlobalCallback)(/*[out, retval]*/ ICallback * *pVal);
	STDMETHOD(put_GlobalCallback)(/*[in]*/ ICallback * newVal);
	STDMETHOD(get_ErrorMsg)(/*[in]*/ long ErrorCode, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_LastErrorCode)(/*[out, retval]*/ long *pVal);
	STDMETHOD(CrossProduct)(/*[in]*/ IVector * V, /*[out,retval]*/ IVector ** result);
	STDMETHOD(Dot)(/*[in]*/ IVector * V, /*[out,retval]*/ double * result);
	STDMETHOD(Normalize)();
	STDMETHOD(get_k)(/*[out, retval]*/ double *pVal);
	STDMETHOD(put_k)(/*[in]*/ double newVal);
	STDMETHOD(get_j)(/*[out, retval]*/ double *pVal);
	STDMETHOD(put_j)(/*[in]*/ double newVal);
	STDMETHOD(get_i)(/*[out, retval]*/ double *pVal);
	STDMETHOD(put_i)(/*[in]*/ double newVal);

private:
	cppVector _v;
	long _lastErrorCode;
	ICallback * _globalCallback;
	BSTR _key;
};
