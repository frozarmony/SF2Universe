// OSCX_SFManControl.cpp : Implementation of COSCX_SFManControl

#include "stdafx.h"
#include "OSCX_SFMan.h"
#include "OSCX_SFManControl.h"

#include <string>

/////////////////////////////////////////////////////////////////////////////
// COSCX_SFManControl

COSCX_SFManControl::COSCX_SFManControl()
{
	m_bWindowOnly = TRUE;
	CalcExtent(m_sizeExtent);
}

COSCX_SFManControl::~COSCX_SFManControl()
{
};

LRESULT COSCX_SFManControl::OnInitDialog(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
{
	// TODO : Add Code for message handler. Call DefWindowProc if necessary.
	OSC_ERR res;
	res = m_sfm.Init();
	if (res != OSC_ERR_OK)
	{
		MessageBox("Couldn't initialize the SoundFont Management System", 
			"Error", MB_OK | MB_ICONERROR);
	}
	return 0;
};


STDMETHODIMP COSCX_SFManControl::get_NumDevs(short *pVal)
{
	*pVal = m_sfm.GetNumDevs();

	if (m_sfm.SFManError())
		return E_FAIL;
	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::get_DevName(short deviceno, BSTR *pVal)
{
	std::string name;
	OSC_ERR res;
	res = m_sfm.GetDevName(deviceno, name);
	if (res != OSC_ERR_OK)
		return E_FAIL;

	CComBSTR tmp;
	tmp=name.c_str();
	*pVal=tmp.Copy();

	return S_OK;
};

STDMETHODIMP COSCX_SFManControl::get_IsDeviceFree(short deviceno, VARIANT_BOOL *pVal)
{
	bool isfree = m_sfm.IsDeviceFree(deviceno);
	if (isfree)
		*pVal = VARIANT_TRUE;
	else
		*pVal = VARIANT_FALSE;  

	return S_OK;
};

STDMETHODIMP COSCX_SFManControl::Open(short deviceno)
{
	OSC_ERR res;
	res = m_sfm.Open(deviceno);
	if (res != OSC_ERR_OK)
		return E_FAIL;
	return S_OK;
};

STDMETHODIMP COSCX_SFManControl::Close()
{
	OSC_ERR res;
	res = m_sfm.Close();
	if (res != OSC_ERR_OK)
		return E_FAIL;
	return S_OK;
};

STDMETHODIMP COSCX_SFManControl::LoadBank(short bankno, BSTR path)
{
	USES_CONVERSION;
	std::string strpath = std::string(OLE2CA(path));

	OSC_ERR res;
	res = m_sfm.LoadBank(bankno, strpath);
	if (res != OSC_ERR_OK)
		return E_FAIL;
	return S_OK;
};

STDMETHODIMP COSCX_SFManControl::ClearLoadedBank(short bankno)
{
	OSC_ERR res;
	res = m_sfm.ClearLoadedBank(bankno);
	if (res != OSC_ERR_OK)
		return E_FAIL;
	return S_OK;
};

STDMETHODIMP COSCX_SFManControl::get_CurrentOpenDevice(short *pVal)
{
	*pVal = m_sfm.GetCurrentOpenDevice();
	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::ClearAllLoadedBanks()
{
	OSC_ERR res;
	res = m_sfm.ClearAllLoadedBanks();
	if (res != OSC_ERR_OK)
		return E_FAIL;

	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::get_BoolIsMIDIBankUsed(short bankno, VARIANT_BOOL *pVal)
{
	bool isfree = m_sfm.BoolIsMIDIBankUsed(bankno);
	if (isfree)
		*pVal = VARIANT_TRUE;
	else
		*pVal = VARIANT_FALSE;  

	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::get_LoadedBankDescriptor(short bankno, BSTR *pVal)
{
	OSC_ERR res;
	std::string name;
	res = m_sfm.GetLoadedBankDescriptor(bankno, name);
	if (res != OSC_ERR_OK)
		return E_FAIL;

	CComBSTR tmp;
	tmp=name.c_str();
	*pVal=tmp.Copy();

	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::get_IsMIDIBankUsed(short bankno, short *pVal)
{
	*pVal = m_sfm.IsMIDIBankUsed(bankno);
	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::get_LoadedBankPathname(short bankno, BSTR *pVal)
{
	std::string path;
	OSC_ERR res;
	res = m_sfm.GetLoadedBankPathname(bankno, path);
	if (res != OSC_ERR_OK)
		return E_FAIL;

	CComBSTR tmp;
	tmp=path.c_str();
	*pVal=tmp.Copy();

	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::LoadPreset(short sourceBankno, short sourcePreset, short destBankno, short destPreset, BSTR path)
{
	USES_CONVERSION;
	std::string strpath = std::string(OLE2CA(path));

	OSC_ERR res;
	res = m_sfm.LoadPreset(sourceBankno, sourcePreset, destBankno, destPreset, strpath);
	if (res != OSC_ERR_OK)
		return E_FAIL;
	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::ClearLoadedPreset(short bankno, short preset)
{
	OSC_ERR res;
	res = m_sfm.ClearLoadedPreset(bankno, preset);
	if (res != OSC_ERR_OK)
		return E_FAIL;
	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::LoadWaveform(short destBankno, short destPreset, BSTR path)
{
	USES_CONVERSION;
	std::string strpath = std::string(OLE2CA(path));

	OSC_ERR res;
	res = m_sfm.LoadWaveform(destBankno, destPreset, strpath);
	if (res != OSC_ERR_OK)
		return E_FAIL;
	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::ClearLoadedWaveform(short bankno, short preset)
{
	OSC_ERR res;
	res = m_sfm.ClearLoadedWaveform(bankno, preset);
	if (res != OSC_ERR_OK)
		return E_FAIL;
	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::get_StaticSampleMemorySizeMax(long *pVal)
{
	*pVal = 0;
	int maxmem, availmem;
	OSC_ERR err = m_sfm.QueryStaticSampleMemorySize(maxmem, availmem);

	if (m_sfm.SFManError())
		return E_FAIL;
	*pVal = maxmem;

	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::get_StaticSampleMemorySizeAvail(long *pVal)
{
	*pVal = 0;
	int maxmem, availmem;
	OSC_ERR err = m_sfm.QueryStaticSampleMemorySize(maxmem, availmem);

	if (m_sfm.SFManError())
		return E_FAIL;
	*pVal = availmem;

	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::get_NumSynthEmulations(short *pVal)
{
	*pVal = m_sfm.GetNumSynthEmulations();

	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::get_SynthEmulationDescription(short emulationno, BSTR *pVal)
{
	std::string name;
	OSC_ERR res = m_sfm.GetSynthEmulationDescription(emulationno, name);
	if (res != OSC_ERR_OK)
		return E_FAIL;

	CComBSTR tmp;
	tmp=name.c_str();
	*pVal=tmp.Copy();

	return S_OK;
}

STDMETHODIMP COSCX_SFManControl::get_CurrentSynthEmulation(short *pVal)
{
	std::string name;
	int index;
	OSC_ERR res = m_sfm.GetSynthEmulation(index, name);
	if (res != OSC_ERR_OK)
		return E_FAIL;

	*pVal = index;

	return S_OK;
}
