// PShowTaskBar.cpp : Define las funciones exportadas de la aplicación DLL.
//
#include "stdafx.h"
#include "pShowTaskBar.h"
#include <windows.h>

using namespace std;

PShowTaskBar::PShowTaskBar(bool value) {
	LOGGER();
	_valueHidden = value;
}

PShowTaskBar::~PShowTaskBar() {
	LOGGER();
}

void ShowTaskBar(HWND handle, bool status) {
	if (handle != NULL) {
		ShowWindow(handle, status ? SW_SHOW : SW_HIDE);
		UpdateWindow(handle);
	}
}

void _ShowTaskBar(LPCSTR name, bool status) {
	ShowTaskBar(FindWindow(name, NULL), status);
}

void _ShowTaskBar(bool show) {
	_ShowTaskBar(_T("Shell_TrayWnd"), show);
	_ShowTaskBar(_T("Button"), show);
}

void __stdcall PShowTaskBar::show(void) {
	LOG_API_NL();
	_ShowTaskBar(_T("Shell_TrayWnd"), true);
	_ShowTaskBar(_T("Button"), true);
}

void __stdcall PShowTaskBar::hidden(void) {
	LOG_API_NL();
	_ShowTaskBar(_T("Shell_TrayWnd"), false);
	_ShowTaskBar(_T("Button"), false);
}

bool __stdcall PShowTaskBar::isHidden() {
	return _valueHidden;
}