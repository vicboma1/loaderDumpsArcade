#include "stdafx.h"
#include "AutoTaskBar.h"

//refactor: https://github.com/vicboma1/loaderDumpsArcade/issues/45

AutoTaskBar::AutoTaskBar(bool value) {

}

AutoTaskBar::~AutoTaskBar() {
	//if (this)
	//	delete this;
}

UINT_PTR _stdcall AutoTaskBar::autoHide() { return setTaskbarState(TASKBAR_AUTO_HIDE); }

UINT_PTR _stdcall AutoTaskBar::autoShow() { return setTaskbarState(TASKBAR_AUTO_TOP); }

UINT_PTR _stdcall AutoTaskBar::setTaskbarState(APP_BAR_STATE state)
{
	APPBARDATA msgData;
	msgData.cbSize = sizeof(msgData);
	msgData.hWnd = FindWindow(winTaskBar, NULL);
	msgData.lParam = state;
	return SHAppBarMessage(SET_STATE, &msgData);
}

APP_BAR_STATE _stdcall AutoTaskBar::getState()
{
	APPBARDATA msgData;
	msgData.cbSize = sizeof(msgData);
	msgData.hWnd = FindWindow(winTaskBar, NULL);
	return (APP_BAR_STATE)SHAppBarMessage(GET_STATE, &msgData);
}
