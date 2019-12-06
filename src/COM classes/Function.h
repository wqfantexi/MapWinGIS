#pragma once
#include "ExpressionParts.h"

class CFunction : public IFunction
{
public:
	CFunction()
	{
	}

	~CFunction()
	{
	}

public:
	STDMETHOD(get_Name)(BSTR* pVal);
	STDMETHOD(get_Alias)(long aliasIndex, BSTR* pVal);
	STDMETHOD(get_NumAliases)(long* pVal);
	STDMETHOD(get_NumParameters)(long* pVal);
	STDMETHOD(get_Group)(tkFunctionGroup* pVal);
	STDMETHOD(get_Description)(BSTR* pVal);
	STDMETHOD(put_Description)(BSTR newVal);
	STDMETHOD(get_ParameterName)(LONG parameterIndex, BSTR* pVal);
	STDMETHOD(put_ParameterName)(LONG parameterIndex, BSTR newVal);
	STDMETHOD(get_ParameterDescription)(LONG parameterIndex, BSTR* pVal);
	STDMETHOD(put_ParameterDescription)(LONG parameterIndex, BSTR newVal);
	STDMETHOD(get_Signature)(BSTR* pVal);

private:
	CustomFunction* _function;

public:
	void Inject(CustomFunction* fn) { _function = fn; }
	bool Validate();
	
};
