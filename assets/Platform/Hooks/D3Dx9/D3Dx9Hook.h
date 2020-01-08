#ifdef _DIRECT_D3D9_

#include "stdafx.h"

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatefont
typedef HRESULT(__stdcall *LPD3DXCreateFontA)(_In_ LPDIRECT3DDEVICE9 pDevice, _In_ INT  Height, _In_ UINT Width, _In_ UINT Weight, _In_ UINT MipLevels, _In_ BOOL Italic, _In_ DWORD CharSet, _In_ DWORD OutputPrecision, _In_ DWORD Quality, _In_ DWORD PitchAndFamily, _In_  LPCSTR  pFaceName, _Out_ LPD3DXFONT* ppFont);
extern LPD3DXCreateFontA   __D3DXCreateFontA;
HRESULT __stdcall _H_D3DXCreateFontA(_In_ LPDIRECT3DDEVICE9 pDevice, _In_ INT  Height, _In_ UINT Width, _In_ UINT Weight, _In_ UINT MipLevels, _In_ BOOL Italic, _In_ DWORD CharSet, _In_ DWORD OutputPrecision, _In_ DWORD Quality, _In_ DWORD PitchAndFamily, _In_ LPCSTR  pFaceName, _Out_ LPD3DXFONT* ppFont);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatefont
typedef HRESULT(__stdcall *LPD3DXCreateFontW)(_In_ LPDIRECT3DDEVICE9 pDevice, _In_ INT  Height, _In_ UINT Width, _In_ UINT Weight, _In_ UINT MipLevels, _In_ BOOL Italic, _In_ DWORD CharSet, _In_ DWORD OutputPrecision, _In_ DWORD Quality, _In_ DWORD PitchAndFamily, _In_ LPCWSTR   pFaceName, _Out_ LPD3DXFONT*   ppFont);
extern LPD3DXCreateFontW __D3DXCreateFontW;
HRESULT __stdcall _H_D3DXCreateFontW(_In_ LPDIRECT3DDEVICE9 pDevice, _In_ INT  Height, _In_ UINT Width, _In_ UINT Weight, _In_ UINT MipLevels, _In_ BOOL Italic, _In_ DWORD CharSet, _In_ DWORD OutputPrecision, _In_ DWORD Quality, _In_ DWORD PitchAndFamily, _In_ LPCWSTR pFaceName, _Out_ LPD3DXFONT*   ppFont);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixtranslation
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixTranslation)(	_Inout_ D3DXMATRIX *pOut,	_In_    FLOAT      x,	_In_    FLOAT      y,_In_    FLOAT      z);
extern LPD3DXMatrixTranslation __D3DXMatrixTranslation;
D3DXMATRIX* __stdcall _H_D3DXMatrixTranslation(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      x, _In_    FLOAT      y, _In_    FLOAT      z);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixscaling
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixScaling)(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      x, _In_    FLOAT      y, _In_    FLOAT      z);
extern LPD3DXMatrixScaling __D3DXMatrixScaling;
D3DXMATRIX* __stdcall _H_D3DXMatrixScaling(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      x, _In_    FLOAT      y, _In_    FLOAT      z);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatetexturefromfileinmemory
typedef HRESULT(__stdcall *LPD3DXCreateTextureFromFileInMemory)(_In_  LPDIRECT3DDEVICE9  pDevice,_In_  LPCVOID            pSrcData,_In_  UINT               SrcDataSize,_Out_ LPDIRECT3DTEXTURE9 *ppTexture);
extern LPD3DXCreateTextureFromFileInMemory __D3DXCreateTextureFromFileInMemory;
HRESULT __stdcall _H_D3DXCreateTextureFromFileInMemory(_In_  LPDIRECT3DDEVICE9  pDevice, _In_  LPCVOID            pSrcData, _In_  UINT               SrcDataSize, _Out_ LPDIRECT3DTEXTURE9 *ppTexture);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixmultiply
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixMultiply)(_Inout_  D3DXMATRIX *pOut, _In_ const D3DXMATRIX *pM1, _In_ const D3DXMATRIX *pM2);
extern LPD3DXMatrixMultiply __D3DXMatrixMultiply;
D3DXMATRIX* __stdcall _H_D3DXMatrixMultiply(_Inout_  D3DXMATRIX *pOut, _In_ const D3DXMATRIX *pM1, _In_ const D3DXMATRIX *pM2);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxcreatesprite
typedef HRESULT(__stdcall *LPD3DXCreateSprite)(_In_  LPDIRECT3DDEVICE9 pDevice,	_Out_ LPD3DXSPRITE      *ppSprite);
extern LPD3DXCreateSprite __D3DXCreateSprite;
HRESULT __stdcall _H_D3DXCreateSprite(_In_  LPDIRECT3DDEVICE9 pDevice, _Out_ LPD3DXSPRITE      *ppSprite);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixorthooffcenterlh
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixOrthoOffCenterLH)(_Inout_ D3DXMATRIX *pOut,_In_    FLOAT      l,_In_    FLOAT      r,_In_    FLOAT      b,_In_    FLOAT      t,_In_    FLOAT      zn,_In_    FLOAT      zf);
extern LPD3DXMatrixOrthoOffCenterLH __D3DXMatrixOrthoOffCenterLH ;
D3DXMATRIX* __stdcall _H_D3DXMatrixOrthoOffCenterLH(_Inout_ D3DXMATRIX *pOut,_In_    FLOAT      l,_In_    FLOAT      r,_In_    FLOAT      b,_In_    FLOAT      t,_In_    FLOAT      zn,_In_    FLOAT      zf);

//https://docs.microsoft.com/en-us/windows/win32/direct3d9/d3dxmatrixrotationz
typedef D3DXMATRIX* (__stdcall *LPD3DXMatrixRotationZ)(	_Inout_ D3DXMATRIX *pOut,	_In_    FLOAT      Angle);
extern LPD3DXMatrixRotationZ __D3DXMatrixRotationZ;
D3DXMATRIX* __stdcall _H_D3DXMatrixRotationZ(_Inout_ D3DXMATRIX *pOut, _In_    FLOAT      Angle);

#endif