#ifdef _DIRECT_D3D8_
#include <windows.h>
#include <d3d8.h>

struct D3D8Hook : IUnknown {

	virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID riid, void **ppvObj) override;
	virtual ULONG STDMETHODCALLTYPE AddRef() override;
	virtual ULONG STDMETHODCALLTYPE Release() override;
	
	virtual HRESULT STDMETHODCALLTYPE CreateDevice(UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS8 *pPresentationParameters, Direct3DDevice8 **ppReturnedDeviceInterface);
	virtual HRESULT STDMETHODCALLTYPE RegisterSoftwareDevice(void *pInitializeFunction);
	virtual HRESULT STDMETHODCALLTYPE CheckDepthStencilMatch(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, D3DFORMAT RenderTargetFormat, D3DFORMAT DepthStencilFormat);
	virtual HRESULT STDMETHODCALLTYPE GetAdapterIdentifier(UINT Adapter, DWORD Flags, D3DADAPTER_IDENTIFIER8 *pIdentifier);
	virtual UINT STDMETHODCALLTYPE GetAdapterModeCount(UINT Adapter);
	virtual HRESULT STDMETHODCALLTYPE EnumAdapterModes(UINT Adapter, UINT Mode, D3DDISPLAYMODE *pMode);
	virtual HRESULT STDMETHODCALLTYPE CheckDeviceFormat(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, DWORD Usage, D3DRESOURCETYPE RType, D3DFORMAT CheckFormat);
	virtual HRESULT STDMETHODCALLTYPE GetDeviceCaps(UINT Adapter, D3DDEVTYPE DeviceType, D3DCAPS8 *pCaps);
	virtual HMONITOR STDMETHODCALLTYPE GetAdapterMonitor(UINT Adapter);
	virtual HRESULT STDMETHODCALLTYPE GetAdapterDisplayMode(UINT Adapter, D3DDISPLAYMODE *pMode);
	virtual HRESULT STDMETHODCALLTYPE CheckDeviceType(UINT Adapter, D3DDEVTYPE CheckType, D3DFORMAT DisplayFormat, D3DFORMAT BackBufferFormat, BOOL bWindowed);
	virtual UINT STDMETHODCALLTYPE GetAdapterCount();
	virtual HRESULT STDMETHODCALLTYPE CheckDeviceMultiSampleType(UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SurfaceFormat, BOOL Windowed, D3DMULTISAMPLE_TYPE MultiSampleType);
	
};

#endif
