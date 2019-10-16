#include "stdafx.h"

using namespace std;

ResolutionDisplay::ResolutionDisplay() {
	LOGGER();
}

ResolutionDisplay::~ResolutionDisplay() {
	LOGGER();
	if (this)
		delete this;
}

CONFIG_RESOLUTION_ENUM ResolutionDisplay::toEnum (string i) {
	LOGGER();
	return mapStringEnum[i];
}
