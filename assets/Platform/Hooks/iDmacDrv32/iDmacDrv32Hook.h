#include <Windows.h>

typedef int(__stdcall  *LPiDmacDrvRegisterWrite)(int deviceId, DWORD CommandCode, int unused, DWORD *DeviceResult);
static LPiDmacDrvRegisterWrite __iDmacDrvRegisterWrite = NULL;
int __stdcall  _H_iDmacDrvRegisterWrite(int deviceId, DWORD CommandCode, int unused, DWORD *DeviceResult);

typedef DWORD(__stdcall  *LPiDmacDrvOpen)(int deviceId, LPVOID outBuffer, LPVOID lpSomeFlag);
static LPiDmacDrvOpen __iDmacDrvOpen = NULL;
DWORD __stdcall _H_iDmacDrvOpen(int deviceId, LPVOID outBuffer, LPVOID lpSomeFlag);

typedef int(__stdcall  *LPiDmacDrvRegisterRead)(int deviceId, DWORD CommandCode, LPVOID OutBuffer, LPVOID DeviceResult);
static LPiDmacDrvRegisterRead __iDmacDrvRegisterRead = NULL;
int __stdcall _H_iDmacDrvRegisterRead(int deviceId, DWORD CommandCode, LPVOID OutBuffer, LPVOID DeviceResult);

typedef DWORD(__stdcall  *LPiDmacDrvClose)(int deviceId, LPVOID lpWriteAccess);
static LPiDmacDrvClose __iDmacDrvClose = NULL;
DWORD __stdcall _H_iDmacDrvClose(int deviceId, LPVOID lpWriteAccess);

typedef int(__stdcall *LPiDmacDrvDmaRead)(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4);
static LPiDmacDrvDmaRead __iDmacDrvDmaRead = NULL;
int __stdcall _H_iDmacDrvDmaRead(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4);

typedef int(__stdcall *LPiDmacDrvDmaWrite)(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4);
static LPiDmacDrvDmaWrite __iDmacDrvDmaWrite = NULL;
int __stdcall _H_iDmacDrvDmaWrite(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4);

typedef int(__stdcall *LPiDmacDrvRegisterBufferRead)(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5);
static LPiDmacDrvRegisterBufferRead __iDmacDrvRegisterBufferRead = NULL;
int __stdcall _H_iDmacDrvRegisterBufferRead(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5);

typedef int(__stdcall *LPiDmacDrvRegisterBufferWrite)(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5);
static LPiDmacDrvRegisterBufferWrite __iDmacDrvRegisterBufferWrite = NULL;
int __stdcall _H_iDmacDrvRegisterBufferWrite(int a1, DWORD BytesReturned, LPVOID *lp, UINT_PTR ucb, LPVOID a5);

typedef int(__stdcall *LPiDmacDrvMemoryBufferWrite)(int a1, int a2, LPVOID lp, UINT_PTR ucb, LPVOID a5);
static LPiDmacDrvMemoryBufferWrite __iDmacDrvMemoryBufferWrite = NULL;
int __stdcall _H_iDmacDrvMemoryBufferWrite(int a1, int a2, LPVOID lp, UINT_PTR ucb, LPVOID a5);

typedef int(__stdcall *LPiDmacDrvMemoryBufferRead)(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5);
static LPiDmacDrvMemoryBufferRead __iDmacDrvMemoryBufferRead = NULL;
int __stdcall _H_iDmacDrvMemoryBufferRead(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5);

typedef int(__stdcall *LPiDmacDrvMemoryWriteExt)(int a1, int a2, int a3, LPVOID Src, rsize_t DstSize, LPVOID lp);
static LPiDmacDrvMemoryWriteExt __iDmacDrvMemoryWriteExt = NULL;
int __stdcall _H_iDmacDrvMemoryWriteExt(int a1, int a2, int a3, LPVOID Src, rsize_t DstSize, LPVOID lp);

typedef int(__stdcall *LPiDmacDrvMemoryReadExt)(int a1, DWORD BytesReturned, int a3, LPVOID lp, DWORD nOutBufferSize, LPVOID a6);
static LPiDmacDrvMemoryReadExt __iDmacDrvMemoryReadExt = NULL;
int __stdcall _H_iDmacDrvMemoryReadExt(int a1, DWORD BytesReturned, int a3, LPVOID lp, DWORD nOutBufferSize, LPVOID a6);

typedef int(__stdcall *LPiDmacDrvMemoryWrite)(int a1, DWORD BytesReturned, int a3, LPVOID lp);
static LPiDmacDrvMemoryWrite __iDmacDrvMemoryWrite = NULL;
int __stdcall _H_iDmacDrvMemoryWrite(int a1, DWORD BytesReturned, int a3, LPVOID lp);

typedef int(__stdcall *LPiDmacDrvMemoryRead)(int a1, DWORD BytesReturned, LPVOID lp, LPVOID a4);
static LPiDmacDrvMemoryRead __iDmacDrvMemoryRead = NULL;
int __stdcall _H_iDmacDrvMemoryRead(int a1, DWORD BytesReturned, LPVOID lp, LPVOID a4);

typedef int(__stdcall *LPiDmacDrvProgramDownload)();
static LPiDmacDrvProgramDownload __iDmacDrvProgramDownload = NULL;
int __stdcall _H_iDmacDrvProgramDownload();
