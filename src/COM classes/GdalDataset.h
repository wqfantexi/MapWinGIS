// GdalDataset.h : Declaration of the CGdalDataset

#pragma once

class CGdalDataset : public IGdalDataset
{
public:
	CGdalDataset() : _dataset(NULL)
	{
		_proxy = false;
	}

	~CGdalDataset() 
	{
		if (!_proxy) {
			Close();
		}
	}

public:
	STDMETHOD(get_Driver)(IGdalDriver** pVal);
	STDMETHOD(Open)(BSTR Filename, VARIANT_BOOL readOnly, VARIANT_BOOL* retVal);
	STDMETHOD(Close)();
	STDMETHOD(SetGeoTransform)(DOUBLE xLeft, DOUBLE dX, DOUBLE yProjOnX, DOUBLE yTop, DOUBLE xProjOnY, DOUBLE dY, VARIANT_BOOL* retVal);
	STDMETHOD(SetProjection)(BSTR Projection, VARIANT_BOOL* retVal);
	STDMETHOD(get_SubDatasetCount)(LONG* retVal);
	STDMETHOD(GetSubDatasetName)(int subDatasetIndex, BSTR* retVal);

private:
	GDALDataset* _dataset;
	bool _proxy;		// we can't close this datasource, since it's owned by someone else

private:
	bool CheckState();
	void ErrorMessage(CString msg);
	bool CheckOnwer();

public:
	void Inject(GDALDataset* ds) 
	{
		 _dataset = ds; 
		 _proxy = true; 
	}
};