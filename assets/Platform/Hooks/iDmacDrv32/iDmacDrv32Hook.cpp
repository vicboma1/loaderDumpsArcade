#include "stdafx.h"

int  __stdcall _H_iDmacDrvRegisterWrite(int deviceId, DWORD CommandCode, int unused, DWORD *DeviceResult) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (deviceId: %d | CommandCode: %08X | unused: %08X | DeviceResult: %08X)  -->  %08X\n", deviceId, CommandCode, unused, *(DWORD*)DeviceResult, 0);

	auto res = __iDmacDrvRegisterWrite(deviceId, CommandCode, unused, DeviceResult);
	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (deviceId: %d | CommandCode: %08X | unused: %08X | DeviceResult: %08X)  -->  %08X\n", deviceId, CommandCode, unused, *(DWORD*)DeviceResult, res);

	return res;
}

DWORD __stdcall _H_iDmacDrvOpen(int deviceId, LPVOID outBuffer, LPVOID lpSomeFlag) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (deviceId: %d | outBuffer: %08X | lpSomeFlag: %08X)  -->  %08X\n", deviceId, *(DWORD*)outBuffer, *(DWORD*)lpSomeFlag, 0);

	//Reverse engineering
	//*(DWORD *)outBuffer = -1;
	//*(DWORD *)lpSomeFlag = -1;

	auto res = __iDmacDrvOpen(deviceId, outBuffer, lpSomeFlag);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (deviceId: %d | outBuffer: %08X | lpSomeFlag: %08X)  -->  %08X\n", deviceId, *(DWORD*)outBuffer, *(DWORD*)lpSomeFlag, res);

	return res;
}

int __stdcall _H_iDmacDrvRegisterRead(int DeviceId, DWORD CommandCode, LPVOID OutBuffer, LPVOID DeviceResult) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (DeviceId: %d | CommandCode: %08X | OutBuffer: %08X | DeviceResult: %08X)  -->  %08X\n", DeviceId, CommandCode, *(DWORD*)OutBuffer, *(DWORD*)DeviceResult, 0);

	auto res = __iDmacDrvRegisterRead(DeviceId, CommandCode, OutBuffer, DeviceResult);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (DeviceId: %d | CommandCode: %08X | OutBuffer: %08X | DeviceResult: %08X)  -->  %08X\n", DeviceId, CommandCode, *(DWORD*)OutBuffer, *(DWORD*)DeviceResult, res);

	return res;
}

DWORD __stdcall _H_iDmacDrvClose(int deviceId, LPVOID lpWriteAccess) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (deviceId: %d | lpWriteAccess: %08X )  -->  %08X\n", deviceId, lpWriteAccess, 0);

	auto res = __iDmacDrvClose(deviceId, lpWriteAccess);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (deviceId: %d | lpWriteAccess: %08X )  -->  %08X\n", deviceId, lpWriteAccess, res);

	return res;
}

int __stdcall _H_iDmacDrvDmaRead(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (int: %d | lp: %08X | ucb: %d | a4: %08X )  -->  %08X\n", a1, lp, a4, 0);

	auto res = __iDmacDrvDmaRead(a1, lp, ucb, a4);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (int: %d | lp: %08X | ucb: %d | a4: %08X )  -->  %08X\n", a1, lp, a4, res);

	return res;
}

int __stdcall _H_iDmacDrvDmaWrite(int a1, LPVOID lp, UINT_PTR ucb, LPVOID a4) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (int: %d | lp: %08X | ucb: %d | a4: %08X )  -->  %08X\n", a1, lp, ucb, a4, 0);

	auto res = __iDmacDrvDmaWrite(a1, lp, ucb, a4);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (int: %d | lp: %08X | ucb: %d | a4: %08X )  -->  %08X\n", a1, lp, ucb, a4, res);

	return res;
}

int __stdcall _H_iDmacDrvRegisterBufferRead(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (int: %d | BytesReturned: %08X | lp: %08X | ucb: %d | a5: %08X )  -->  %08X\n", a1, BytesReturned, lp, ucb, a5, 0);

	auto res = __iDmacDrvRegisterBufferRead(a1, BytesReturned, lp, ucb, a5);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (int: %d | BytesReturned: %08X | lp: %08X | ucb: %d | a5: %08X )  -->  %08X\n", a1, BytesReturned, lp, ucb, a5, res);

	return res;
}

