/**************************************************************************************
 * File name: Expression.cpp
 *
 * Project: MapWindow Open Source (MapWinGis ActiveX control) 
 * Description: Implementation of CExpression
 *
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
 ************************************************************************************** 
 * Contributor(s): 
 * (Open source contributors should list themselves and their modifications here). */
 
#include "stdafx.h"
#include "CustomExpression.h"
#include <map>
#include <regex>
#include "ExpressionParser.h"

// *******************************************************************
//	 Calculate()
// *******************************************************************
CExpressionValue* CustomExpression::Calculate(CStringW& errorMessage)
{
	Reset();
    
	bool success = false;
	
	// if the operations should be cached we'll ensure that there is no obsolete data in vector
	if (_saveOperations)
	{
		ClearOperations();
	}

	ResetActiveCountForParts();

	int operationCount = 0;			// in case we got cached operations
	unsigned int partIndex = 0;		// we begin from the inner most bracket

	do
	{
		CExpressionPart* part = _parts[partIndex];
		
		if (!EvaluatePart(part, errorMessage, operationCount))
		{
			return false;
		}

		partIndex++;

		if (partIndex >= _parts.size())
		{
			// we closed the last part
			success = true;
			break;
		}
	}
	while (true);
    
	// operation was saved - no need to cache any more
	if (_saveOperations)
	{
		//delete operation;
		_saveOperations = false;
	}

	return success ? _parts[_parts.size() - 1]->val : NULL;
}

// *******************************************************************
//		EvaluatePart()
// *******************************************************************
bool CustomExpression::EvaluatePart(CExpressionPart* part, CStringW& errorMessage, int& operationCount)
{
	do
	{
		if (part->isFunction())
		{
			if (!EvaluateFunction(part))
			{
				return false;
			}
		}
		else
		{
			if (!CalculateNextOperationWithinPart(part, errorMessage, operationCount))
			{
				return false;
			}
		}

		if (FinishPart(part))
		{
			return true;
		}
	} 
	while (true);
}

// *******************************************************************
//		EvaluateFunction()
// *******************************************************************
bool CustomExpression::EvaluateFunction(CExpressionPart* part)
{
	if (!part->isFunction()) return false;

	// make sure that arguments are calculated
	for (size_t i = 0; i < part->arguments.size(); i++)
	{
		CExpressionPart* arg = part->arguments[i];
		if (arg->activeCount != 1)
		{
			_errorMessage = "Argument was not evaluated: " + arg->expression;
			return false;
		}
	}

	// preparing values
	vector<CExpressionValue*> args;
	for (size_t i = 0; i < part->arguments.size(); i++)
	{
		args.push_back(part->arguments[i]->val);
	}

	// we did the same check during parsing,
	// but still let's leave it as additional safeguard
	if (!part->function->CheckArguments((int)args.size(), _errorMessage))
	{
		return false;
	}

	// this value will be deleted in destructor
	part->val = new CExpressionValue();	

	// calculating
	return part->function->call(args, _shape, *(part->val));
}

// *******************************************************************
//		CalculateNextOperationWithinPart()
// *******************************************************************
bool CustomExpression::CalculateNextOperationWithinPart(CExpressionPart* part, CStringW& errorMessage, int& operationCount)
{
	bool needReleaseOperation = false;
	COperation operation;

	// if there is more then one element, then definitely some operation must be present
	if (part->elements.size() > 1)
	{
		// reading cached operation
		bool found = false;
		if (!_saveOperations)
		{
			operation.CopyFrom(*_operations[operationCount]);
			operationCount++;
			found = true;
		}
		else
		{
			found = FindOperation(part, operation);
		}

		if (found)
		{
			if (!CalculateOperation(part, operation))
			{
				errorMessage = _errorMessage;
				return false;
			}
		}
		else
		{
			errorMessage = _errorMessage;
			return false;
		}

		part->activeCount -= operation.binaryOperation ? 2 : 1;
	}

	return true;
}

