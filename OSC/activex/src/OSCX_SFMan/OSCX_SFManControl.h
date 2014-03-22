// OSCX_SFManControl.h : Declaration of the COSCX_SFManControl

#ifndef __OSCX_SFMANCONTROL_H_
#define __OSCX_SFMANCONTROL_H_

#include "resource.h"       // main symbols
#include <atlctl.h>

#include "OSC_SFManager.h"

/////////////////////////////////////////////////////////////////////////////
// COSCX_SFManControl
class ATL_NO_VTABLE COSCX_SFManControl : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public IDispatchImpl<IOSCX_SFMan, &IID_IOSCX_SFMan, &LIBID_OSCX_SFMANLib>,
	public CComCompositeControl<COSCX_SFManControl>,
	public IPersistStreamInitImpl<COSCX_SFManControl>,
	public IOleControlImpl<COSCX_SFManControl>,
	public IOleObjectImpl<COSCX_SFManControl>,
	public IOleInPlaceActiveObjectImpl<COSCX_SFManControl>,
	public IViewObjectExImpl<COSCX_SFManControl>,
	public IOleInPlaceObjectWindowlessImpl<COSCX_SFManControl>,
	public ISupportErrorInfo,
	public IConnectionPointContainerImpl<COSCX_SFManControl>,
	public IPersistStorageImpl<COSCX_SFManControl>,
	public ISpecifyPropertyPagesImpl<COSCX_SFManControl>,
	public IQuickActivateImpl<COSCX_SFManControl>,
	public IDataObjectImpl<COSCX_SFManControl>,
	public IProvideClassInfo2Impl<&CLSID_OSCX_SFManControl, &DIID__IOSCX_SFManEvents, &LIBID_OSCX_SFMANLib>,
	public IPropertyNotifySinkCP<COSCX_SFManControl>,
	public CComCoClass<COSCX_SFManControl, &CLSID_OSCX_SFManControl>
{
public:
	COSCX_SFManControl();
	virtual ~COSCX_SFManControl();

DECLARE_REGISTRY_RESOURCEID(IDR_OSCX_SFMANCONTROL)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(COSCX_SFManControl)
	COM_INTERFACE_ENTRY(IOSCX_SFMan)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IViewObjectEx)
	COM_INTERFACE_ENTRY(IViewObject2)
	COM_INTERFACE_ENTRY(IViewObject)
	COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceObject)
	COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
	COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
	COM_INTERFACE_ENTRY(IOleControl)
	COM_INTERFACE_ENTRY(IOleObject)
	COM_INTERFACE_ENTRY(IPersistStreamInit)
	COM_INTERFACE_ENTRY2(IPersist, IPersistStreamInit)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
	COM_INTERFACE_ENTRY(IConnectionPointContainer)
	COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
	COM_INTERFACE_ENTRY(IQuickActivate)
	COM_INTERFACE_ENTRY(IPersistStorage)
	COM_INTERFACE_ENTRY(IDataObject)
	COM_INTERFACE_ENTRY(IProvideClassInfo)
	COM_INTERFACE_ENTRY(IProvideClassInfo2)
END_COM_MAP()

BEGIN_PROP_MAP(COSCX_SFManControl)
	PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
	PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
	// Example entries
	// PROP_ENTRY("Property Description", dispid, clsid)
	// PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()

BEGIN_CONNECTION_POINT_MAP(COSCX_SFManControl)
	CONNECTION_POINT_ENTRY(IID_IPropertyNotifySink)
END_CONNECTION_POINT_MAP()

BEGIN_MSG_MAP(COSCX_SFManControl)
	CHAIN_MSG_MAP(CComCompositeControl<COSCX_SFManControl>)
	MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

BEGIN_SINK_MAP(COSCX_SFManControl)
	//Make sure the Event Handlers have __stdcall calling convention
END_SINK_MAP()

	STDMETHOD(OnAmbientPropertyChange)(DISPID dispid)
	{
		if (dispid == DISPID_AMBIENT_BACKCOLOR)
		{
			SetBackgroundColorFromAmbient();
			FireViewChange();
		}
		return IOleControlImpl<COSCX_SFManControl>::OnAmbientPropertyChange(dispid);
	}

protected:
	OSC_SFManager m_sfm;

public:

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
	{
		static const IID* arr[] = 
		{
			&IID_IOSCX_SFMan,
		};
		for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
		{
			if (InlineIsEqualGUID(*arr[i], riid))
				return S_OK;
		}
		return S_FALSE;
	}

// IViewObjectEx
	DECLARE_VIEW_STATUS(0)

// IOSCX_SFMan
public:
	STDMETHOD(get_CurrentSynthEmulation)(/*[out, retval]*/ short *pVal);
	STDMETHOD(get_SynthEmulationDescription)(/*[in]*/ short emulationno, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_NumSynthEmulations)(/*[out, retval]*/ short *pVal);
	STDMETHOD(get_StaticSampleMemorySizeAvail)(/*[out, retval]*/ long *pVal);
	STDMETHOD(get_StaticSampleMemorySizeMax)(/*[out, retval]*/ long *pVal);
	STDMETHOD(ClearLoadedWaveform)(/*[in]*/ short bankno, /*[in]*/ short preset);
	STDMETHOD(LoadWaveform)(/*[in]*/ short destBankno, /*[in]*/ short destPreset, /*[in]*/ BSTR path);
	STDMETHOD(ClearLoadedPreset)(/*[in]*/ short bankno, /*[in]*/ short preset);
	STDMETHOD(LoadPreset)(/*[in]*/ short sourceBankno, /*[in]*/ short sourcePreset, /*[in]*/ short destBankno, /*[in]*/ short destPreset, /*[in]*/ BSTR path);
	STDMETHOD(get_LoadedBankPathname)(/*[in]*/ short bankno, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_IsMIDIBankUsed)(/*[in]*/ short bankno, /*[out, retval]*/ short *pVal);
	STDMETHOD(get_LoadedBankDescriptor)(/*[in]*/ short bankno, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_BoolIsMIDIBankUsed)(/*[in]*/ short bankno, /*[out, retval]*/ VARIANT_BOOL *pVal);
	STDMETHOD(ClearAllLoadedBanks)();
	STDMETHOD(get_CurrentOpenDevice)(/*[out, retval]*/ short *pVal);
	STDMETHOD(ClearLoadedBank)(/*[in]*/ short bankno);
	STDMETHOD(LoadBank)(/*[in]*/ short bankno, /*[in]*/ BSTR path);
	STDMETHOD(Close)();
	STDMETHOD(Open)(/*[in]*/ short deviceno);
	STDMETHOD(get_IsDeviceFree)(/*[in]*/ short deviceno, /*[out, retval]*/ VARIANT_BOOL *pVal);
	STDMETHOD(get_DevName)(/*[in]*/ short deviceno, /*[out, retval]*/ BSTR *pVal);
	STDMETHOD(get_NumDevs)(/*[out, retval]*/ short *pVal);

	enum { IDD = IDD_OSCX_SFMANCONTROL };
	LRESULT OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
};

#endif //__OSCX_SFMANCONTROL_H_
