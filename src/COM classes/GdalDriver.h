// GdalDriver.h : Declaration of the CGdalDriver
#pragma once

class CGdalDriver : public IGdalDriver
{
public:
	CGdalDriver() : _driver(NULL)
	{
	}

	~CGdalDriver()
	{
		
	}

public:
	STDMETHOD(get_Metadata)(tkGdalDriverMetadata metadata, BSTR* retVal);
	STDMETHOD(get_MetadataCount)(int* retVal);
	STDMETHOD(get_MetadataItem)(int metadataIndex, BSTR* retVal);
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(get_IsVector)(VARIANT_BOOL* pVal);
	STDMETHOD(get_IsRaster)(VARIANT_BOOL* pVal);
	STDMETHOD(get_MetadataItemType)(int metadataIndex, tkGdalDriverMetadata* pVal);
	STDMETHOD(get_MetadataItemValue)(int metadataIndex, BSTR* pVal);
	STDMETHOD(get_MetadataItemKey)(int metadataIndex, BSTR* pVal);

private:
	GDALDriver* _driver;

private:
	bool CheckState();
	void ErrorMessage(CString msg);

public:
	void Inject(GDALDriver* driver) { _driver = driver; }

	
};