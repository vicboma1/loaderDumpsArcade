#ifdef _DIRECT_D3D9_

#include "stdafx.h"

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreateeffectpool
typedef HRESULT(__stdcall *LPD3DXCreateTexture)(_In_  LPDIRECT3DDEVICE9  pDevice, _In_  UINT Width, _In_  UINT Height, _In_  UINT MipLevels, _In_  DWORD Usage, _In_  D3DFORMAT Format, _In_  D3DPOOL Pool, _Out_ LPDIRECT3DTEXTURE9 *ppTexture);
extern LPD3DXCreateTexture __D3DXCreateTexture;
HRESULT __stdcall Hook_D3DXCreateTexture(_In_  LPDIRECT3DDEVICE9  pDevice, _In_  UINT Width, _In_  UINT Height, _In_  UINT MipLevels, _In_  DWORD Usage, _In_  D3DFORMAT Format, _In_  D3DPOOL Pool, _Out_ LPDIRECT3DTEXTURE9 *ppTexture);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreateeffectpool
typedef HRESULT(__stdcall *LPD3DXCreateEffectPool)(_Out_ LPD3DXEFFECTPOOL *ppPool);
extern LPD3DXCreateEffectPool __D3DXCreateEffectPool;
HRESULT __stdcall Hook_D3DXCreateEffectPool(_Out_ LPD3DXEFFECTPOOL *ppPool);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixrotationyawpitchroll
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixRotationYawPitchRoll)(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      Yaw, _In_    FLOAT      Pitch, _In_    FLOAT      Roll);
extern LPD3DXMatrixRotationYawPitchRoll __D3DXMatrixRotationYawPitchRoll;
D3DXMATRIX* __stdcall Hook_D3DXMatrixRotationYawPitchRoll(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      Yaw, _In_    FLOAT      Pitch, _In_    FLOAT      Roll);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixrotationz
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixRotationZ)(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      Angle);
extern LPD3DXMatrixRotationZ __D3DXMatrixRotationZ;
D3DXMATRIX* __stdcall Hook_D3DXMatrixRotationZ(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      Angle);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixrotationx
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixRotationX)(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      Angle);
extern LPD3DXMatrixRotationX __D3DXMatrixRotationX;
D3DXMATRIX* __stdcall Hook_D3DXMatrixRotationX(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      Angle);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixrotationy
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixRotationY)(_Inout_ D3DXMATRIX *pOut, _In_ FLOAT Angle);
extern LPD3DXMatrixRotationY __D3DXMatrixRotationY;
D3DXMATRIX* __stdcall Hook_D3DXMatrixRotationY(_Inout_ D3DXMATRIX *pOut, _In_ FLOAT Angle);

//BATTLE FANSTASIA y SPACE_INVADER
//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixscaling
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixScaling)(_Inout_ D3DXMATRIX *pOut, _In_ FLOAT sx, _In_ FLOAT sy, _In_ FLOAT sz);
extern LPD3DXMatrixScaling   __D3DXMatrixScaling;
D3DXMATRIX* __stdcall Hook_D3DXMatrixScaling(_Inout_ D3DXMATRIX *pOut, _In_ FLOAT sx, _In_ FLOAT sy, _In_ FLOAT sz);

//SPACE_INVADER
//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatefont
typedef HRESULT(__stdcall *LPD3DXCreateFontA)(_In_ LPDIRECT3DDEVICE9 pDevice, _In_ INT  Height, _In_ UINT Width, _In_ UINT Weight, _In_ UINT MipLevels, _In_ BOOL Italic, _In_ DWORD CharSet, _In_ DWORD OutputPrecision, _In_ DWORD Quality, _In_ DWORD PitchAndFamily, _In_  LPCSTR  pFaceName, _Out_ LPD3DXFONT* ppFont);
extern LPD3DXCreateFontA   __D3DXCreateFontA;
HRESULT __stdcall Hook_D3DXCreateFontA(_In_ LPDIRECT3DDEVICE9 pDevice, _In_ INT  Height, _In_ UINT Width, _In_ UINT Weight, _In_ UINT MipLevels, _In_ BOOL Italic, _In_ DWORD CharSet, _In_ DWORD OutputPrecision, _In_ DWORD Quality, _In_ DWORD PitchAndFamily, _In_ LPCSTR  pFaceName, _Out_ LPD3DXFONT* ppFont);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatefont
typedef HRESULT(__stdcall *LPD3DXCreateFontW)(_In_ LPDIRECT3DDEVICE9 pDevice, _In_ INT  Height, _In_ UINT Width, _In_ UINT Weight, _In_ UINT MipLevels, _In_ BOOL Italic, _In_ DWORD CharSet, _In_ DWORD OutputPrecision, _In_ DWORD Quality, _In_ DWORD PitchAndFamily, _In_ LPCWSTR   pFaceName, _Out_ LPD3DXFONT*   ppFont);
extern LPD3DXCreateFontW __D3DXCreateFontW;
HRESULT __stdcall Hook_D3DXCreateFontW(_In_ LPDIRECT3DDEVICE9 pDevice, _In_ INT  Height, _In_ UINT Width, _In_ UINT Weight, _In_ UINT MipLevels, _In_ BOOL Italic, _In_ DWORD CharSet, _In_ DWORD OutputPrecision, _In_ DWORD Quality, _In_ DWORD PitchAndFamily, _In_ LPCWSTR pFaceName, _Out_ LPD3DXFONT*   ppFont);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixtranslation
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixTranslation)(	_Inout_ D3DXMATRIX *pOut,	_In_    FLOAT      x,	_In_    FLOAT      y,_In_    FLOAT      z);
extern LPD3DXMatrixTranslation __D3DXMatrixTranslation;
D3DXMATRIX* __stdcall Hook_D3DXMatrixTranslation(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      x, _In_    FLOAT      y, _In_    FLOAT      z);

