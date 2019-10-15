// TaskBar.cpp : Define las funciones exportadas de la aplicación DLL.
#include "stdafx.h"

using namespace std;

TaskBar::TaskBar(bool value) {
	LOGGER();
	_valueHidden = value;
}

TaskBar::~TaskBar() {
	LOGGER();
	if(this)
		free(this);
}

void _stdcall TaskBar(HWND handle, bool status) {
	if (handle == NULL)
		return;
	
	ShowWindow(handle, status ? SW_SHOW : SW_HIDE);
	UpdateWindow(handle);
}

void _stdcall TaskBar(LPCSTR name, bool status) {
	ShowTaskBar(FindWindow(name, NULL), status);
}

void _stdcall TaskBar::show(void) {
	_ShowTaskBar(_T(winTaskBar), true);
}

void _stdcall TaskBar::hidden(void) {
	_ShowTaskBar(_T(winTaskBar), false);
}

bool _stdcall TaskBar::isHidden() {
	return _valueHidden;
}
