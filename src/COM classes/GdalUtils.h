/**************************************************************************************
* File name: GdalUtils.h
*
* Project: MapWindow Open Source (MapWinGis ActiveX control)
* Description: Declaration of the CGdalUtils
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
// june 2017 PaulM - Initial creation of this file

#pragma once
#include "gdal_utils.h" // Is used, don't remove


class CGdalUtils : public IGdalUtils
{
public:
	CGdalUtils()
	{
		_lastErrorCode = tkNO_ERROR;
		_globalCallback = nullptr;
		_key = SysAllocString(L"");
		gReferenceCounter.AddRef(idGdalUtils);
		CPLSetConfigOption("GDAL_NUM_THREADS", "ALL_CPUS");
	}

	virtual ~CGdalUtils();

public:
	STDMETHOD(get_ErrorMsg)(/*[in]*/ long errorCode, /*[out, retval]*/ BSTR *pVal) override;
	STDMETHOD(get_LastErrorCode)(/*[out, retval]*/ long *pVal) override;
	STDMETHOD(get_DetailedErrorMsg)(/*[out, retval]*/ BSTR *pVal) override;
	STDMETHOD(get_Key)(/*[out, retval]*/ BSTR *pVal) override;
	STDMETHOD(put_Key)(/*[in]*/ BSTR newVal) override;
	STDMETHOD(get_GlobalCallback)(/*[out, retval]*/ ICallback * *pVal) override;
	STDMETHOD(put_GlobalCallback)(/*[in]*/ ICallback * newVal) override;
	STDMETHOD(GdalRasterWarp)(/*[in]*/ BSTR sourceFilename, /*[in]*/ BSTR destinationFilename, /*[in]*/ SAFEARRAY* options, /*[out, retval]*/ VARIANT_BOOL* retVal) override;
	STDMETHOD(GdalRasterTranslate)(/*[in]*/ BSTR sourceFilename, /*[in]*/ BSTR destinationFilename, /*[in]*/ SAFEARRAY* options, /*[out, retval]*/ VARIANT_BOOL* retVal) override;
	STDMETHOD(GdalVectorTranslate)(/*[in]*/ BSTR sourceFilename, /*[in]*/ BSTR destinationFilename, /*[in]*/ SAFEARRAY* options, /*[in, optional, defaultvalue(FALSE)]*/ VARIANT_BOOL useSharedConnection, /*[out, retval]*/ VARIANT_BOOL* retVal) override;
	STDMETHOD(ClipVectorWithVector)(/*[in]*/ BSTR subjectFilename, /*[in]*/ BSTR overlayFilename, /*[in]*/ BSTR destinationFilename, /*[in, optional, defaultvalue(TRUE)]*/ VARIANT_BOOL useSharedConnection, /*[out, retval]*/ VARIANT_BOOL* retVal) override;
	STDMETHOD(GdalBuildOverviews)(BSTR sourceFilename, tkGDALResamplingMethod resamplingMethod, SAFEARRAY* overviewList, SAFEARRAY* bandList, SAFEARRAY* configOptions, VARIANT_BOOL* retVal) override;
	
private:
	long _lastErrorCode;
	ICallback * _globalCallback;
	BSTR _key;
	CString _detailedError;

	char** ConvertSafeArrayToChar(SAFEARRAY* safeArray) const;
	static int* ConvertSafeArrayToInt(SAFEARRAY* safeArray, int &size);
	void SetConfigOptionFromSafeArray(SAFEARRAY* configOptions, bool reset) const;
	void HandleException(int exception);

//public:
	// properties

public:
	// methods
	inline void ErrorMessage(long errorCode);
};
