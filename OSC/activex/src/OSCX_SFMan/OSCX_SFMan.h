/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sat Jun 26 20:26:30 1999
 */
/* Compiler settings for E:\Variable\Kode\OSC\activex\OSCX\OSCX_SFMan\OSCX_SFMan.idl:
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

#ifndef __OSCX_SFMan_h__
#define __OSCX_SFMan_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IOSCX_SFMan_FWD_DEFINED__
#define __IOSCX_SFMan_FWD_DEFINED__
typedef interface IOSCX_SFMan IOSCX_SFMan;
#endif 	/* __IOSCX_SFMan_FWD_DEFINED__ */


#ifndef ___IOSCX_SFManEvents_FWD_DEFINED__
#define ___IOSCX_SFManEvents_FWD_DEFINED__
typedef interface _IOSCX_SFManEvents _IOSCX_SFManEvents;
#endif 	/* ___IOSCX_SFManEvents_FWD_DEFINED__ */


#ifndef __OSCX_SFManControl_FWD_DEFINED__
#define __OSCX_SFManControl_FWD_DEFINED__

#ifdef __cplusplus
typedef class OSCX_SFManControl OSCX_SFManControl;
#else
typedef struct OSCX_SFManControl OSCX_SFManControl;
#endif /* __cplusplus */

#endif 	/* __OSCX_SFManControl_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __IOSCX_SFMan_INTERFACE_DEFINED__
#define __IOSCX_SFMan_INTERFACE_DEFINED__

