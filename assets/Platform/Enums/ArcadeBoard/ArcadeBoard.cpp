#include "stdafx.h"

ArcadeBoard::ArcadeBoard() {
	LOG_API();
}

ArcadeBoard::~ArcadeBoard() {
	LOG_API();
}

const char* ArcadeBoard::toString(CONFIG_ARCADE_BOARD_ENUM i) {
	LOG_API();
	return CONFIG_ARCADE_BOARD_ENUM_STRING[i];
}

CONFIG_ARCADE_BOARD_ENUM ArcadeBoard::toEnum(string i) {
	return mapStringEnum[i];
}

void ArcadeBoard::set(CONFIG_ARCADE_BOARD_ENUM i) {
	LOG_API_NL();
	logger("%s /n",toString(i));
	_enum = i;
}

CONFIG_ARCADE_BOARD_ENUM ArcadeBoard::get() {
	return _enum;
}