#ifndef __CREATE_TASK_BAR_AUTO_H_
#define __CREATE_TASK_BAR_AUTO_H_

#include "stdafx.h"
#include <cstdint>

enum APP_BAR_STATE {
	AUTO_HIDE = 0x01,
	ON_TOP = 0x02
};

enum APP_BAR_MESSAGE
{
	NEW = 0x00,
	REMOVE = 0x01,
	QUERY_POS = 0x02,
	SET_POS = 0x03,
	GET_STATE = 0x04,
	GET_TASK_POS = 0x05,
	ACTIVATE = 0x06,
	GET_AUTO_HIDE_BAR = 0x07,
	SET_AUTO_HIDE_BAR = 0x08,
	WINDOWS_POS_CHANGED = 0x09,
	SET_STATE = 0x0a
};

class AutoTaskBar {


private :
	
	#if INTPTR_MAX == INT32_MAX
		#define WIN_TASKBAR "Shell_TrayWnd"
	#elif INTPTR_MAX == INT64_MAX
		#define WIN_TASKBAR "Button"
	#else
		#error "Environment not 32 or 64-bit."
	#endif

	const char* winTaskBar = WIN_TASKBAR;
	bool _valueHidden;

protected : 
	
	UINT_PTR _stdcall setTaskbarState(APP_BAR_STATE);
	
public:
	AutoTaskBar(bool);
	~AutoTaskBar();

	UINT_PTR _stdcall hide(void);
	UINT_PTR _stdcall autoShowTaskbar(void);
	APP_BAR_STATE _stdcall getTaskbarState();


};
#endif



#include "stdafx.h"

AutoTaskBar::AutoTaskBar(bool value) {
}

AutoTaskBar::~AutoTaskBar() {
	if (this)
		delete this;
}

UINT_PTR _stdcall AutoTaskBar::autoHideTaskbar() { return setTaskbarState(TASKBAR_AUTO_HIDE); }

UINT_PTR _stdcall AutoTaskBar::autoAutoTaskBar() { return setTaskbarState(TASKBAR_AUTO_TOP); }

UINT_PTR _stdcall AutoTaskBar::setTaskbarState(APP_BAR_STATE state)
{
	APPBARDATA msgData;
	msgData.cbSize = sizeof(msgData);
	msgData.hWnd = FindWindow("Shell_TrayWnd", NULL);
	if (msgData.hWnd == 0)
		msgData.hWnd = FindWindow("System_TrayWnd", NULL);
	if (msgData.hWnd == 0)
		msgData.hWnd = FindWindow("Button", NULL);
	msgData.lParam = state;
	return SHAppBarMessage(SET_STATE, &msgData);
}

APP_BAR_STATE _stdcall AutoTaskBar::getTaskbarState()
{
	APPBARDATA msgData;
	msgData.cbSize = sizeof(msgData);
	msgData.hWnd = FindWindow("Shell_TrayWnd", NULL);
	if (msgData.hWnd == 0)
		msgData.hWnd = FindWindow("System_TrayWnd", NULL);
	if (msgData.hWnd == 0)
		msgData.hWnd = FindWindow("Button", NULL);
	return (APP_BAR_STATE)SHAppBarMessage(GET_STATE, &msgData);
}