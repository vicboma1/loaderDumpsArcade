#ifndef _SYSTEMS_H_
#define _SYSTEMS_H_

#include "stdafx.h"
#include "Macros.h"

#define FOREACH_ARCADE_BOARD(ARCADE_BOARD)  	\
    ARCADE_BOARD(NONE)				\
    ARCADE_BOARD(TAITO)   			\
    ARCADE_BOARD(NESICA)			

enum CONFIG_ARCADE_BOARD_ENUM {
	FOREACH_ARCADE_BOARD(GENERATE_ENUM)
};

static const char *CONFIG_ARCADE_BOARD_ENUM_STRING[] = {
	FOREACH_ARCADE_BOARD(GENERATE_STRING)
};

class ArcadeBoard
{
public:

	ArcadeBoard();
	~ArcadeBoard();
	const char* toString(CONFIG_ARCADE_BOARD_ENUM i);
	CONFIG_ARCADE_BOARD_ENUM toEnum(string i);
	void set(CONFIG_ARCADE_BOARD_ENUM i);
	CONFIG_ARCADE_BOARD_ENUM get();

private:

	CONFIG_ARCADE_BOARD_ENUM _enum;

	unordered_map<string, CONFIG_ARCADE_BOARD_ENUM>  mapStringEnum = {
	   { CONFIG_ARCADE_BOARD_ENUM_STRING[0], NONE},
	   { CONFIG_ARCADE_BOARD_ENUM_STRING[1], TAITO},
	   { CONFIG_ARCADE_BOARD_ENUM_STRING[2], NESICA}
	};
};


#endif