/* interface IOSCX_SFMan */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IOSCX_SFMan;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1A200131-280C-11D3-9727-8F1BC2D89209")
    IOSCX_SFMan : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumDevs( 
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DevName( 
            /* [in] */ short deviceno,
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDeviceFree( 
            /* [in] */ short deviceno,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Open( 
            /* [in] */ short deviceno) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadBank( 
            /* [in] */ short bankno,
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearLoadedBank( 
            /* [in] */ short bankno) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentOpenDevice( 
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearAllLoadedBanks( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BoolIsMIDIBankUsed( 
            /* [in] */ short bankno,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LoadedBankDescriptor( 
            /* [in] */ short bankno,
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsMIDIBankUsed( 
            /* [in] */ short bankno,
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LoadedBankPathname( 
            /* [in] */ short bankno,
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadPreset( 
            /* [in] */ short sourceBankno,
            /* [in] */ short sourcePreset,
            /* [in] */ short destBankno,
            /* [in] */ short destPreset,
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearLoadedPreset( 
            /* [in] */ short bankno,
            /* [in] */ short preset) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LoadWaveform( 
            /* [in] */ short destBankno,
            /* [in] */ short destPreset,
            /* [in] */ BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClearLoadedWaveform( 
            /* [in] */ short bankno,
            /* [in] */ short preset) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StaticSampleMemorySizeMax( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_StaticSampleMemorySizeAvail( 
            /* [retval][out] */ long __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumSynthEmulations( 
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SynthEmulationDescription( 
            /* [in] */ short emulationno,
            /* [retval][out] */ BSTR __RPC_FAR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentSynthEmulation( 
            /* [retval][out] */ short __RPC_FAR *pVal) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IOSCX_SFManVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IOSCX_SFMan __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IOSCX_SFMan __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_NumDevs )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DevName )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short deviceno,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsDeviceFree )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short deviceno,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Open )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short deviceno);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Close )( 
            IOSCX_SFMan __RPC_FAR * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoadBank )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short bankno,
            /* [in] */ BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ClearLoadedBank )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short bankno);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_CurrentOpenDevice )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ClearAllLoadedBanks )( 
            IOSCX_SFMan __RPC_FAR * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_BoolIsMIDIBankUsed )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short bankno,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LoadedBankDescriptor )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short bankno,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_IsMIDIBankUsed )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short bankno,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_LoadedBankPathname )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short bankno,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoadPreset )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short sourceBankno,
            /* [in] */ short sourcePreset,
            /* [in] */ short destBankno,
            /* [in] */ short destPreset,
            /* [in] */ BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ClearLoadedPreset )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short bankno,
            /* [in] */ short preset);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *LoadWaveform )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short destBankno,
            /* [in] */ short destPreset,
            /* [in] */ BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ClearLoadedWaveform )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short bankno,
            /* [in] */ short preset);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StaticSampleMemorySizeMax )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_StaticSampleMemorySizeAvail )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [retval][out] */ long __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_NumSynthEmulations )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_SynthEmulationDescription )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [in] */ short emulationno,
            /* [retval][out] */ BSTR __RPC_FAR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_CurrentSynthEmulation )( 
            IOSCX_SFMan __RPC_FAR * This,
            /* [retval][out] */ short __RPC_FAR *pVal);
        
        END_INTERFACE
    } IOSCX_SFManVtbl;

    interface IOSCX_SFMan
    {
        CONST_VTBL struct IOSCX_SFManVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOSCX_SFMan_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IOSCX_SFMan_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IOSCX_SFMan_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IOSCX_SFMan_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IOSCX_SFMan_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IOSCX_SFMan_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IOSCX_SFMan_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IOSCX_SFMan_get_NumDevs(This,pVal)	\
    (This)->lpVtbl -> get_NumDevs(This,pVal)

#define IOSCX_SFMan_get_DevName(This,deviceno,pVal)	\
    (This)->lpVtbl -> get_DevName(This,deviceno,pVal)

#define IOSCX_SFMan_get_IsDeviceFree(This,deviceno,pVal)	\
    (This)->lpVtbl -> get_IsDeviceFree(This,deviceno,pVal)

#define IOSCX_SFMan_Open(This,deviceno)	\
    (This)->lpVtbl -> Open(This,deviceno)

#define IOSCX_SFMan_Close(This)	\
    (This)->lpVtbl -> Close(This)

#define IOSCX_SFMan_LoadBank(This,bankno,path)	\
    (This)->lpVtbl -> LoadBank(This,bankno,path)

#define IOSCX_SFMan_ClearLoadedBank(This,bankno)	\
    (This)->lpVtbl -> ClearLoadedBank(This,bankno)

#define IOSCX_SFMan_get_CurrentOpenDevice(This,pVal)	\
    (This)->lpVtbl -> get_CurrentOpenDevice(This,pVal)

#define IOSCX_SFMan_ClearAllLoadedBanks(This)	\
    (This)->lpVtbl -> ClearAllLoadedBanks(This)

#define IOSCX_SFMan_get_BoolIsMIDIBankUsed(This,bankno,pVal)	\
    (This)->lpVtbl -> get_BoolIsMIDIBankUsed(This,bankno,pVal)

#define IOSCX_SFMan_get_LoadedBankDescriptor(This,bankno,pVal)	\
    (This)->lpVtbl -> get_LoadedBankDescriptor(This,bankno,pVal)

#define IOSCX_SFMan_get_IsMIDIBankUsed(This,bankno,pVal)	\
    (This)->lpVtbl -> get_IsMIDIBankUsed(This,bankno,pVal)

#define IOSCX_SFMan_get_LoadedBankPathname(This,bankno,pVal)	\
    (This)->lpVtbl -> get_LoadedBankPathname(This,bankno,pVal)

#define IOSCX_SFMan_LoadPreset(This,sourceBankno,sourcePreset,destBankno,destPreset,path)	\
    (This)->lpVtbl -> LoadPreset(This,sourceBankno,sourcePreset,destBankno,destPreset,path)

#define IOSCX_SFMan_ClearLoadedPreset(This,bankno,preset)	\
    (This)->lpVtbl -> ClearLoadedPreset(This,bankno,preset)

#define IOSCX_SFMan_LoadWaveform(This,destBankno,destPreset,path)	\
    (This)->lpVtbl -> LoadWaveform(This,destBankno,destPreset,path)

#define IOSCX_SFMan_ClearLoadedWaveform(This,bankno,preset)	\
    (This)->lpVtbl -> ClearLoadedWaveform(This,bankno,preset)

#define IOSCX_SFMan_get_StaticSampleMemorySizeMax(This,pVal)	\
    (This)->lpVtbl -> get_StaticSampleMemorySizeMax(This,pVal)

#define IOSCX_SFMan_get_StaticSampleMemorySizeAvail(This,pVal)	\
    (This)->lpVtbl -> get_StaticSampleMemorySizeAvail(This,pVal)

#define IOSCX_SFMan_get_NumSynthEmulations(This,pVal)	\
    (This)->lpVtbl -> get_NumSynthEmulations(This,pVal)

#define IOSCX_SFMan_get_SynthEmulationDescription(This,emulationno,pVal)	\
    (This)->lpVtbl -> get_SynthEmulationDescription(This,emulationno,pVal)

#define IOSCX_SFMan_get_CurrentSynthEmulation(This,pVal)	\
    (This)->lpVtbl -> get_CurrentSynthEmulation(This,pVal)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_NumDevs_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_NumDevs_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_DevName_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short deviceno,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_DevName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_IsDeviceFree_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short deviceno,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_IsDeviceFree_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_Open_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short deviceno);


