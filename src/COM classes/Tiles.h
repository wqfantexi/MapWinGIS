/**************************************************************************************
 * File name: Tiles.h
 *
 * Project: MapWindow Open Source (MapWinGis ActiveX control) 
 * Description: declaration of CTiles
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
// Paul Meems August 2018: Modernized the code as suggested by CLang and ReSharper

#pragma once
#include "BaseProvider.h"
#include "TileProviders.h"
#include "TileManager.h"
#include "SQLiteCache.h"
#include "PrefetchManager.h"
using namespace std;

class CTiles : public ITiles
{
public:
    CTiles()
        : _manager(true), _mercatorProjection(nullptr), _reloadNeeded(true)
    {
        _key = SysAllocString(L"");
        _globalCallback = nullptr;
        _lastErrorCode = tkNO_ERROR;

        ComHelper::CreateInstance(idTileProviders, (IMyInterface**)&_providers);
        ((CTileProviders*)_providers)->put_Tiles(this);

        SetDefaults();
    }

    ~CTiles()
    {
        SysFreeString(_key);

        ClearAll();

        if (_mercatorProjection)
        {
            _mercatorProjection->Release();
        }
    }

    void ClearAll()
    {
        Stop();

        _manager.Clear();

        if (_providers)
        {
            _providers->Release();
            _providers = nullptr;
        }
    }

    void SetDefaults()
    {
        _provider = ((CTileProviders*)_providers)->get_Provider((int)tkTileProvider::OpenStreetMap);
        _visible = true;
        _minScaleToCache = 0;
        _maxScaleToCache = 100;
    }
public:
    STDMETHOD(get_LastErrorCode)(/*[out, retval]*/ long* pVal);
    STDMETHOD(get_ErrorMsg)(/*[in]*/ long ErrorCode, /*[out, retval]*/ BSTR* pVal);
    STDMETHOD(get_GlobalCallback)(/*[out, retval]*/ ICallback* * pVal);
    STDMETHOD(put_GlobalCallback)(/*[in]*/ ICallback* newVal);
    STDMETHOD(get_Key)(/*[out, retval]*/ BSTR* pVal);
    STDMETHOD(put_Key)(/*[in]*/ BSTR newVal);
    STDMETHOD(get_Visible)(VARIANT_BOOL* pVal);
    STDMETHOD(put_Visible)(VARIANT_BOOL newVal);
    STDMETHOD(get_GridLinesVisible)(VARIANT_BOOL* pVal);
    STDMETHOD(put_GridLinesVisible)(VARIANT_BOOL newVal);
    STDMETHOD(get_Provider)(tkTileProvider* pVal);
    STDMETHOD(put_Provider)(tkTileProvider newVal);
    STDMETHOD(get_DoCaching)(tkCacheType type, VARIANT_BOOL* pVal);
    STDMETHOD(put_DoCaching)(tkCacheType type, VARIANT_BOOL newVal);
    STDMETHOD(get_UseCache)(tkCacheType type, VARIANT_BOOL* pVal);
    STDMETHOD(put_UseCache)(tkCacheType type, VARIANT_BOOL newVal);
    STDMETHOD(get_UseServer)(VARIANT_BOOL* pVal);
    STDMETHOD(put_UseServer)(VARIANT_BOOL newVal);
    STDMETHOD(get_MaxCacheSize)(tkCacheType type, double* pVal);
    STDMETHOD(put_MaxCacheSize)(tkCacheType type, double newVal);
    STDMETHOD(get_MinScaleToCache)(int* pVal);
    STDMETHOD(put_MinScaleToCache)(int newVal);
    STDMETHOD(get_MaxScaleToCache)(int* pVal);
    STDMETHOD(put_MaxScaleToCache)(int newVal);
    STDMETHOD(ClearCache)(tkCacheType type);
    STDMETHOD(ClearCache2)(tkCacheType type, int providerId, int fromScale = 0, int toScale = 100);
    STDMETHOD(get_CacheSize)(tkCacheType type, double* retVal);
    STDMETHOD(get_CacheSize2)(tkCacheType type, int providerId, int scale, double* retVal);
    STDMETHOD(Serialize)(BSTR* retVal);
    STDMETHOD(Deserialize)(BSTR newVal);
    STDMETHOD(SetProxy)(BSTR address, int port, VARIANT_BOOL* retVal);
    STDMETHOD(get_Proxy)(BSTR* retVal);
    STDMETHOD(AutodetectProxy)(VARIANT_BOOL* retVal);
    STDMETHOD(get_DiskCacheFilename)(BSTR* retVal);
    STDMETHOD(put_DiskCacheFilename)(BSTR pVal);
    STDMETHOD(get_Providers)(ITileProviders** retVal);
    STDMETHOD(get_ProviderId)(int* retVal);
    STDMETHOD(put_ProviderId)(int newVal);
    STDMETHOD(GetTilesIndices)(IExtents* boundsDegrees, int zoom, int provider, IExtents** retVal);
    STDMETHOD(get_DiskCacheCount)(int provider, int zoom, int xMin, int xMax, int yMin, int yMax, LONG* retVal);
    STDMETHOD(get_ProviderName)(BSTR* retVal);
    STDMETHOD(CheckConnection)(BSTR url, VARIANT_BOOL* retVal);
    STDMETHOD(GetTileBounds)(int provider, int zoom, int tileX, int tileY, IExtents** retVal);
    STDMETHOD(get_CurrentZoom)(int* retVal);
    STDMETHOD(get_MaxZoom)(int* retVal);
    STDMETHOD(get_MinZoom)(int* pVal);
    STDMETHOD(get_ServerProjection)(IGeoProjection** retVal);
    STDMETHOD(get_ProjectionStatus)(tkTilesProjectionStatus* retVal);
    STDMETHOD(get_ScalingRatio)(double* pVal);
    STDMETHOD(put_ScalingRatio)(double newVal);
    STDMETHOD(SetProxyAuthentication)(BSTR username, BSTR password, BSTR domain, VARIANT_BOOL* retVal);
    STDMETHOD(ClearProxyAuthorization)();
    STDMETHOD(get_ProxyAuthenticationScheme)(tkProxyAuthentication* pVal);
    STDMETHOD(put_ProxyAuthenticationScheme)(tkProxyAuthentication newVal);
    STDMETHOD(get_DelayRequestTimeout)(long* retVal);
    STDMETHOD(put_DelayRequestTimeout)(long pVal);
    STDMETHOD(Prefetch)(double minLat, double maxLat, double minLng, double maxLng, int zoom, int provider,
                        IStopExecution* stop, LONG* retVal);
    STDMETHOD(Prefetch2)(int minX, int maxX, int minY, int maxY, int zoom, int provider, IStopExecution* stop,
                         LONG* retVal);
    static void LogBulkDownloadStarted(IExtents* ext, int zoom, BaseProvider* provider, BSTR savePath, BSTR fileExt);
    STDMETHOD(PrefetchToFolder)(IExtents* ext, int zoom, int providerId, BSTR savePath, BSTR fileExt,
                                IStopExecution* stop, LONG* retVal);
    STDMETHOD(get_ProjectionIsSphericalMercator)(VARIANT_BOOL* pVal);

