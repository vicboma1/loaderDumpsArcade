#ifndef _CRYPTO_H_
#define _CRYPTO_H_

#include "stdafx.h"

typedef BOOL(__stdcall* LPCryptAcquireContextA)(HCRYPTPROV* phProv, LPCSTR szContainer, LPCSTR szProvider, DWORD dwProvType, DWORD dwFlags);
static LPCryptAcquireContextA __CryptAcquireContextA = NULL;
BOOL __stdcall _H_CryptAcquireContextA(HCRYPTPROV* phProv, LPCSTR szContainer, LPCSTR szProvider, DWORD dwProvType, DWORD dwFlags);


typedef BOOL(__stdcall* LPCryptGenKey)(HCRYPTPROV hProv, ALG_ID Algid, DWORD dwFlags, HCRYPTKEY* phKey);
static LPCryptGenKey __CryptGenKey = NULL;
BOOL __stdcall _H_CryptGenKey(HCRYPTPROV hProv, ALG_ID Algid, DWORD dwFlags, HCRYPTKEY* phKey);

#endif