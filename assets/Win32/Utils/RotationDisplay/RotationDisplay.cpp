#include "stdafx.h"

using namespace std;

RotationDisplay::RotationDisplay() {
	LOGGER();
}

RotationDisplay::~RotationDisplay() {
	LOGGER();
	if (this)
		delete this;
}

bool _stdcall RotationDisplay::start(int angle) {
	LOGGER();

	if (angle < DMDO_DEFAULT || angle > DMDO_270)
		return false;

	DEVMODE dm;
	dm.dmSize = sizeof(DEVMODE);
	dm.dmDriverExtra = 1;

	if (!EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm))
		return false;

	if (DMDO_DEFAULT == angle)
		return true;

	auto temp = dm.dmPelsHeight;
	dm.dmPelsHeight = dm.dmPelsWidth;
	dm.dmPelsWidth = temp;

	dm.dmDisplayOrientation = angle;

	auto res = ChangeDisplaySettings(&dm, 0);
	//Sleep(3000);
	return  res == DISP_CHANGE_SUCCESSFUL;
}

bool _stdcall RotationDisplay::_DEFAULT() {
	return start(DMDO_DEFAULT);
}

bool _stdcall RotationDisplay::_90() {
	return start(DMDO_90);
}

bool _stdcall RotationDisplay::_180() {
	return start(DMDO_180);
}

bool _stdcall RotationDisplay::_270() {
	return start(DMDO_270);
}

bool _stdcall RotationDisplay::stop(int _angle) {
	LOGGER();

	if (_angle <= -1 || _angle >= 4 || _angle == 0)
		return false;

	if (DMDO_DEFAULT == _angle)
		return true;

	DEVMODE dm;
	dm.dmSize = sizeof(DEVMODE);
	dm.dmDriverExtra = 0;

	if (!EnumDisplaySettings(NULL, ENUM_CURRENT_SETTINGS, &dm))
		return false;

	auto temp = dm.dmPelsHeight;
	dm.dmPelsHeight = dm.dmPelsWidth;
	dm.dmPelsWidth = temp;
	dm.dmDisplayOrientation = DMDO_DEFAULT;
	ChangeDisplaySettings(&dm, 0);
	return true;
}

bool _stdcall RotationDisplay::stop() {
	return stop(DMDO_90);
}
