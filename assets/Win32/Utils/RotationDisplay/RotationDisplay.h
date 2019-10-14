#ifndef _ROTATION_DISPLAY_H_
#define _ROTATION_DISPLAY_H_

#include "stdafx.h"

class RotationDisplay {

private :
	bool start(int rotate);
	bool stop(int rotate);

public:

	RotationDisplay();
	~RotationDisplay();

	bool _DEFAULT();
	bool _90();
	bool _180();
	bool _270();
	bool stop();
};

#endif