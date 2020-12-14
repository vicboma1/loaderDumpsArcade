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
    GAME(RASTAN_SAGA)		\
    GAME(SPACE_INVADERS)        \
    GAME(SHIKIGAME_NO_SHIRO_III)\
    GAME(BATTLE_FANTASIA)       \
    GAME(POWER_SPIRIT_5)        \
    GAME(KOF_XII)               \
    GAME(DAEMON_BRIDE)		\
    GAME(RAIDEN_III_NESICA)	\
    GAME(RAIDEN_III_EXPORT)     \
    GAME(DRAGON_DANCE)          \
    GAME(BLAZBLUE_CALAMITY)	\
    GAME(BLAZBLUE_CONTINUUM_SHIFT_1) \
    GAME(ARCANA_HEART_2_V2_1)        \
    GAME(ARCANA_HEART_3)	     \
    GAME(BLAZBLUE_CONTINUUM_SHIFT_2) \
    GAME(STREET_FIGHTER_IV)	     \
    GAME(SUPER_STREET_FIGHTER_IV_V1_NESYS) \
    GAME(KOF_MAXIMUM_IMPACT_REGULATION_A)  \
    GAME(SUPER_STREET_FIGHTER_IV_V1_STANDALONE) 

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


};


#endif
