#ifdef _DIRECT_D3D9_

#include "stdafx.h"

//https://docs.microsoft.com/en-us/windows/win32/api/ddraw/nf-ddraw-directdrawcreateex
typedef HRESULT(__stdcall *LPDirectDrawCreateEx)(GUID *lpGuid, LPVOID *lplpDD, REFIID iid, IUnknown *pUnkOuter);
extern LPDirectDrawCreateEx __DirectDrawCreateEx;
HRESULT __stdcall _H_DirectDrawCreateEx(GUID *lpGuid, LPVOID *lplpDD, REFIID iid, IUnknown *pUnkOuter);

#endif