int __stdcall _H_iDmacDrvRegisterBufferWrite(int a1, DWORD BytesReturned, LPVOID *lp, UINT_PTR ucb, LPVOID a5) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (int: %d | BytesReturned: %08X | lp: %08X | ucb: %d | a5: %08X )  -->  %08X\n", a1, BytesReturned, lp, ucb, a5, 0);

	auto res = __iDmacDrvRegisterBufferWrite(a1, BytesReturned, lp, ucb, a5);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (int: %d | BytesReturned: %08X | lp: %08X | ucb: %d | a5: %08X )  -->  %08X\n", a1, BytesReturned, lp, ucb, a5, res);

	return res;
}

int __stdcall _H_iDmacDrvMemoryRead(int a1, DWORD BytesReturned, LPVOID lp, LPVOID a4) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (a1: %d | BytesReturned: %08X | lp: %08X | a4: %08X )  -->  %08X\n", a1, BytesReturned, lp, a4, 0);

	auto res = __iDmacDrvMemoryRead(a1, BytesReturned, lp, a4);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (a1: %d | BytesReturned: %08X | lp: %08X | a5: %08X )  -->  %08X\n", a1, BytesReturned, lp, a4, res);

	return res;
}

int __stdcall _H_iDmacDrvMemoryWrite(int a1, DWORD BytesReturned, int a3, LPVOID lp) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (a1: %d | BytesReturned: %08X | a3: %d | lp: %08X )  -->  %08X\n", a1, BytesReturned, a3, lp, 0);

	auto res = __iDmacDrvMemoryWrite(a1, BytesReturned, a3, lp);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (a1: %d | BytesReturned: %08X | lp: %08X | a5: %08X )  -->  %08X\n", a1, BytesReturned, a3, lp, res);

	return res;
}

int __stdcall _H_iDmacDrvMemoryReadExt(int a1, DWORD BytesReturned, int a3, LPVOID lp, DWORD nOutBufferSize, LPVOID a6) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (a1: %d | BytesReturned: %08X | a3: %d | lp: %08X | nOutBufferSize: %08X | a6:  %08X )  -->  %08X\n", a1, BytesReturned, a3, lp, nOutBufferSize, a6, 0);

	auto res = __iDmacDrvMemoryReadExt(a1, BytesReturned, a3, lp, nOutBufferSize, a6);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (a1: %d | BytesReturned: %08X | a3: %d | lp: %08X | nOutBufferSize: %08X | a6:  %08X )  -->  %08X\n", a1, BytesReturned, a3, lp, nOutBufferSize, a6, res);

	return res;
}

int __stdcall _H_iDmacDrvMemoryWriteExt(int a1, int a2, int a3, LPVOID Src, rsize_t DstSize, LPVOID lp) {
	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (a1: %d | a2: %d | a3: %d | Src: %08X | DstSize: %u | lp:  %08X )  -->  %08X\n", a1, a2, a3, Src, DstSize, lp, 0);

	auto res = __iDmacDrvMemoryWriteExt(a1, a2, a3, Src, DstSize, lp);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (a1: %d | a2: %d | a3: %d | Src: %08X | DstSize: %u | lp:  %08X )  -->  %08X\n", a1, a2, a3, Src, DstSize, lp, res);

	return res;
}

int __stdcall _H_iDmacDrvMemoryBufferRead(int a1, DWORD BytesReturned, LPVOID lp, UINT_PTR ucb, LPVOID a5) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (a1: %d | BytesReturned: %d | lp: %08X | ucb: %08X | a5: %08X )  -->  %08X\n", a1, BytesReturned, lp, ucb, a5, 0);

	auto res = __iDmacDrvMemoryBufferRead(a1, BytesReturned, lp, ucb, a5);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (a1: %d | BytesReturned: %d | lp: %08X | ucb: %08X | a5: %08X )  -->  %08X\n", a1, BytesReturned, lp, ucb, a5, res);

	return res;
}

int __stdcall _H_iDmacDrvMemoryBufferWrite(int a1, int a2, LPVOID lp, UINT_PTR ucb, LPVOID a5) {

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("    (a1: %d | a2: %d | lp: %08X | ucb: %08X | a5: %08X )  -->  %08X\n", a1, a2, lp, ucb, a5, 0);

	auto res = __iDmacDrvMemoryBufferWrite(a1, a2, lp, ucb, a5);

	LOG_NL_HOOK_FASTIO();
	loggerFastIO("*** (a1: %d | a2: %d | lp: %08X | ucb: %08X | a5: %08X )  -->  %08X\n", a1, a2, lp, ucb, a5, res);

	return res;
}
