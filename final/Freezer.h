/** @file Freezer.h

 *  @brief header file for the Freezer class, which inherits from the Refridgerator class.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#ifndef FREEZER_H
#define FREEZER_H

#include "Refridgerator.h"

class Freezer : public Refridgerator
{
protected:

public:
	/** @brief Freezer default constructor prototype.

*

*

*/
	Freezer();
	/** @brief Change the internal temperature of the Freezer container.

*

*  This function allows the user to change the internal temperature of the
*  freezer instance. The freezer inherits changeInternalTemperature() from
*  the Refridgerator class, the freezer temperature will print and the user
*  will be prompted to enter a new internal temperature for the freezer to be
*  set to, within a predetermined range.

*

*  @return void

*/
	void changeInternalTemperature() override;

	/*
  LO3. Correctly reason about control flow in a program using dynamic dispatch. 
  Program at runtime selects which internal temperature to change, whether it be
  the freezer class internal temperature or the refridgerator internal temperature
	*/

	/** @brief Print the inventory of the food list of the freezer.

*

*  This function prints the food inventory of the freezer instance.
*  This function is overriden because freezer only needs to print food items.
*  If the freezer does not contain a food, it will not print

*  @return void

*/
	void printInventory() override;
};
#endif