#ifdef _DIRECT_D3D8_

#ifndef _DIRECT_INPUTA_CREATE_DEVICE_H_
#define _DIRECT_INPUTA_CREATE_DEVICE_H_

#include <windows.h>
#include <d3d8.h>

struct IDirectInputDeviceAHook : IUnknown {

		// IUnknown methods 
	virtual HRESULT STDMETHODCALLTYPE QueryInterface(LPVOID _this, REFIID riid, LPVOID *ppvObj);
	virtual ULONG STDMETHODCALLTYPE AddRef(LPVOID _this);
	virtual ULONG STDMETHODCALLTYPE Release(LPVOID _this);

	// IDirectInputDeviceA methods 
	virtual HRESULT STDMETHODCALLTYPE GetCapabilities(LPVOID _this, LPDIDEVCAPS lpDIDevCaps);
	virtual HRESULT STDMETHODCALLTYPE EnumObjects(LPVOID _this, LPDIENUMDEVICEOBJECTSCALLBACKA lpCallback, LPVOID pvRef, DWORD dwFlags);
	virtual HRESULT STDMETHODCALLTYPE GetProperty(LPVOID _this, REFGUID rguidProp, LPDIPROPHEADER pdiph);
	virtual HRESULT STDMETHODCALLTYPE SetProperty(LPVOID _this, REFGUID rguidProp, LPCDIPROPHEADER pdiph);
	virtual HRESULT STDMETHODCALLTYPE Acquire(LPVOID _this);
	virtual HRESULT STDMETHODCALLTYPE Unacquire(LPVOID _this);
	virtual HRESULT STDMETHODCALLTYPE GetDeviceState(LPVOID _this, DWORD cbData, LPVOID lpvData);
	virtual HRESULT STDMETHODCALLTYPE GetDeviceData(LPVOID _this, DWORD cbObjectData, LPDIDEVICEOBJECTDATA rgdod, LPDWORD pdwInOut, DWORD dwFlags);
	virtual HRESULT STDMETHODCALLTYPE SetDataFormat(LPVOID _this, LPCDIDATAFORMAT lpdf);
	virtual HRESULT STDMETHODCALLTYPE SetEventNotification(LPVOID _this, HANDLE hEvent);
	virtual HRESULT STDMETHODCALLTYPE SetCooperativeLevel(LPVOID _this, HWND hwnd, DWORD dwFlags);
	virtual HRESULT STDMETHODCALLTYPE GetObjectInfo(LPVOID _this, LPDIDEVICEOBJECTINSTANCEA pdidoi, DWORD dwObj, DWORD dwHow);
	virtual HRESULT STDMETHODCALLTYPE GetDeviceInfo(LPVOID _this, LPDIDEVICEINSTANCEA pdidi);
	virtual HRESULT STDMETHODCALLTYPE RunControlPanel(LPVOID _this, HWND hwndOwner, DWORD dwFlags);
	virtual HRESULT STDMETHODCALLTYPE Initialize(LPVOID _this, HINSTANCE hinst, DWORD dwVersion, REFGUID rguid);
};

#endif

#endif