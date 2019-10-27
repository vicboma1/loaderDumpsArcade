#include "stdafx.h"
#include "MountVHD.h"
using namespace std;

MountVHD::MountVHD() {
	pIsOpen = false;
	pIsCreate = false;
	pIsCheck = false;
}

MountVHD::~MountVHD() {
	if (this)
		delete this;
}

bool __stdcall MountVHD::isCreate(void) {
	return pIsCreate;
}

bool __stdcall MountVHD::create(const char* param) {
	if (!isCheck() && !isOpen() && open(param))
			pIsCreate = true;
		
	return pIsCreate;
}

bool __stdcall MountVHD::isOpen(void) {
	return pIsOpen;
}

bool __stdcall MountVHD::isCheck(void) {
	
	if (pIsCheck)
		return pIsCheck;

	DWORD cchBuffer;
	CHAR* driveStrings;
	ULARGE_INTEGER freeSpace;

	cchBuffer = GetLogicalDriveStrings(0, NULL);
	driveStrings = (CHAR*)malloc((cchBuffer + 1) * sizeof(CHAR));
	if (driveStrings == NULL)
		return (pIsCheck = false);
 
	GetLogicalDriveStrings(cchBuffer, driveStrings);

	while (driveStrings != NULL && *driveStrings != '\0')
	{
		GetDiskFreeSpaceEx(driveStrings, &freeSpace, NULL, NULL);
		if (strstr(driveStrings, HARD_DISK_D) != NULL)
			return (pIsCheck = true);

		driveStrings += lstrlen(driveStrings) + 1;
	}
	
	return (pIsCheck = false);
}

bool __stdcall MountVHD::open(const char* param) {
	STARTUPINFO si;
	PROCESS_INFORMATION pi;

	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si);
	ZeroMemory(&pi, sizeof(pi)); 

	si.cb = sizeof(STARTUPINFO);
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	pIsOpen = CreateProcess( NULL, const_cast<LPSTR>(param), NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &si,&pi ) != 0;
	CloseHandle(pi.hThread);
	WaitForInputIdle(pi.hProcess, INFINITE);

	if (WaitForSingleObject(pi.hProcess, 2000) == WAIT_TIMEOUT)
	{
		if (WaitForSingleObject(pi.hProcess, 2000) == WAIT_TIMEOUT)
			TerminateProcess(pi.hProcess, 0);
	}

	CloseHandle(pi.hProcess);

	return pIsOpen;
}