#ifndef _GAMES_H_
#define _GAMES_H_

#include "stdafx.h"
#include "Macros.h"

#define FOREACH_GAME(GAME)  	\
    GAME(HOMURA)   		\
    GAME(RAIDEN_III)		\
    GAME(RAIDEN_IV)		\
    GAME(TROUBLE_WITCHES)	\
    GAME(CHAOS_BREAKER)         \
    GAME(GIGA_WINGS)		\
    GAME(TGM3)			\
    GAME(SPICA_ADVENTURE)	\
    GAME(ELEVATOR)		\
    GAME(RASTAN_SAGA)
 

enum CONFIG_GAME_ENUM {
	FOREACH_GAME(GENERATE_ENUM)
};

static const char *CONFIG_GAME_ENUM_STRING[] = {
	FOREACH_GAME(GENERATE_STRING)
};



class Game
{
public:

	Game();
	~Game();
	const char* toString(CONFIG_GAME_ENUM i);
	CONFIG_GAME_ENUM toEnum(string i);


private:

	map<string, CONFIG_GAME_ENUM>  mapStringEnum = {
	   { CONFIG_GAME_ENUM_STRING[0], HOMURA},
	   { CONFIG_GAME_ENUM_STRING[1], RAIDEN_III},
	   { CONFIG_GAME_ENUM_STRING[2], RAIDEN_IV},
	   { CONFIG_GAME_ENUM_STRING[3], TROUBLE_WITCHES},
	   { CONFIG_GAME_ENUM_STRING[4], CHAOS_BREAKER},
	   { CONFIG_GAME_ENUM_STRING[5], GIGA_WINGS},
	   { CONFIG_GAME_ENUM_STRING[6], TGM3},
	   { CONFIG_GAME_ENUM_STRING[7], SPICA_ADVENTURE},
	   { CONFIG_GAME_ENUM_STRING[8], ELEVATOR},
	   { CONFIG_GAME_ENUM_STRING[9], RASTAN_SAGA }
	};
};


#endif
