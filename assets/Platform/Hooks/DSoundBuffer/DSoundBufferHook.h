#ifdef _DIRECT_SOUND_BUFFER_FAKE_CREATE_DEVICE_H_

#include "stdafx.h"

struct HookIDirectSoundBuffer : IUnknown
{
	// IUnknown methods
	virtual HRESULT QueryInterface(REFIID riid, LPVOID* ppvObj);
	virtual ULONG	AddRef();
	virtual ULONG	Release(;

	// IDirectSoundBuffer methods
	virtual HRESULT GetCaps(LPDSBCAPS pDSBufferCaps);
	virtual HRESULT GetCurrentPosition(LPDWORD pdwCurrentPlayCursor, LPDWORD pdwCurrentWriteCursor);
	virtual HRESULT GetFormat(LPWAVEFORMATEX pwfxFormat, DWORD dwSizeAllocated, LPDWORD pdwSizeWritten);
	virtual HRESULT GetVolume(LPLONG plVolume);
	virtual HRESULT GetPan(LPLONG plPan);
	virtual HRESULT GetFrequency(LPDWORD pdwFrequency);
	virtual HRESULT GetStatus(LPDWORD pdwStatus);
	virtual HRESULT Initialize(LPDIRECTSOUND pDirectSound, LPCDSBUFFERDESC pcDSBufferDesc);
	virtual HRESULT Lock(DWORD dwOffset, DWORD dwBytes, LPVOID *ppvAudioPtr1, LPDWORD pdwAudioBytes1, LPVOID *ppvAudioPtr2, LPDWORD pdwAudioBytes2, DWORD dwFlags);
	virtual HRESULT Play(DWORD dwReserved1, DWORD dwPriority, DWORD dwFlags);
	virtual HRESULT SetCurrentPosition(DWORD dwNewPosition);
	virtual HRESULT SetFormat(LPCWAVEFORMATEX pcfxFormat);
	virtual HRESULT SetVolume(LONG lVolume);
	virtual HRESULT SetPan(LONG lPan);
	virtual HRESULT SetFrequency(DWORD dwFrequency);
	virtual HRESULT Stop();
	virtual HRESULT Unlock(LPVOID pvAudioPtr1, DWORD dwAudioBytes1, LPVOID pvAudioPtr2, DWORD dwAudioBytes2);
	virtual HRESULT Restore();
};

#endif