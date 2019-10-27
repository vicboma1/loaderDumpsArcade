#ifndef _MountVHD_DIR_H_
#define _MountVHD_DIR_H_

#include "stdafx.h"

class MountVHD {

	const char *PATH_BASE = "\\\\.\\";
	const char *HARD_DISK_D = "D:\\";

	bool pIsCreate;
	bool pIsOpen;

private:
	bool __stdcall isOpen(void);

public:

	bool pIsCheck;
	
	MountVHD();
	~MountVHD();
	bool __stdcall isCreate(void);
	bool __stdcall create(const char* param);
	bool __stdcall open(const char* param);
	bool __stdcall isCheck(void);
};
#endif