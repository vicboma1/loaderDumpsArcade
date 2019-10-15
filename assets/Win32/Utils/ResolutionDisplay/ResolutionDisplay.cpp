#include "stdafx.h"

using namespace std;

ResolutionDisplay::ResolutionDisplay() {
	LOGGER();
}

ResolutionDisplay::~ResolutionDisplay() {
	LOGGER();
	if (this)
		free(this);
}

const char* ResolutionDisplay::toString(CONFIG_RESOLUTION_ENUM i) {
	LOGGER();
	return configResolutionString[i];
}

CONFIG_RESOLUTION_ENUM ResolutionDisplay::toEnum (string i) {
	LOGGER();
	return mapStringEnum[i];
}