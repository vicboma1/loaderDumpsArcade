#include "stdafx.h"

InputConfig::InputConfig() {
	LOG_INPUT_API();
}

InputConfig::~InputConfig() {
	LOG_INPUT_API();
	if (this)
		delete this;
}

INPUT_CONFIG_ENUM InputConfig::toEnum(std::string key){
	LOG_INPUT_API();
	return mapStringEnumInput[key];
}