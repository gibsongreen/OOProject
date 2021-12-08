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
void Refridgerator::changeInternalTemperature()
{
	cout << "Current internal temperature of fridge: " << getInternalTemperature() << endl;
	cout << "Enter desired new internal temperature of fridge: " << endl;

    int newTemp;
    try
    {
        cin >> newTemp;
        if ((newTemp < 32) || (newTemp > 45))
        {
            cout << "Temperature range of fridge is 32-45, retry selection" << endl;
            cin >> newTemp;
        }
    }
    catch (invalid_argument& e) {
        cout << e.what() << endl;
    }
    internal_temperature = newTemp;
    cout << "The internal temperature is set to: " << internal_temperature << endl;
}