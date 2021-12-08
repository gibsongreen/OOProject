#include "Freezer.h"

Freezer::Freezer()
{
	internal_temperature = 0;
	name = "Freezer";
}
void Freezer::changeInternalTemperature()
{
    cout << "Current internal temperature of freezer: " << getInternalTemperature() << endl;
    cout << "Enter desired new internal temperature of freezer: " << endl;

    int newTemp;
    try
    {
        cin >> newTemp;
        if ((newTemp < -5) || (newTemp > 31))
        {
            cout << "Temperature range of fridge is -5-31, retry selection" << endl;
            cin >> newTemp;
        }
    }
    catch (invalid_argument& e) {
        cout << e.what() << endl;
    }
    internal_temperature = newTemp;
    cout << "The internal temperature is set to: " << internal_temperature << endl;
}