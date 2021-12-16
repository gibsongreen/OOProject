/** @file Refridgerator.cpp

 *  @brief .cpp file for the Refridgerator class, which inherits from the Container class.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#include "Refridgerator.h"

Refridgerator::Refridgerator()
{
    constexpr int internal_temp = 35;
    internal_temperature = internal_temp;
    name = "Refridgerator";
};

auto Refridgerator::getInternalTemperature() const noexcept -> int
{
    return internal_temperature;
};

void Refridgerator::setInternalTemperature(int t) noexcept
{
    internal_temperature = t;
};

void Refridgerator::changeInternalTemperature()
{
    cout << "Current internal temperature of fridge: " << getInternalTemperature() << endl;
    cout << "Enter desired new internal temperature of fridge: " << endl;

    int newTemp = 0;
    try
    {
        cin >> newTemp;
        constexpr int low = 32;
        constexpr int high = 45;

        if ((newTemp < low) || (newTemp > high))
        {
            cout << "Temperature range of fridge is 32-45, retry selection" << endl;
            cin >> newTemp;
        }
    }
    catch (const invalid_argument& e)
    {
        cout << e.what() << endl;
    }
    internal_temperature = newTemp;
    cout << "The internal temperature is set to: " << internal_temperature << endl;
};