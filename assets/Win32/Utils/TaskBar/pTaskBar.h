#ifndef _SHOW_TASKBAR_H_
#define _SHOW_TASKBAR_H_

#include "stdafx.h"

class PShowTaskBar {

private :
	bool _valueHidden;

public:
	PShowTaskBar(bool);
	~PShowTaskBar();

	void __stdcall show(void);
	bool __stdcall isHidden(void);
	void __stdcall hidden(void);
};
#endif