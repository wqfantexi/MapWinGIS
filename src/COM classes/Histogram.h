#pragma once

class CHistogram : public IHistogram
{
public:
	CHistogram()
	{
		_values = NULL;
		_minValue = 0.0;
		_maxValue = 0.0;
		_numBuckets = 0;
	}

	~CHistogram()
	{
		Clear();
	}

public:
	STDMETHOD(get_NumBuckets)(LONG* pVal);
	STDMETHOD(get_MinValue)(DOUBLE* pVal);
	STDMETHOD(get_MaxValue)(DOUBLE* pVal);
	STDMETHOD(get_Count)(LONG bucketIndex, LONG* pVal);
	STDMETHOD(get_Value)(LONG bucketIndex, DOUBLE* pVal);
	STDMETHOD(get_TotalCount)(LONG* pVal);
	STDMETHOD(GenerateColorScheme)(LONG numClasses, IGridColorScheme** retVal);

private:
	GUIntBig* _values;
	double _minValue;
	double _maxValue;
	int _numBuckets;	
	bool _allocatedByGdal;	

public:
	void Inject(int numBuckets, double minValue, double maxValue, GUIntBig* values, bool allocatedByGdal);
	void ErrorMessage(CString msg);
	bool ValidateBucketIndex(LONG bucketIndex);
	void Clear();
	
};