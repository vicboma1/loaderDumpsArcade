#ifndef _TASK_BAR_DIR_H_
#define _TASK_BAR_DIR_H_

#include "stdafx.h"
#include <cstdint>

class TaskBar {

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

public:
	TaskBar(bool);
	~TaskBar();

	void _stdcall show(void);
	bool _stdcall isHidden(void);
	void _stdcall hidden(void);
};
#endif
