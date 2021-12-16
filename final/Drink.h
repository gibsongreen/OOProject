/** @file Drink.h

 *  @brief header file for the Drink class, which inherits from the Item class.

 *

 *  The drink list inherits from the abstract class item, and overrides
 *  accessor functions from the abstract class. Instances of drinks are 
 *  contained in the fridge, grocery list, and pantry classes.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#ifndef DRINK_H
#define DRINK_H
#include "Item.h"

// Drink class inherits from item class
class Drink : public Item
{
public:
	// default constructor
		/** @brief Drink default constructor prototype.

 *

 *

 */
	Drink();
	virtual ~Drink() {};
	Drink(const Drink&) = delete;
	Drink(Drink&&) = delete;
	Drink& operator=(const Drink&) = delete;
	Drink& operator=(Drink&&) = delete;

	/** @brief Drink overloaded constructor prototype.

*

*

*/
	Drink(string nanme, string q, string vw);

	/** @brief Get the weight/volume of the drink.

*

*  This function accesses the weight/volume of the drink instance.

*

*  @return "weight/volume" parameter 

*/
	auto getWeight_Volume()-> const string override;

	/** @brief Get the quantity of the item.

*

*  This function gets the quantity of the item and returns the int, using an accessor function.

*

*  @return returns the variable "quantity" of type string

*/
	 auto getQuantity()-> const string override;
	 /** @brief Get the name of the drink.

 *

 *  This function gets the name of the drink and returns the string using an accessor function.

 *

 *  @return returns the variable "name" of type string

 */
	auto getName()-> const string override;
};

#endif