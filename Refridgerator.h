#pragma once
#include "Container.h"

class Refridgerator : public Container
{
public:
	int internal_temperature;
	Refridgerator();
	int getInternalTemperature();
	void setInternalTemperature(int t);
};