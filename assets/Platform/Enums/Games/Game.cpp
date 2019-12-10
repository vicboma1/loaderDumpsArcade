#include "stdafx.h"

//refactor https://github.com/vicboma1/loaderDumpsArcade/issues/45
Game::Game() {
	LOG_API();
}

Game::~Game() {
	LOG_API();
	//if (this)
	//	delete this;
}

const char* Game::toString(CONFIG_GAME_ENUM i) {
	LOG_API();
	return CONFIG_GAME_ENUM_STRING[i];
}

CONFIG_GAME_ENUM Game::toEnum(string i) {
	LOG_API();
	return mapStringEnum[i];
}