//POWER SPIRIT 5
//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatetexturefromfileinmemoryex 
typedef HRESULT(__stdcall *LPD3DXCreateTextureFromFileInMemoryEx)(_In_    LPDIRECT3DDEVICE9  pDevice,	_In_    LPCVOID            pSrcData,	_In_    UINT               SrcDataSize,	_In_    UINT               Width,	_In_    UINT               Height,	_In_    UINT               MipLevels,	_In_    DWORD              Usage,	_In_    D3DFORMAT          Format,	_In_    D3DPOOL            Pool,	_In_    DWORD              Filter,	_In_    DWORD              MipFilter,_In_    D3DCOLOR           ColorKey,	_Inout_ D3DXIMAGE_INFO     *pSrcInfo,_Out_   PALETTEENTRY       *pPalette,_Out_   LPDIRECT3DTEXTURE9 *ppTexture);
extern LPD3DXCreateTextureFromFileInMemoryEx __D3DXCreateTextureFromFileInMemoryEx;
HRESULT __stdcall Hook_D3DXCreateTextureFromFileInMemoryEx(_In_    LPDIRECT3DDEVICE9  pDevice,_In_    LPCVOID            pSrcData,	_In_    UINT               SrcDataSize,	_In_    UINT               Width,	_In_    UINT               Height,	_In_    UINT               MipLevels,	_In_    DWORD              Usage,	_In_    D3DFORMAT          Format,	_In_    D3DPOOL            Pool,	_In_    DWORD              Filter,	_In_    DWORD              MipFilter,	_In_    D3DCOLOR           ColorKey,	_Inout_ D3DXIMAGE_INFO     *pSrcInfo,	_Out_   PALETTEENTRY       *pPalette,_Out_   LPDIRECT3DTEXTURE9 *ppTexture);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatefontindirect
typedef HRESULT(__stdcall *LPD3DXCreateFontIndirectW)(_In_        LPDIRECT3DDEVICE9 pDevice, _In_  const D3DXFONT_DESC     *pDesc, _Out_       LPD3DXFONT        *ppFont);
extern LPD3DXCreateFontIndirectW __D3DXCreateFontIndirectW;
HRESULT __stdcall Hook_D3DXCreateFontIndirectW(_In_        LPDIRECT3DDEVICE9 pDevice, _In_  const D3DXFONT_DESC     *pDesc, _Out_       LPD3DXFONT        *ppFont);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatetexturefromfile
typedef HRESULT(__stdcall *LPD3DXCreateTextureFromFileW)(_In_  LPDIRECT3DDEVICE9  pDevice, _In_  LPCTSTR            pSrcFile, _Out_ LPDIRECT3DTEXTURE9 *ppTexture);
extern LPD3DXCreateTextureFromFileW __D3DXCreateTextureFromFileW;
HRESULT __stdcall Hook_D3DXCreateTextureFromFileW(_In_    LPDIRECT3DDEVICE9  pDevice, LPCTSTR            pSrcFile, _Out_ LPDIRECT3DTEXTURE9 *ppTexture);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatetexturefromfileinmemory
typedef HRESULT(__stdcall *LPD3DXCreateTextureFromFileInMemory)(_In_  LPDIRECT3DDEVICE9  pDevice,_In_  LPCVOID            pSrcData,_In_  UINT               SrcDataSize,_Out_ LPDIRECT3DTEXTURE9 *ppTexture);
extern LPD3DXCreateTextureFromFileInMemory __D3DXCreateTextureFromFileInMemory;
HRESULT __stdcall Hook_D3DXCreateTextureFromFileInMemory(_In_  LPDIRECT3DDEVICE9  pDevice, _In_  LPCVOID            pSrcData, _In_  UINT               SrcDataSize, _Out_ LPDIRECT3DTEXTURE9 *ppTexture);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixmultiply
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixMultiply)(_Inout_  D3DXMATRIX *pOut, _In_ const D3DXMATRIX *pM1, _In_ const D3DXMATRIX *pM2);
extern LPD3DXMatrixMultiply __D3DXMatrixMultiply;
D3DXMATRIX* __stdcall Hook_D3DXMatrixMultiply(_Inout_  D3DXMATRIX *pOut, _In_ const D3DXMATRIX *pM1, _In_ const D3DXMATRIX *pM2);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatesprite
typedef HRESULT(__stdcall *LPD3DXCreateSprite)(_In_  LPDIRECT3DDEVICE9 pDevice,	_Out_ LPD3DXSPRITE      *ppSprite);
extern LPD3DXCreateSprite __D3DXCreateSprite;
HRESULT __stdcall Hook_D3DXCreateSprite(_In_  LPDIRECT3DDEVICE9 pDevice, _Out_ LPD3DXSPRITE      *ppSprite);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixorthooffcenterlh
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixOrthoOffCenterLH)(_Inout_ D3DXMATRIX *pOut,_In_    FLOAT      l,_In_    FLOAT      r,_In_    FLOAT      b,_In_    FLOAT      t,_In_    FLOAT      zn,_In_    FLOAT      zf);
extern LPD3DXMatrixOrthoOffCenterLH __D3DXMatrixOrthoOffCenterLH ;
D3DXMATRIX* __stdcall Hook_D3DXMatrixOrthoOffCenterLH(_Inout_ D3DXMATRIX *pOut,_In_    FLOAT      l,_In_    FLOAT      r,_In_    FLOAT      b,_In_    FLOAT      t,_In_    FLOAT      zn,_In_    FLOAT      zf);

#endif
