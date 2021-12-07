#include "Refridgerator.h"

Refridgerator::Refridgerator()
{
	internal_temperature = 35;
	name = "Refridgerator";
}
int Refridgerator::getInternalTemperature()
{
	return internal_temperature;
}
void Refridgerator::setInternalTemperature(int t)
{
	internal_temperature = t;
}