// *******************************************************************
//		FinishPart()
// *******************************************************************
// if there is only one element left, we'll finalize the part
bool CustomExpression::FinishPart(CExpressionPart* part)
{
	if (part->isFunction())
	{
		// part->val is already set
		return true;
	}

	if (part->activeCount == 1)
	{
		int size = part->elements.size();
		for (int i = 0; i < size; i++)
		{
			if (!part->elements[i]->turnedOff)
			{
				part->val = GetValue(part, i);
				part->elements[i]->turnedOff = true;
				return true;
			}
		}
	}

	return false;
}

// *******************************************************************
//		ResetActiveCount()
// *******************************************************************
void CustomExpression::ResetActiveCountForParts()
{
	for (unsigned int i = 0; i < _parts.size(); i++)
	{
		_parts[i]->activeCount = _parts[i]->elements.size();
	}
}

// *******************************************************************
//		Reset()
// *******************************************************************
// initializing in case of repeating calculations
void CustomExpression::Reset()
{
	for (unsigned int i = 0; i < _parts.size(); i++)
	{
		CExpressionPart* part = _parts[i];
	
		part->Reset();
	}
}

// *******************************************************************
//		FindOperation()
// *******************************************************************
// Seeks operation with the highest priority and operands.
bool CustomExpression::FindOperation(CExpressionPart* part, COperation& operation)
{
	// seeking operation
	bool found = false;
	int priority = 255;
	
	std::vector<CElement*>* elements = &part->elements;
	int size = elements->size();
	for (int i = 0; i < size; i++)
	{
		CElement* element =  (*elements)[i];
		if ( !element->turnedOff )
		{
			if ( element->type == etOperation )
			{
				if ( element->priority < priority )
				{
					found = true;
					priority = element->priority;
					operation.id = i;
				}
			}
		}
	}

    if ( !found )
	{
		_errorMessage = "Failed to find operation";
		return false;
	} 
	
	// seeking right operand
    operation.left = operation.right = -1;
	for (int i = operation.id + 1; i < size; i++)
	{
		CElement* element =  (*elements)[i];
		if (! element->turnedOff )
		{
			if ( element->type == etOperation )
			{
				if ( element->operation != operNOT && element->operation != operChangeSign)
				{
					_errorMessage = "There is operator in place of value";
					return false;
				}
			}
			else
			{
				operation.right = i; 
				break;
			}
		}
	}

	if ( operation.right == -1 )
	{
		_errorMessage = "No right operand was found";
		return false;
	}
	
	// if the operator is binary, seeking left operand
	if ( (*elements)[operation.id]->operation != operNOT && 
		 (*elements)[operation.id]->operation != operChangeSign )
	{
		for (int i = operation.id -1; i >= 0; i-- )
		{
			if (! (*elements)[i]->turnedOff )
			{
				operation.left = i; 
				break;
			}
		}
		if ( operation.left == -1 )
		{
			_errorMessage = "No left operand was found";
			return false;
		}
		operation.binaryOperation = true;
	}
	else
		operation.binaryOperation = false;
	
	// caching operations
	if (_saveOperations)
	{
		CacheOperation(operation);
	}

    return true;
}

// *************************************************************
//	 CacheOperation()
// *************************************************************
void CustomExpression::CacheOperation(COperation& operation)
{
	COperation* op = new COperation();
	op->left = operation.left;
	op->right = operation.right;
	op->id = operation.id;
	op->binaryOperation = operation.binaryOperation;
	_operations.push_back(op);
}

// *************************************************************
//	 GetMatrixOperation()
// *************************************************************
TwoArgOperator CustomExpression::GetMatrixOperation(tkOperation op)
{
	switch(op)
	{
		case operEqual: return TwoArgOperator::opEQ;
		case operNotEqual: return TwoArgOperator::opNE;
		case operLessEqual: return TwoArgOperator::opLE;
		case operGrEqual: return TwoArgOperator::opGE;
		case operGreater: return TwoArgOperator::opGT;
		case operLess: return TwoArgOperator::opLT;
		case operOR: return TwoArgOperator::opOR;
		case operAND: return TwoArgOperator::opAND;
		
		case operPlus: return TwoArgOperator::opPLUS;
		case operMinus: return TwoArgOperator::opMINUS;
		case operDiv: return TwoArgOperator::opDIV;
		case operMult: return TwoArgOperator::opMUL;
		case operDivInt: return TwoArgOperator::opDIV;
		case operExpon: return TwoArgOperator::opPOW;
		
		case operNOT: 
		case operXOR: 
		case operCONSEQ: 
		case operChangeSign: 
			return TwoArgOperator::opNONE;
	}
	return TwoArgOperator::opNONE;
}

