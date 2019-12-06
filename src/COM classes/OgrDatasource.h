// OgrDatasource.h : Declaration of the COgrDatasource
#pragma once

// COgrDatasource
class COgrDatasource : public IOgrDatasource
{
public:
	COgrDatasource()
	{
		_dataset = NULL;
		_key = SysAllocString(L"");
		_lastErrorCode = tkNO_ERROR;
		_globalCallback = NULL;
		_encoding = m_globalSettings.ogrEncoding;
	}
	~COgrDatasource()
	{
		SysFreeString(_key);
		Close();
		if (_globalCallback)
			_globalCallback->Release();
	}

public:
	STDMETHOD(get_ErrorMsg)(/*[in]*/ long ErrorCode, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_LastErrorCode)(/*[out, retval]*/ long *pVal);
	STDMETHOD(get_Key)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(put_Key)(/*[in]*/ BSTR newVal);
	STDMETHOD(get_GlobalCallback)(/*[out, retval]*/ ICallback * *pVal);
	STDMETHOD(put_GlobalCallback)(/*[in]*/ ICallback * newVal);
	STDMETHOD(Close)();
	STDMETHOD(Open)(BSTR connectionString, VARIANT_BOOL* retVal);
	STDMETHOD(get_LayerCount)(int* retVal);
	STDMETHOD(GetLayer)(int index, VARIANT_BOOL forUpdate, IOgrLayer** retVal);
	STDMETHOD(get_DriverName)(BSTR* retVal);
	STDMETHOD(GetLayerName)(int index, BSTR* retVal);
	STDMETHOD(GetLayerByName)(BSTR name, VARIANT_BOOL forUpdate, IOgrLayer** retVal);
	STDMETHOD(RunQuery)(BSTR sql, IOgrLayer** retVal);
	STDMETHOD(DeleteLayer)(int layerIndex, VARIANT_BOOL* retVal);
	STDMETHOD(CreateLayer)(BSTR layerName, ShpfileType shpType, IGeoProjection* projection, BSTR creationOptions, VARIANT_BOOL* retVal);
	STDMETHOD(ImportShapefile)(IShapefile* shapefile, BSTR newLayerName, BSTR creationOptions, 
		tkShapeValidationMode validationMode, VARIANT_BOOL* retVal);
	STDMETHOD(TestCapability)(tkOgrDSCapability capability, VARIANT_BOOL* retVal);
	STDMETHOD(LayerIndexByName)(BSTR layerName, int* retVal);
	STDMETHOD(get_DriverMetadata)(tkGdalDriverMetadata metadata, BSTR* retVal);
	STDMETHOD(get_DriverMetadataCount)(int* retVal);
	STDMETHOD(get_DriverMetadataItem)(int metadataIndex, BSTR* retVal);
	STDMETHOD(ExecuteSQL)(BSTR sql, BSTR* errorMessage, VARIANT_BOOL* retVal);
	STDMETHOD(get_GdalLastErrorMsg)(BSTR* pVal);
	STDMETHOD(GetSchemas)(VARIANT* retVal);
	STDMETHOD(GetLayer2)(LONG index, VARIANT_BOOL forUpdate, VARIANT_BOOL newConnection, IOgrLayer** retVal);
	STDMETHOD(Open2)(BSTR connectionString, VARIANT_BOOL forUpdate, VARIANT_BOOL* retVal);

private:
	ICallback * _globalCallback;
	long _lastErrorCode;
	BSTR _key;
	GDALDataset* _dataset;
	CStringW _connectionString;
	tkOgrEncoding _encoding;

private:
	bool CheckState();
	void DumpDriverInfo();
	void ErrorMessage(long ErrorCode);
	void GetMetaData(GDALDriver* driver);
	char** ParseLayerCreationOptions(BSTR creationOptions);
	CStringW GetSchemaSql();

public:
	GDALDataset* GetDataset() { return _dataset; }
	
	
};