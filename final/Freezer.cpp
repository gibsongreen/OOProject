/** @file Freezer.cpp

 *  @brief .cpp file of Freezer, which inherits from Refriderator Class and can store food.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#include "Freezer.h"

Freezer::Freezer()
{
    internal_temperature = 0;
    name = "Freezer";
};

void Freezer::changeInternalTemperature()
{
    cout << "Current internal temperature of freezer: " << getInternalTemperature() << endl;
    cout << "Enter desired new internal temperature of freezer: " << endl;

    int newTemp = 0;
    constexpr int low = -5;
    constexpr int high = 31;
    try
    {
        cin >> newTemp;
        if ((newTemp < low) || (newTemp > high))
        {
            cout << "Temperature range of fridge is -5-31, retry selection" << endl;
            cin >> newTemp;
        }
    }
    catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    internal_temperature = newTemp;
    cout << "The internal temperature is set to: " << internal_temperature << endl;
};

void Freezer::printInventory()
{
    printFoodInventory();
};