// *************************************************************
//	 CalculateOperation()
// *************************************************************
bool CustomExpression::CalculateOperation( CExpressionPart* part, COperation& operation) //int left, int operation, int right )
{
	USES_CONVERSION;

	CExpressionValue* valLeft = NULL; 
	CExpressionValue* valRight = NULL; 
	CElement* elLeft = NULL;
	CElement* elRight = NULL;

	tkOperation oper = part->elements[operation.id]->operation;
	if (oper == operNOT || oper == operChangeSign )
	{
		valRight = GetValue(part, operation.right);	// these are unary operator and we read only right operand
		elRight = part->elements[operation.right];
	}
	else
	{
		valRight = GetValue(part, operation.right);	// these are binary operators as we read left and right operands

		valLeft = GetValue(part, operation.left);
		elLeft = part->elements[operation.left];
	}

	switch ( oper )
	{
		// logical operators
		case operOR:
		case operAND:
		case operXOR:
		case operCONSEQ:
			{
				if ( valLeft->isBoolean() && valRight->isBoolean() )
				{
					if (oper == operOR )			elLeft->calcVal->bln(valLeft->bln() || valRight->bln());
					else if ( oper == operAND )		elLeft->calcVal->bln(valLeft->bln() && valRight->bln());
					else if ( oper == operXOR )		elLeft->calcVal->bln((valLeft->bln() || valRight->bln()) && !(valLeft->bln() && valRight->bln()));
					else if ( oper == operCONSEQ )	elLeft->calcVal->bln((!valLeft->bln() || valLeft->bln() && valRight->bln()));
				}
				else if (valLeft->IsFloatArray() && valRight->IsFloatArray())
				{
					if (oper == operOR || oper == operAND)			
					{
						if (elLeft->calcVal != valLeft) 
						{
							elLeft->calcVal->matrix(new RasterMatrix(*valLeft->matrix()));
						}

						RasterMatrix* matrix = elLeft->calcVal->matrix();
						matrix->twoArgumentOperation(GetMatrixOperation(oper), *valRight->matrix() );
					}
				}
				else
				{
					_errorMessage = "The operands of CONSEQUENCE operation must have boolean type";
					return false;
				}
				break;
			}
		case operNOT:
			{
				if ( valRight->isBoolean() )
				{
					elRight->calcVal->bln(!(valRight->bln()));
				}
				else
				{
					_errorMessage = "NOT operator can be applied to boolean values only";
					return false;
				}
				break;
			}
        case operILike:
            if (valLeft->isString() && valRight->isString())
            {
                // force both sides to lower-case, resulting in case-insensitive operation
                valLeft->str(valLeft->str().MakeLower());
                valRight->str(valRight->str().MakeLower());
            }
            // don't break; just fall into LIKE logic
		case operLike:
			if (valLeft->isString() && valRight->isString())
			{
				CStringW pattern = valRight->str();
				pattern.Replace(L"%", L".*");
				pattern.Replace(L"_", L".");
				std::wregex reg(pattern);

				const WCHAR* s = (LPCWSTR)valLeft->str();
				bool result = std::regex_match(s, reg);
				elLeft->calcVal->bln(result);
				break;
			}
			break;
		// comparison operators
		case operLess:
		case operLessEqual:
		case operGreater:
		case operGrEqual:
		case operEqual:
		case operNotEqual:
			{
				
				if ( valLeft->type() == valRight->type() )
				{
					if (valLeft->IsFloatArray())
					{
						if (elLeft->calcVal != valLeft)
						{
							elLeft->calcVal->matrix(new RasterMatrix(*valLeft->matrix()));
						}

						RasterMatrix* matrix = elLeft->calcVal->matrix();
						matrix->twoArgumentOperation(GetMatrixOperation(oper), *valRight->matrix() );
					}
					else
					{
						if ( valLeft->isBoolean())
						{
							if (oper == operLess)				elLeft->calcVal->bln(valLeft->bln() < valRight->bln());
							else if (oper == operLessEqual)		elLeft->calcVal->bln(valLeft->bln() <= valRight->bln());
							else if (oper == operGreater)		elLeft->calcVal->bln(valLeft->bln() > valRight->bln());
							else if (oper == operGrEqual)		elLeft->calcVal->bln(valLeft->bln() >= valRight->bln());
							else if (oper == operEqual)			elLeft->calcVal->bln(valLeft->bln() == valRight->bln());
							else if (oper == operNotEqual)		elLeft->calcVal->bln(valLeft->bln() != valRight->bln());
						}
						else if ( valLeft->IsDouble() )
						{
							if (oper == operLess)				elLeft->calcVal->bln(valLeft->dbl() < valRight->dbl());
							else if (oper == operLessEqual)		elLeft->calcVal->bln(valLeft->dbl() <= valRight->dbl());
							else if (oper == operGreater)		elLeft->calcVal->bln(valLeft->dbl() > valRight->dbl());
							else if (oper == operGrEqual)		elLeft->calcVal->bln(valLeft->dbl() >= valRight->dbl());
							else if (oper == operEqual)			elLeft->calcVal->bln(valLeft->dbl() == valRight->dbl());
							else if (oper == operNotEqual)		elLeft->calcVal->bln(valLeft->dbl() != valRight->dbl());
						}
						else if ( valLeft->isString() )
						{
							int res = valLeft->str().MakeLower().Compare(valRight->str().MakeLower());

							if		( oper == operLess && res < 0 )			elLeft->calcVal->bln(true);
							else if (oper == operLessEqual && res <= 0)		elLeft->calcVal->bln(true);
							else if (oper == operGreater && res > 0)		elLeft->calcVal->bln(true);
							else if (oper == operGrEqual && res >= 0)		elLeft->calcVal->bln(true);
							else if (oper == operEqual	&& res == 0)		elLeft->calcVal->bln(true);
							else if (oper == operNotEqual && res != 0)		elLeft->calcVal->bln(true);
							else											elLeft->calcVal->bln(false);
						}
					}
				}
				else if(valLeft->IsFloatArray() && valRight->IsDouble())
				{
					if (elLeft->calcVal != valLeft)
					{
						elLeft->calcVal->matrix(new RasterMatrix(*valLeft->matrix()));
					}

					RasterMatrix* matrix = elLeft->calcVal->matrix();
					
					float* data = new float[1];
					data[0] = (float)valRight->dbl();

					RasterMatrix* right = new RasterMatrix(1, 1, data, matrix->nodataValue() );
					matrix->twoArgumentOperation(GetMatrixOperation(oper), *right);
					delete right;
				}
				else if(valLeft->IsDouble() && valRight->IsFloatArray())
				{
					RasterMatrix* matrix = new RasterMatrix(*valRight->matrix());
					elLeft->calcVal->matrix(matrix);

					float* data = new float[1];
					data[0] = (float)valLeft->dbl();

					RasterMatrix* left = new RasterMatrix(1, 1, data, matrix->nodataValue() );
					matrix->twoArgumentOperation(GetMatrixOperation(oper), *left);

					delete left;
				}
				else
				{
					_errorMessage = "Inconsistent types for comparison operation";
					return false;
				}
				break;
			}
		case operChangeSign:
			{
				if ( valRight->IsDouble() )
				{
					elRight->calcVal->dbl(- valRight->dbl());
				}
				else if (valRight->IsFloatArray())
				{
					if (elRight->calcVal != valRight)
					{
						elRight->calcVal->matrix(valRight->matrix()->Clone(true));
					}

					elRight->calcVal->matrix()->changeSign();
				}
				else
				{
					_errorMessage = "It's not allowed to change sign of non-numeric operands";
					return false;
				}
				break;
			}

		// arithmetic operators
        case operMinus:
        case operMult:
        case operExpon:
		case operMOD:
		case operDiv:
		case operDivInt:
		case operPlus:
			{
				if (!valLeft->IsFloatArray() && !valRight->IsFloatArray() && oper == operPlus)
				{
					// in case of strings we'll use concatenation here, therefore plus is treated separetely;
					if ( valLeft->IsDouble() && valRight->IsDouble() )
					{
						elLeft->calcVal->dbl(valLeft->dbl() + valRight->dbl());
					}
					else if ( valLeft->IsDouble() && valRight->isString())
					{
						CStringW s;						
						s.Format(A2W(_floatFormat), valLeft->dbl());
						elLeft->calcVal->str(s + valRight->str());
					}
					else if ( valLeft->isString() && valRight->IsDouble())
					{
						CStringW s;
						s.Format(A2W(_floatFormat), valRight->dbl());
						elLeft->calcVal->str(valLeft->str() + s);
					}
					else if ( valLeft->isString() && valRight->isString())
					{
						elLeft->calcVal->str(valLeft->str() + valRight->str());
					}
					else
					{
						_errorMessage = "+ operation isn't allowed for boolean values.";
						return false;
					}
					break;
				}
				
				if ( valLeft->IsDouble() && valRight->IsDouble() )
				{
					if		( oper == operMinus )	elLeft->calcVal->dbl(valLeft->dbl() - valRight->dbl());
					else if ( oper == operDiv )		
					{
						if (valRight->dbl() == 0.0)
						{
							_errorMessage = "Division by zero";
						}
						else
						{
							elLeft->calcVal->dbl(valLeft->dbl() / valRight->dbl());
						}
					}
					else if ( oper == operMult )	elLeft->calcVal->dbl(valLeft->dbl() * valRight->dbl());
					else if ( oper == operExpon )	elLeft->calcVal->dbl(pow(valLeft->dbl(), valRight->dbl()));
					else if ( oper == operDivInt )	
						if (valRight->dbl() == 0.0)
						{
							_errorMessage = "Division by zero";
						}
						else
						{
							elLeft->calcVal->dbl(double((int)valLeft->dbl() / (int)valRight->dbl()));
						}
					else if ( oper == operMOD )		elLeft->calcVal->dbl(double((int)valLeft->dbl() % (int)valRight->dbl()));
				}
				else if (valLeft->IsFloatArray() && valRight->IsFloatArray() )
				{
					if (elLeft->calcVal != valLeft) {
						elLeft->calcVal->matrix(valLeft->matrix()->Clone(true));
					}
					RasterMatrix* matrix = elLeft->calcVal->matrix();
					
					matrix->twoArgumentOperation(GetMatrixOperation(oper), *valRight->matrix());
				}
				else if (valLeft->IsFloatArray() && valRight->IsDouble() )
				{
					if (elLeft->calcVal != valLeft)
						elLeft->calcVal->matrix(valLeft->matrix()->Clone(true));
					RasterMatrix* matrix = elLeft->calcVal->matrix();

					float* data = new float[1];
					data[0] = (float)valRight->dbl();
					RasterMatrix* right = new RasterMatrix(1, 1, data, matrix->nodataValue() );
					matrix->twoArgumentOperation(GetMatrixOperation(oper), *right);
					delete right;
				}
				else if (valLeft->IsDouble() && valRight->IsFloatArray() )
				{
					RasterMatrix* matrix = valRight->matrix()->Clone(true);
					elLeft->calcVal->matrix(matrix);

					float* data = new float[1];
					data[0] = (float)valLeft->dbl();
					RasterMatrix* left = new RasterMatrix(1, 1, data, matrix->nodataValue() );
					matrix->twoArgumentOperation(GetMatrixOperation(oper), *left);
					delete left;
				}
				else
				{
					_errorMessage = "Arithmetic operations can be applied to numbers only";
					return false;
				}
				break;
			}
		default:
			{
				_errorMessage = "Unsupported operation";
				return false;
			}
	}
	
	if (oper == operNOT || oper == operChangeSign)
	{
		// unary operator
		elRight->wasCalculated = true;
		part->elements[operation.id]->turnedOff = true;
	}
	else
	{
		// binary operator
		elLeft->wasCalculated = true;
		part->elements[operation.id]->turnedOff = true;
		part->elements[operation.right]->turnedOff = true;
	}

	return true;
}