private:
    long _lastErrorCode;
    ICallback* _globalCallback;
    BSTR _key;
    bool _visible;
    int _minScaleToCache;
    int _maxScaleToCache;
    ITileProviders* _providers;
    TileManager _manager;
    BaseProvider* _provider;
    IGeoProjection* _mercatorProjection;
    bool _reloadNeeded;

private:
    void ErrorMessage(long ErrorCode);
    void SetAuthorization(BSTR userName, BSTR password, BSTR domain);
    SQLiteCache* get_SqliteCache() { return dynamic_cast<SQLiteCache*>(TileCacheManager::get_Cache(tctSqliteCache)); }
    BaseProvider* get_Provider(int providerId) const;

public:
    // properties
    TileManager* get_Manager() { return &_manager; }
    BaseProvider* get_Provider() { return _provider; }
    bool get_ReloadNeeded();

public:
    void Init(IMapViewCallback* map) { _manager.set_MapCallback(map); }
    void LoadTiles(bool isSnapshot, const CString& key = "");
    bool TilesAreInCache(IMapViewCallback* map, tkTileProvider providerId = ProviderNone);
    bool DeserializeCore(CPLXMLNode* node);
    CPLXMLNode* SerializeCore(const CString& ElementName);
    BaseProjection* get_Projection() { return _provider->get_Projection(); }
    void Stop();
};
