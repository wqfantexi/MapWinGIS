/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Tue Jul 17 13:12:29 2001
 */
/* Compiler settings for C:\components\Callback\Callback.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Callback_h__
#define __Callback_h__


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"


class ItkCallback : public IMyInterface
{
public:
    virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Progress( 
        /* [in] */ BSTR Key,
        /* [in] */ long Percent,
        /* [in] */ BSTR Message) = 0;
        
    virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Error( 
        /* [in] */ BSTR Key,
        /* [in] */ long ErrorCode,
        /* [in] */ BSTR ErrorMsg) = 0;
        
};

#endif