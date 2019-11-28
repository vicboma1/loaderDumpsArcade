#ifdef _DIRECT_SOUND_FAKE_CREATE_DEVICE_H_

#include "stdafx.h"

struct HookIDirectSound8 : IUnknown
{
	// IUnknown methods 
	virtual HRESULT QueryInterface( REFIID riid, LPVOID *ppvObj);
	virtual ULONG AddRef();
	virtual ULONG Release();

	// IDirectInputDeviceA methods 
	virtual HRESULT Compact(); 																								
	virtual HRESULT CreateSoundBuffer(LPCDSBUFFERDESC pcDSBufferDesc, LPDIRECTSOUNDBUFFER * ppDSBuffer,LPUNKNOWN pUnkOuter);   
	virtual HRESULT DuplicateSoundBuffer(LPDIRECTSOUNDBUFFER pDSBufferOriginal, LPDIRECTSOUNDBUFFER * ppDSBufferDuplicate);	   
	virtual HRESULT GetCaps(LPDSCAPS pDSCaps); 																				
	virtual HRESULT GetSpeakerConfig(LPDWORD pdwSpeakerConfig); 															
	virtual HRESULT Initialize(LPCGUID pcGuidDevice);  																		
	virtual HRESULT SetCooperativeLevel(HWND hwnd, DWORD dwLevel); 															
	virtual HRESULT SetSpeakerConfig(DWORD dwSpeakerConfig);																
	virtual HRESULT VerifyCertification(LPDWORD pdwCertified);  															
};

#endif