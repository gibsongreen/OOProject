#pragma once
#include "Refridgerator.h"

class Freezer : public Refridgerator
{
public:
	Freezer();
	void changeInternalTemperature();
};