void __RPC_STUB IOSCX_SFMan_Open_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_Close_Proxy( 
    IOSCX_SFMan __RPC_FAR * This);


void __RPC_STUB IOSCX_SFMan_Close_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_LoadBank_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short bankno,
    /* [in] */ BSTR path);


void __RPC_STUB IOSCX_SFMan_LoadBank_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_ClearLoadedBank_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short bankno);


void __RPC_STUB IOSCX_SFMan_ClearLoadedBank_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_CurrentOpenDevice_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_CurrentOpenDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_ClearAllLoadedBanks_Proxy( 
    IOSCX_SFMan __RPC_FAR * This);


void __RPC_STUB IOSCX_SFMan_ClearAllLoadedBanks_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_BoolIsMIDIBankUsed_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short bankno,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_BoolIsMIDIBankUsed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_LoadedBankDescriptor_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short bankno,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_LoadedBankDescriptor_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_IsMIDIBankUsed_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short bankno,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_IsMIDIBankUsed_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_LoadedBankPathname_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short bankno,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_LoadedBankPathname_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_LoadPreset_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short sourceBankno,
    /* [in] */ short sourcePreset,
    /* [in] */ short destBankno,
    /* [in] */ short destPreset,
    /* [in] */ BSTR path);


void __RPC_STUB IOSCX_SFMan_LoadPreset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_ClearLoadedPreset_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short bankno,
    /* [in] */ short preset);


void __RPC_STUB IOSCX_SFMan_ClearLoadedPreset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_LoadWaveform_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short destBankno,
    /* [in] */ short destPreset,
    /* [in] */ BSTR path);


void __RPC_STUB IOSCX_SFMan_LoadWaveform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_ClearLoadedWaveform_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short bankno,
    /* [in] */ short preset);


void __RPC_STUB IOSCX_SFMan_ClearLoadedWaveform_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_StaticSampleMemorySizeMax_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_StaticSampleMemorySizeMax_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_StaticSampleMemorySizeAvail_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [retval][out] */ long __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_StaticSampleMemorySizeAvail_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_NumSynthEmulations_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_NumSynthEmulations_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_SynthEmulationDescription_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [in] */ short emulationno,
    /* [retval][out] */ BSTR __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_SynthEmulationDescription_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE IOSCX_SFMan_get_CurrentSynthEmulation_Proxy( 
    IOSCX_SFMan __RPC_FAR * This,
    /* [retval][out] */ short __RPC_FAR *pVal);


void __RPC_STUB IOSCX_SFMan_get_CurrentSynthEmulation_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IOSCX_SFMan_INTERFACE_DEFINED__ */



#ifndef __OSCX_SFMANLib_LIBRARY_DEFINED__
#define __OSCX_SFMANLib_LIBRARY_DEFINED__

/* library OSCX_SFMANLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_OSCX_SFMANLib;

#ifndef ___IOSCX_SFManEvents_DISPINTERFACE_DEFINED__
#define ___IOSCX_SFManEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IOSCX_SFManEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IOSCX_SFManEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("1A200133-280C-11D3-9727-8F1BC2D89209")
    _IOSCX_SFManEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IOSCX_SFManEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            _IOSCX_SFManEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            _IOSCX_SFManEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            _IOSCX_SFManEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            _IOSCX_SFManEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            _IOSCX_SFManEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            _IOSCX_SFManEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            _IOSCX_SFManEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } _IOSCX_SFManEventsVtbl;

    interface _IOSCX_SFManEvents
    {
        CONST_VTBL struct _IOSCX_SFManEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IOSCX_SFManEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _IOSCX_SFManEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _IOSCX_SFManEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _IOSCX_SFManEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _IOSCX_SFManEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _IOSCX_SFManEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _IOSCX_SFManEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IOSCX_SFManEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_OSCX_SFManControl;

#ifdef __cplusplus

class DECLSPEC_UUID("1A200132-280C-11D3-9727-8F1BC2D89209")
OSCX_SFManControl;
#endif
#endif /* __OSCX_SFMANLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long __RPC_FAR *, unsigned long            , BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserMarshal(  unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
unsigned char __RPC_FAR * __RPC_USER  BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long __RPC_FAR *, BSTR __RPC_FAR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
