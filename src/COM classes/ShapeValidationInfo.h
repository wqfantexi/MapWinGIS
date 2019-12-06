// ShapeValidationInfo.h : Declaration of the CShapeValidationInfo

#pragma once

// CShapeValidationInfo
class CShapeValidationInfo : public IShapeValidationInfo
{
public:
	CShapeValidationInfo()
	{
		validationType = tkShapeValidationType::svtInput;
		validationMode = tkShapeValidationMode::NoValidation;
		validationStatus = tkShapeValidationStatus::WasntValidated;
		wereInvalidCount = 0;
		fixedCount = 0;
		stillInvalidCount = 0;
		skippedCount = 0;
	}
	~CShapeValidationInfo()
	{
	}

public:
	STDMETHOD(get_ClassName)( BSTR* retVal);
	STDMETHOD(get_MethodName)( BSTR* retVal);
	STDMETHOD(get_ParameterName)( BSTR* retVal);
	STDMETHOD(get_ValidationType)( tkShapeValidationType* retVal);
	STDMETHOD(get_ValidationMode)( tkShapeValidationMode* retVal);
	STDMETHOD(get_IsValid)( VARIANT_BOOL* retVal);
	STDMETHOD(get_Status)( tkShapeValidationStatus* retVal);
	STDMETHOD(get_WereInvalidCount)( int* retVal);
	STDMETHOD(get_StillInvalidCount)( int* retVal);
	STDMETHOD(get_FixedCount)( int* retVal);
	STDMETHOD(get_SkippedCount)( int* retVal);
	STDMETHOD(get_WasValidated)( VARIANT_BOOL* retVal);

	CString className;
	CString methodName;
	CString parameterName;
	tkShapeValidationType validationType;
	tkShapeValidationMode validationMode;
	tkShapeValidationStatus validationStatus;
	int wereInvalidCount;
	int fixedCount;
	int stillInvalidCount;
	int skippedCount;
};