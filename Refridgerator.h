#pragma once
#include "Container.h"

class Refridgerator : public Container
{
public:
	Refridgerator();

	int internal_temperature;
	int getInternalTemperature();
	void setInternalTemperature(int t);
	void changeInternalTemperature();
};