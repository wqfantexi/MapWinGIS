/**************************************************************************************
 * Project: MapWindow Open Source (MapWinGis ActiveX control) 
 **************************************************************************************
 * The contents of this file are subject to the Mozilla Public License Version 1.1
 * (the "License"); you may not use this file except in compliance with 
 * the License. You may obtain a copy of the License at http://www.mozilla.org/mpl/ 
 * See the License for the specific language governing rights and limitations
 * under the License.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 **************************************************************************************/
#pragma once

struct FieldOperation
{
	int targetIndex;
	int fieldIndex;
	CStringW fieldName;
	bool hasName;
	tkFieldStatOperation operation;
	bool valid;
	FieldType targetFieldType;
	tkFieldOperationValidity isValidReason;

	FieldOperation()
	{
		targetIndex = -1;
		fieldIndex = -1;
		fieldName = L"";
		hasName = false;
		valid = true;
	}
};

// CFieldStatOperations
class CFieldStatOperations : public IFieldStatOperations
{
public:
	CFieldStatOperations()
	{
		_lastErrorCode = tkNO_ERROR;
		_key = SysAllocString(L"");
	}

	~CFieldStatOperations()
	{
		Clear();
	}

public:
	STDMETHOD(AddFieldIndex)(int fieldIndex, tkFieldStatOperation operation);
	STDMETHOD(AddFieldName)(BSTR fieldIndex, tkFieldStatOperation operation);
	STDMETHOD(Remove)(int operationIndex, VARIANT_BOOL* retVal);
	STDMETHOD(Clear)();
	STDMETHOD(get_Count)(int* retVal);
	STDMETHOD(get_Operation)(int operationIndex, tkFieldStatOperation* retVal);
	STDMETHOD(get_FieldIndex)(int operationIndex, int* retVal);
	STDMETHOD(get_ErrorMsg)(/*[in]*/ long ErrorCode, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_LastErrorCode)(/*[out, retval]*/ long *pVal);
	STDMETHOD(get_Key)(/*[out, retval]*/ BSTR *pVal);
	STDMETHOD(put_Key)(/*[in]*/ BSTR newVal);
	STDMETHOD(get_FieldName)(int operationIndex, BSTR* retVal);
	STDMETHOD(Validate)(IShapefile* sf, VARIANT_BOOL* retVal);
	STDMETHOD(get_OperationIsValid)(int operationIndex, VARIANT_BOOL* retVal);
	STDMETHOD(get_OperationIsValidReason)(int operationIndex, tkFieldOperationValidity* retVal);

private:
	void ErrorMessage(long ErrorCode);
	long _lastErrorCode;
	BSTR _key;

public:
	std::vector<FieldOperation*> _operations;
};