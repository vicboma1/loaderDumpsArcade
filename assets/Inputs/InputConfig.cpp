#include "stdafx.h"
//refactor https://github.com/vicboma1/loaderDumpsArcade/issues/45

InputConfig::InputConfig() {
	LOG_INPUT_API();
}

InputConfig::~InputConfig() {
	LOG_INPUT_API();
	//if (this)
	//	delete this;
}

INPUT_CONFIG_ENUM InputConfig::toEnum(std::string key){
	LOG_INPUT_API();
	return mapStringEnumInput[key];
}
