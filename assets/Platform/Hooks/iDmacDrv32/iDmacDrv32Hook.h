#include <Windows.h>

typedef int(__cdecl  *LPiDmacDrvRegisterWrite)(int deviceId, DWORD CommandCode, int unused, DWORD *DeviceResult);
static LPiDmacDrvRegisterWrite __iDmacDrvRegisterWrite = NULL;
int __cdecl  _H_iDmacDrvRegisterWrite(int deviceId, DWORD CommandCode, int unused, DWORD *DeviceResult);

typedef DWORD(__cdecl  *LPiDmacDrvOpen)(int deviceId, LPVOID outBuffer, LPVOID lpSomeFlag);
static LPiDmacDrvOpen __iDmacDrvOpen = NULL;
DWORD __cdecl _H_iDmacDrvOpen(int deviceId, LPVOID outBuffer, LPVOID lpSomeFlag);

typedef int(__cdecl  *LPiDmacDrvRegisterRead)(int deviceId, DWORD CommandCode, LPVOID OutBuffer, LPVOID DeviceResult);
static LPiDmacDrvRegisterRead __iDmacDrvRegisterRead = NULL;
int __cdecl _H_iDmacDrvRegisterRead(int deviceId, DWORD CommandCode, LPVOID OutBuffer, LPVOID DeviceResult);

typedef DWORD(__cdecl  *LPiDmacDrvClose)(int deviceId, LPVOID lpWriteAccess);
static LPiDmacDrvClose __iDmacDrvClose = NULL;
DWORD __cdecl _H_iDmacDrvClose(int deviceId, LPVOID lpWriteAccess);

typedef int(__cdecl *LPiDmacDrvDmaRead)(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4);
static LPiDmacDrvDmaRead __iDmacDrvDmaRead = NULL;
int __cdecl _H_iDmacDrvDmaRead(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4);

typedef int(__cdecl *LPiDmacDrvDmaWrite)(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4);
static LPiDmacDrvDmaWrite __iDmacDrvDmaWrite = NULL;
int __cdecl _H_iDmacDrvDmaWrite(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4);

typedef int(__cdecl *LPiDmacDrvRegisterBufferRead)(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5);
static LPiDmacDrvRegisterBufferRead __iDmacDrvRegisterBufferRead = NULL;
int __cdecl _H_iDmacDrvRegisterBufferRead(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5);

typedef int(__cdecl *LPiDmacDrvRegisterBufferWrite)(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5);
static LPiDmacDrvRegisterBufferWrite __iDmacDrvRegisterBufferWrite = NULL;
int __cdecl _H_iDmacDrvRegisterBufferWrite(int a1, DWORD BytesReturned, LPVOID *lp, UINT_PTR ucb, LPVOID a5);

typedef int(__cdecl *LPiDmacDrvMemoryBufferWrite)(int a1, int a2, LPVOID lp, UINT_PTR ucb, LPVOID a5);
static LPiDmacDrvMemoryBufferWrite __iDmacDrvMemoryBufferWrite = NULL;
int __cdecl _H_iDmacDrvMemoryBufferWrite(int a1, int a2, LPVOID lp, UINT_PTR ucb, LPVOID a5);

typedef int(__cdecl *LPiDmacDrvMemoryBufferRead)(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5);
static LPiDmacDrvMemoryBufferRead __iDmacDrvMemoryBufferRead = NULL;
int __cdecl _H_iDmacDrvMemoryBufferRead(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5);

typedef int(__cdecl *LPiDmacDrvMemoryWriteExt)(int a1, int a2, int a3, LPVOID Src, rsize_t DstSize, LPVOID lp);
static LPiDmacDrvMemoryWriteExt __iDmacDrvMemoryWriteExt = NULL;
int __cdecl _H_iDmacDrvMemoryWriteExt(int a1, int a2, int a3, LPVOID Src, rsize_t DstSize, LPVOID lp);

typedef int(__cdecl *LPiDmacDrvMemoryReadExt)(int a1, DWORD BytesReturned, int a3, LPVOID lp, DWORD nOutBufferSize, LPVOID a6);
static LPiDmacDrvMemoryReadExt __iDmacDrvMemoryReadExt = NULL;
int __cdecl _H_iDmacDrvMemoryReadExt(int a1, DWORD BytesReturned, int a3, LPVOID lp, DWORD nOutBufferSize, LPVOID a6);

typedef int(__cdecl *LPiDmacDrvMemoryWrite)(int a1, DWORD BytesReturned, int a3, LPVOID lp);
static LPiDmacDrvMemoryWrite __iDmacDrvMemoryWrite = NULL;
int __cdecl _H_iDmacDrvMemoryWrite(int a1, DWORD BytesReturned, int a3, LPVOID lp);

typedef int(__cdecl *LPiDmacDrvMemoryRead)(int a1, DWORD BytesReturned, LPVOID lp, LPVOID a4);
static LPiDmacDrvMemoryRead __iDmacDrvMemoryRead = NULL;
int __cdecl _H_iDmacDrvMemoryRead(int a1, DWORD BytesReturned, LPVOID lp, LPVOID a4);