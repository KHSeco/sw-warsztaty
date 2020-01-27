

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Tue Oct 16 13:48:51 2012
 */
/* Compiler settings for SwAddin1.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_ISwAddin1,0x1FF9EF95,0x6059,0x4E46,0x84,0xFB,0xA7,0x45,0x5A,0xE6,0x9E,0x0A);


MIDL_DEFINE_GUID(IID, IID_ISwDocument,0x913D3C1B,0xBF72,0x431C,0x95,0xC2,0x23,0x00,0x07,0xC7,0xE8,0x11);


MIDL_DEFINE_GUID(IID, IID_IDocView,0x9AEC8ED1,0x4FB1,0x400C,0xA0,0x7D,0xBF,0xDD,0xB7,0x2D,0x9A,0x37);


MIDL_DEFINE_GUID(IID, IID_IBitmapHandler,0x6696C7D8,0x2EDA,0x49DF,0x91,0x73,0xC8,0xBD,0xFF,0xC8,0x2F,0xCD);


MIDL_DEFINE_GUID(IID, IID_IPMPageHandler,0x57ED4E70,0x00D5,0x4E06,0x8E,0xF9,0x98,0xEE,0x68,0x92,0x4E,0xEC);


MIDL_DEFINE_GUID(IID, IID_IUserPropertyManagerPage,0xE1D30AC7,0x40DF,0x45EA,0xAE,0xCC,0x0A,0xFF,0x6E,0x06,0x8B,0x0B);


MIDL_DEFINE_GUID(IID, LIBID_SwAddin1Lib,0x33106E56,0xD952,0x4D13,0xA9,0x99,0x35,0x6E,0x3B,0x2B,0x5D,0x5B);


MIDL_DEFINE_GUID(CLSID, CLSID_SwAddin1,0x94FF13F2,0xF14F,0x4A34,0xA1,0x0A,0xAD,0xE6,0x8D,0x4A,0x2C,0xEC);


MIDL_DEFINE_GUID(CLSID, CLSID_SwDocument,0x5C9B3F60,0x00BF,0x4057,0xBA,0x87,0xEB,0x74,0x5B,0x12,0xA3,0xF8);


MIDL_DEFINE_GUID(CLSID, CLSID_DocView,0x05DD4AC8,0x1C9D,0x459E,0xBB,0x00,0x88,0x91,0xF5,0xE8,0xD3,0x27);


MIDL_DEFINE_GUID(CLSID, CLSID_BitmapHandler,0xC7920277,0x3DFB,0x4E4D,0xAB,0x37,0xD0,0xDD,0x39,0x36,0x3E,0xF8);


MIDL_DEFINE_GUID(CLSID, CLSID_PMPageHandler,0x38A8DD95,0x243C,0x4403,0x83,0x33,0xCE,0x6F,0x26,0x6B,0x94,0x65);


MIDL_DEFINE_GUID(CLSID, CLSID_UserPropertyManagerPage,0xA631B4EE,0x6E22,0x4ACB,0x92,0xA4,0x5E,0x44,0x40,0xD0,0x18,0x58);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



