#pragma once
#include "CustomExpression.h"

class CExpression : public IExpression
{
public:
	CExpression()
		: _lastErrorPosition(-1), _table(NULL)
	{
		gReferenceCounter.AddRef(idExpression);
	}

	~CExpression()
	{
		Clear();

		gReferenceCounter.Release(idExpression);
	}

public:
	STDMETHOD(Parse)(BSTR expr, VARIANT_BOOL* retVal);
	STDMETHOD(Calculate)(VARIANT* result, VARIANT_BOOL* retVal);
	STDMETHOD(get_LastErrorMessage)(BSTR* pVal);
	STDMETHOD(get_LastErrorPosition)(LONG* pVal);
	STDMETHOD(get_NumSupportedFunctions)(LONG* pVal);
	STDMETHOD(get_SupportedFunction)(LONG functionIndex, IFunction** pVal);
	STDMETHOD(ParseForTable)(BSTR expr, ITable* table, VARIANT_BOOL* retVal);
	STDMETHOD(CalculateForTableRow)(LONG rowIndex, LONG targetFieldIndex, VARIANT_BOOL* retVal);
	STDMETHOD(CalculateForTableRow2)(LONG rowIndex, VARIANT* result, VARIANT_BOOL* retVal);
	STDMETHOD(get_Table)(ITable** pVal);

private:
	CustomExpression _expression;
	CStringW _lastErrorMessage;
	int _lastErrorPosition;
	ITable* _table;

private:
	void Clear();
	bool ValidateExpression();
	void SetVariant(CExpressionValue* value, VARIANT* result);
	bool CalculateCore(VARIANT* result);
public:
	
};
