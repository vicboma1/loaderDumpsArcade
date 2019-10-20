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

	if (strstr(title, "D:\\") != NULL)
		isReady = true;

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

		while (!isReady ) {
			EnumWindows(&SendWMCloseMsg, NULL);
			Sleep(200);
		}

		return true;
	}
	catch (...) {
		return false;
	}
}
