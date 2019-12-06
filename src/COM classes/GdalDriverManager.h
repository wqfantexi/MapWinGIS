#pragma once

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

class CGdalDriverManager : public IGdalDriverManager
{
public:
	CGdalDriverManager()
	{
		GDALAllRegister(); 
		_manager = GetGDALDriverManager();
		_manager->AutoLoadDrivers();

		gReferenceCounter.AddRef(idGdalDriverManager);
	}

	~CGdalDriverManager()
	{
		gReferenceCounter.Release(idGdalDriverManager);
	}

public:
	STDMETHOD(get_DriverCount)(LONG* pVal);
	STDMETHOD(get_Driver)(LONG driverIndex, IGdalDriver** pVal);
	STDMETHOD(get_DriverByName)(BSTR driverName, IGdalDriver** pVal);
	
private:
	GDALDriverManager* _manager;

public:
	void CreateDriverInstance(GDALDriver* driver, IGdalDriver** pVal);
	
};