// ************************************************************
//	 GetValue()
//************************************************************
inline CExpressionValue* CustomExpression::GetValue(CExpressionPart* part, int elementId )
{
	CElement* element = part->elements[elementId];
	CExpressionValue* val = NULL;

	if ( element->wasCalculated )		val = element->calcVal;
	else if (element->partIndex != -1)	val = _parts[element->partIndex]->val;
	else								val = element->val;
	
	return val;
}

// ************************************************************
//	 ReadFieldNames()
//************************************************************
bool CustomExpression::ReadFieldNames(ITable* tbl)
{
	_fields.clear();
	
	if (!tbl) return false;
	
	long numFields;
	tbl->get_NumFields(&numFields);

	for (int i = 0; i < numFields; i++)
	{
		// TODO: wrap
		IField* fld = NULL;
		tbl->get_Field(i, &fld);
		if (fld)
		{
			USES_CONVERSION;
			CComBSTR bstr;
			fld->get_Name(&bstr);
			CStringW str = OLE2CW(bstr);
			_fields.push_back(str.MakeLower());
			fld->Release();
		}
	}
	
	return true;
}

// ************************************************************
//	 SetFields()
//************************************************************
void CustomExpression::SetFields(vector<CStringW>& fields)
{
	_fields.clear();
	_fields.insert(_fields.end(), fields.begin(), fields.end());
}

