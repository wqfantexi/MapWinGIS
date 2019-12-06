// GdalRasterBand.h : Declaration of the CGdalRasterBand
#pragma once

class ATL_NO_VTABLE CGdalRasterBand : public IGdalRasterBand
{
public:
	CGdalRasterBand()
	{
	}

	~CGdalRasterBand()
	{
	}

public:
	STDMETHOD(get_NoDataValue)(DOUBLE* pVal);
	STDMETHOD(get_Minimum)(DOUBLE* pVal);
	STDMETHOD(get_Maximum)(DOUBLE* pVal);
	STDMETHOD(get_OverviewCount)(LONG* pVal);
	STDMETHOD(get_ColorInterpretation)(tkColorInterpretation* pVal);
	STDMETHOD(put_ColorInterpretation)(tkColorInterpretation newVal);
	STDMETHOD(get_DataType)(tkGdalDataType* pVal);
	STDMETHOD(get_XSize)(LONG* pVal);
	STDMETHOD(get_YSize)(LONG* pVal);
	STDMETHOD(get_BlockSizeX)(LONG* pVal);
	STDMETHOD(get_BlockSizeY)(LONG* pVal);
	STDMETHOD(get_UnitType)(BSTR* pVal);
	STDMETHOD(get_Scale)(DOUBLE* pVal);
	STDMETHOD(get_Offset)(DOUBLE* pVal);
	STDMETHOD(get_HasColorTable)(VARIANT_BOOL* pVal);
	STDMETHOD(get_MetadataCount)(LONG* pVal);
	STDMETHOD(get_MetadataItem)(LONG itemIndex, BSTR* pVal);
	STDMETHOD(get_ColorTable)(IGridColorScheme** pVal);
	STDMETHOD(GetUniqueValues)(LONG maxCount, VARIANT* arr, VARIANT_BOOL* result);
	STDMETHOD(GetDefaultHistogram)(VARIANT_BOOL forceCalculate, IHistogram** retVal);
	STDMETHOD(GetHistogram)(DOUBLE minValue, DOUBLE maxValue, LONG numBuckets, VARIANT_BOOL includeOutOfRange, VARIANT_BOOL allowApproximate, IHistogram** retVal);
	STDMETHOD(get_Overview)(LONG bandIndex, IGdalRasterBand** pVal);
	STDMETHOD(GetStatistics)(VARIANT_BOOL allowApproximate, VARIANT_BOOL forceCalculation, DOUBLE* minimum, DOUBLE* maximum, DOUBLE* mean, DOUBLE* stdDev, VARIANT_BOOL* retVal);
	STDMETHOD(Classify)(double minValue, double maxValue, tkClassificationType classification, LONG numBreaks, IGridColorScheme** retVal);
	STDMETHOD(ComputeMinMax)(VARIANT_BOOL allowApproximate, DOUBLE* minimum, DOUBLE* maximum, VARIANT_BOOL* retVal);
	STDMETHOD(get_Value)(LONG column, LONG row, double* pVal, VARIANT_BOOL* vb);
	STDMETHOD(ComputeLocalStatistics)(LONG column, LONG row, LONG range, double* minimum, double* maximum, double* mean, double* stdDev, LONG* count, VARIANT_BOOL* vb);

private:
	GDALRasterBand* _band;

private:
	bool CheckBand();

	template <typename T>
	IGridColorScheme* GenerateUniqueValuesColorScheme(GDALDataType dataType);
	IGridColorScheme* GenerateEqualIntervalColorScheme(double minValue, double maxValue, int numBreaks);
	bool ValidateRowCol(LONG column, LONG row);
	bool CalculateStats(double* values, int size, double& min, double& max, double& mean, double& stdDev, LONG& count);

public:
	void InjectBand(GDALRasterBand* band) { _band = band; }
	void ErrorMessage(CString msg);
	
};