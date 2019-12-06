/**************************************************************************************
 * File name: TileProviders.h
 *
 * Project: MapWindow Open Source (MapWinGis ActiveX control) 
 * Description: Declaration of CTileProviders
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
#include "BaseProvider.h"

#define TILE_PROVIDER_COUNT 23

class CTileProviders : public ITileProviders
{
public:
	CTileProviders()
		: _tiles(NULL)
	{
		_key = SysAllocString(L"");
		_globalCallback = NULL;
		_lastErrorCode = tkNO_ERROR;

		for (int i = 0; i <= TILE_PROVIDER_COUNT; i++)
		{
			// we don't care about the value returned; a provider is added to the list, that's all needed
			getProviderCore((tkTileProvider)i);
		}
	}

	~CTileProviders()
	{
		SysFreeString(_key);

		for (size_t i = 0; i < _providers.size(); i++) {
			_providers[i]->ClearSubProviders();
		}

		for (size_t i = 0; i < _providers.size(); i++)	{
			delete _providers[i];
		}
	}

public:
	STDMETHOD(get_LastErrorCode)(/*[out, retval]*/ long *pVal);
	STDMETHOD(get_ErrorMsg)(/*[in]*/ long ErrorCode, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_GlobalCallback)(/*[out, retval]*/ ICallback * *pVal);
	STDMETHOD(put_GlobalCallback)(/*[in]*/ ICallback * newVal);
	STDMETHOD(get_Key)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(put_Key)(/*[in]*/ BSTR newVal);
	
	STDMETHOD(Remove)(LONG provider, VARIANT_BOOL clearCache, VARIANT_BOOL* retVal);
	STDMETHOD(Clear)(VARIANT_BOOL clearCache);
	STDMETHOD(get_Count)(LONG* pVal);
	STDMETHOD(Add)(int Id, BSTR name, BSTR urlPattern, tkTileProjection projection, int minZoom, int maxZoom, BSTR copyright, VARIANT_BOOL* retVal);
	
	STDMETHOD(get_Id)(int Index, LONG* retVal);
	STDMETHOD(get_Name)(int Index, BSTR* retVal);
	STDMETHOD(put_Name)(int Index, BSTR pVal);
	STDMETHOD(get_UrlPattern)(int Index, BSTR* retVal);
	STDMETHOD(get_Projection)(int Index, tkTileProjection* retVal);
	STDMETHOD(get_MinZoom)(int Index, int* retVal);
	STDMETHOD(get_MaxZoom)(int Index, int* retVal);
	STDMETHOD(get_IsCustom)(int Index, VARIANT_BOOL* retVal);
	STDMETHOD(get_Version)(int Index, BSTR* retVal);
	STDMETHOD(put_Version)(int Index, BSTR newVal);
	STDMETHOD(get_IndexByProvider)(tkTileProvider provider, int* retVal);
	STDMETHOD(get_IndexByProviderId)(int provider, int* retVal);
	STDMETHOD(get_Language)(int Index, BSTR* retVal);
	STDMETHOD(put_Language)(int Index, BSTR twoLetterCode);
	STDMETHOD(get_GeographicBounds)(int Index, IExtents** pVal);
	STDMETHOD(put_GeographicBounds)(int Index, IExtents* newVal);

private:	
	ITiles* _tiles;	// reference the parent
	vector<BaseProvider*> _providers;
	long _lastErrorCode;
	ICallback * _globalCallback;
	BSTR _key;

private:
	void ErrorMessage(long ErrorCode);
	BaseProvider* getProviderCore(tkTileProvider providerId);
	bool ValidateProviderIndex(int index);

public:
	vector<BaseProvider*>* GetList() { return &_providers;	}
	void put_Tiles(ITiles* tiles){	_tiles = tiles;}
	BaseProvider* get_Provider(int providerId);
	CStringW get_CopyrightNotice(tkTileProvider provider);
	CString get_LicenseUrl(tkTileProvider provider);
};
