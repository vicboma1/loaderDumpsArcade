#include "stdafx.h" 
#include "MinimizeWindowsForeground.h"

using namespace std;

static bool isReady;
BOOL CALLBACK SendWMCloseMsg(HWND hwnd, LPARAM lParam)
{
	if (!IsWindowVisible(hwnd))
		return TRUE;

	char title[256];
	GetWindowTextA(hwnd, title, sizeof(title));
	if (*title == '\0')
		return TRUE;

	if (strstr(title, "D:\\") != NULL){
		isReady = true;
		ReleaseMutex(mutex);		
	}
	
	ShowWindow(hwnd, SW_MINIMIZE);

	return TRUE;
}

PreLoader::PreLoader() {
}

PreLoader::~PreLoader() {
	if (this)
		delete this;
}

bool PreLoader::execute() {
	try {
		mutex = CreateMutex(NULL, FALSE, NULL);
		DWORD res = WaitForSingleObject(mutex, 5000);
		while (!isReady && WAIT_OBJECT_0 == res) {
			EnumWindows(&SendWMCloseMsg, 0);
			Sleep(200);
		}

		CloseHandler(mutex);
		
		return true;
	}
	catch (...) {
		return false;
	}
}
