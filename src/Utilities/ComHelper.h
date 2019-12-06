#pragma once
class ComHelper
{
public:
	static HRESULT CreateInstance(tkInterface interfaceId, IMyInterface** retVal);
	static bool SetRef(IMyInterface* newVal, IMyInterface** oldVal, bool allowNull = true);
	static CString GetInterfaceName(tkInterface id);
	static void CreatePoint(IPoint** point);
	static void CreateShape(IShape** shp);
	static void CreateExtents(IExtents** box);
};

