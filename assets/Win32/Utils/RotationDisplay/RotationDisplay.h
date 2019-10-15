#ifndef _ROTATION_DISPLAY_H_
#define _ROTATION_DISPLAY_H_

#include "stdafx.h"

class RotationDisplay {

private :
	bool _stdcall start(int rotate);
	bool _stdcall stop(int rotate);

public:

	RotationDisplay();
	~RotationDisplay();

	bool _stdcall _DEFAULT();
	bool _stdcall _90();
	bool _stdcall _180();
	bool _stdcall _270();
	bool _stdcall stop();
};

#endif
