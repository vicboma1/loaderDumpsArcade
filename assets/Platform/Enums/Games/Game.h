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
	const char* toString();
	CONFIG_GAME_ENUM toEnum();
	CONFIG_ARCADE_BOARD_ENUM arcadeBoard();


private:

	DataGame _dataGame;

	unordered_map<DWORD, DataGame>  mapDwordEnum = {
		{ 0xc42c8df4,  { SHIKIGAMI_NO_SHIRO_III,  	"SHIKIGAMI_NO_SHIRO_III",       "D3D8",  	    	  TAITO    } },
		{ 0x321d6953,  { CHAOS_BREAKER,     		"CHAOS_BREAKER",     		"D3D8",		    	  TAITO    } },
		{ 0x8ee841ff,  { GIGA_WING,         		"GIGA_WING",         		"D3D8",		    	  TAITO    } },
		{ 0x0008f1a7,  { HOMURA,            		"HOMURA",            		"D3D8",		    	  TAITO    } },	 
		{ 0x280d7655,  { RAIDEN_III,        		"RAIDEN_III",        		"D3D9",		    	  TAITO    } },
		{ 0x6c7ca734,  { RAIDEN_III_EXPORT, 		"RAIDEN_III_EXPORT", 		"D3D9",		    	  TAITO    } }, 
		{ 0x9db343f1,  { RAIDEN_IV,         		"RAIDEN_IV",         		"D3D9",			  TAITO    } },
		{ 0x4163a29c,  { RAIDEN_IV,         		"RAIDEN_IV",         		"D3D9",			  TAITO    } },
		{ 0x94017fb5,  { TGM3,              		"TGM3",              		"OPENGL32 - GLU", 	  TAITO    } },
		
		{ 0xe3d63201,  { TROUBLE_WITCHES,   		"TROUBLE_WITCHES",   		"D3D9",			  TAITO_2  } },
		{ 0xfec5e56a,  { SPICA_ADVENTURE,   		"SPICA_ADVENTURE",   		"D3D9",           	  TAITO_2  } },
		{ 0xce6433e1,  { BATTLE_FANTASIA,   		"BATTLE_FANTASIA",   		"D3D9",           	  TAITO_2  } },
		{ 0x6e9e0c44,  { POWER_SPIRIT_5,    		"POWER_SPIRIT_5",    		"D3D9",           	  TAITO_2  } },
		{ 0x3f838ba7,  { POWER_SPIRIT_5,    		"POWER_SPIRIT_5",    		"D3D9",           	  TAITO_2  } },
		{ 0xc69d8465,  { KOF_12,            		"KOF_12",            		"D3D9",           	  TAITO_2  } },
		{ 0x37f640aa,  { BLAZBLUE_CALAMITY, 		"BLAZBLUE_CALAMITY", 		"D3D9",           	  TAITO_2  } },
		{ 0x1963b7a2,  { BLAZBLUE_CALAMITY, 		"BLAZBLUE_CALAMITY", 		"D3D9",           	  TAITO_2  } },
		
		{ 0xe0485fed,  { BLAZBLUE_CONTINUUM_SHIFT_1, 	"BLAZBLUE_CONTINUUM_SHIFT_1", 	"D3D9", 		  TAITO_2  } },
		{ 0xa88783f6,  { BLAZBLUE_CONTINUUM_SHIFT_2, 	"BLAZBLUE_CONTINUUN_SHIFT_2", 	"D3D9",			  TAITO_2   } },
		{ 0x4c1fff8d,  { STREET_FIGHTER_IV,          	"STREET_FIGHTER_IV",          	"D3D9",			  TAITO_2   } },
		
		{ 0x8fc61e38,  { SUPER_STREET_FIGHTER_IV_V1_NESYS,        "SUPER_STREET_FIGHTER_IV_V1_NESYS",        "D3D9",	TAITO_2  } },
		{ 0xbc185b08,  { SUPER_STREET_FIGHTER_IV_V1_STANDALONE,   "SUPER_STREET_FIGHTER_IV_V1_STANDALONE",   "D3D9",	TAITO_2  } },
		
		//{ 0x6a8931af,  { ULTRA_STREET_FIGHTER_IV_DECRYPT,  "ULTRA_STREET_FIGHTER_IV_DECRYPT",    "D3D9",	  NESICA   } },
		//{ 0xc5735746,  { ULTRA_STREET_FIGHTER_IV_DECRYPT,  "ULTRA_STREET_FIGHTER_IV_DECRYPT",    "D3D9",	  NESICA   } },
		//{ 0x3bb88495,  { ULTRA_STREET_FIGHTER_IV_DECRYPT,  "ULTRA_STREET_FIGHTER_IV_DECRYPT",    "D3D9",	  NESICA   } },
		
		{ 0x1055fdbe,  { KOF_MAXIMUM_IMPACT_REGULATION_A,   "KOF_MAXIMUM_IMPACT_REGULATION_A",   "D3D8",	  TAITO_2   } },
		{ 0x005a8443,  { KOF_MAXIMUM_IMPACT_REGULATION_A,   "KOF_MAXIMUM_IMPACT_REGULATION_A",   "D3D8",	  TAITO_2   } },
		{ 0x7444d550,  { KOF_MAXIMUM_IMPACT_REGULATION_A,   "KOF_MAXIMUM_IMPACT_REGULATION_A",   "D3D8",	  TAITO_2   } },
		
		{ 0xddaf1ef8,  { RAIDEN_III_NESICA, 		"RAIDEN_III_NESICA", 			"D3D9 - NESICA",  NESICA   } },
		{ 0x315e2c2a,  { ELEVATOR,          		"ELEVATOR",          			"D3D9 - NESICA",  NESICA   } },
		{ 0xac25279f,  { RASTAN_SAGA,       		"RASTAN_SAGA",       			"D3D9 - NESICA",  NESICA   } },
		{ 0x65ff538b,  { SPACE_INVADER,     		"SPACE_INVADER",     			"D3D9 - NESICA",  NESICA   } },
		{ 0xbbf95368,  { DAEMON_BRIDE,      		"DAEMON_BRIDE",      			"D3D9 - NESICA",  NESICA   } },
		{ 0x9ffd623f,  { DAEMON_BRIDE,      		"DAEMON_BRIDE",      			"D3D9 - NESICA",  NESICA   } },
		{ 0x41915309,  { DRAGON_DANCE,      		"DRAGON_DANCE",      			"D3D9 - NESICA",  NESICA   } },
		{ 0xe35694ff,  { DRAGON_DANCE,      		"DRAGON_DANCE",      			"D3D9 - NESICA",  NESICA   } },
		{ 0xd15a98e6,  { ARCANA_HEART_2_1,  		"ARCANA_HEART_2_1",  			"D3D7 - NESICA",  NESICA   } },
		{ 0x9f5c3900,  { ARCANA_HEART_2_1,  		"ARCANA_HEART_2_1",  			"D3D7 - NESICA",  NESICA   } },
		{ 0x928f0cac,  { ARCANA_HEART_3,    		"ARCANA_HEART_3",    			"D3D9 - NESICA",  NESICA   } },
		{ 0x3cc927d0,  { ARCANA_HEART_3,    		"ARCANA_HEART_3",    			"D3D9 - NESICA",  NESICA   } }
	};

};


#endif
