#ifndef _READ_RESOLUTION_DISPLAY_H_
#define _READ_RESOLUTION_DISPLAY_H_

#include "stdafx.h"

using namespace std;

typedef enum {
	FULLSCREEN_NATIVE = 0,
	FULLSCREEN,
	FULLSCREEN_ROTATION_90,
	FULLSCREEN_ROTATION_180,
	FULLSCREEN_ROTATION_270,
	WINDOWED,
	WINDOWED_CENTER,
	WINDOWED_CENTER_ROTATION_90,
	WINDOWED_CENTER_ROTATION_180,
	WINDOWED_CENTER_ROTATION_270,
	WINDOWED_ROTATION_90,
	WINDOWED_ROTATION_180,
	WINDOWED_ROTATION_270
} CONFIG_RESOLUTION_ENUM;

class ResolutionDisplay
{
public:

	ResolutionDisplay();
	~ResolutionDisplay();
	const char* toString(CONFIG_RESOLUTION_ENUM i);
	CONFIG_RESOLUTION_ENUM toEnum(string i);


private:

	const char* configResolutionString[13] = {
			"FULLSCREEN_NATIVE",
			"FULLSCREEN",
			"FULLSCREEN_ROTATION_90",
			"FULLSCREEN_ROTATION_180",
			"FULLSCREEN_ROTATION_270",
			"WINDOWED",
			"WINDOWED_ROTATION_90",
			"WINDOWED_ROTATION_180",
			"WINDOWED_ROTATION_270"
			"WINDOWED_CENTER",
			"WINDOWED_CENTER_ROTATION_90",
			"WINDOWED_CENTER_ROTATION_180",
			"WINDOWED_CENTER_ROTATION_270"
	};

	map<std::string, CONFIG_RESOLUTION_ENUM>  mapStringEnum = {
	   {configResolutionString[0],  FULLSCREEN_NATIVE},
	   {configResolutionString[1],  FULLSCREEN },
	   {configResolutionString[2],  FULLSCREEN_ROTATION_90},
	   {configResolutionString[3],  FULLSCREEN_ROTATION_180},
	   {configResolutionString[4],  FULLSCREEN_ROTATION_270},
	   {configResolutionString[5],  WINDOWED},
	   {configResolutionString[6],  WINDOWED_ROTATION_90},
	   {configResolutionString[7],  WINDOWED_ROTATION_180},
	   {configResolutionString[8],  WINDOWED_ROTATION_270},
	   {configResolutionString[9],  WINDOWED_CENTER},
	   {configResolutionString[10], WINDOWED_CENTER_ROTATION_90},
	   {configResolutionString[11], WINDOWED_CENTER_ROTATION_180},
	   {configResolutionString[12], WINDOWED_CENTER_ROTATION_270 }
	};
	
};


#endif