// *****************************************************************
//		BuildFieldList()
// *****************************************************************
void CustomExpression::BuildFieldList()
{
	for (unsigned int i = 0; i < _parts.size(); i++)
	{
		CExpressionPart* part = _parts[i];
	
	
		for (unsigned long j = 0; j < part->elements.size(); j++)
		{
			if (part->elements[j]->isField)
			{
				_variables.push_back(part->elements[j]);
			}
		}
	}
}

// *****************************************************************
//		Clear()
// *****************************************************************
void CustomExpression::Clear()
{
	ReleaseArrays();

	for (size_t i = 0; i < _parts.size(); i++)
	{
		// arguments are references to parts present in the list
		// therefore there is no need to delete them
		_parts[i]->arguments.clear();		
		delete _parts[i];
	}

	ClearOperations();

	_variables.clear();
	_parts.clear();
	
	_strings.clear();

	if (_shape)
	{
		_shape->Release();
		_shape = NULL;
	}
}

// *****************************************************************
//		ClearOperations()
// *****************************************************************
void CustomExpression::ClearOperations()
{
	for (size_t i = 0; i < _operations.size(); i++)
	{
		delete _operations[i];
	}

	_operations.clear();
}

// *****************************************************************
//		ReleaseArrays()
// *****************************************************************
void CustomExpression::ReleaseArrays()
{
	for (size_t i = 0; i < _parts.size(); i++)
	{
		for (size_t j = 0; j < _parts[i]->elements.size(); j++)
		{
			CElement* el = _parts[i]->elements[j];

			if (el->type == etValue || el->type == etPart)
			{
				CExpressionValue* v = el->calcVal;
				v->clearMatrix();

				v = el->val;
				v->clearMatrix();
			}
		}
	}
}

// *****************************************************************
//		Parse()
// *****************************************************************
// building list of operation; 
// UseFields: true - only fields form attribute table; 
// false - variables, the values of which must be set
bool CustomExpression::Parse(CStringW s, bool useFields, CStringW& errorMessage)
{
	Clear();

	_saveOperations = true;
	_useFields = useFields;

	ExpressionParser parser;
	bool result = parser.Parse(this, s, useFields);

	errorMessage = _errorMessage;

	if (result)
	{
		BuildFieldList();
	}

	return result;
}

// *****************************************************************
//		get_Shape()
// *****************************************************************
IShape* CustomExpression::get_Shape()
{
	return _shape;
}

// *****************************************************************
//		put_Shape()
// *****************************************************************

void CustomExpression::put_Shape(IShape* shape)
{
	ComHelper::SetRef(shape, (IMyInterface**)&_shape, true);
}

void CustomExpression::put_FieldValue(int FieldId, BSTR newVal) 
{
	USES_CONVERSION;
	_variables[FieldId]->val->str(OLE2W(newVal));
}

void CustomExpression::put_FieldValue(int FieldId, CStringW newVal) {
	USES_CONVERSION;
	_variables[FieldId]->val->str(newVal);
}
