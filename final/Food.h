/** @file Food.h

 *  @brief header file for the Food class, which inherits from the Item class.

 *

 *  The food list inherits from the abstract class item, and overrides
 *  accessor functions from the abstract class. Instances of food are
 *  contained in the fridge, pantry, canned goods, spice drawer, grocery
	list, and freezer classes.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#ifndef FOOD_H
#define FOOD_H
#include "Item.h"

class Food : public Item
{
public:
	Food();
	Food(string name, string q, string vw);
	virtual ~Food() {};
	Food(const Food&) = delete;
	Food(Food&&) = delete;
	Food& operator=(const Food&) = delete;
	Food& operator=(Food&&) = delete;

	/** @brief Get the weight/volume of the food.

*

*  This function gets the weight/volume of the food and returns the string, using an accessor function.

*

*  @return returns the variable "weight/volume" of type string

*/
	auto getWeight_Volume()-> const string override;

	/** @brief Get the quantity of the item.

*

*  This function gets the quantity of the item and returns the int, using an accessor function.

*

*  @return returns the variable "quantity" of type string

*/
	auto getQuantity()-> const string override;
	/** @brief Get the name of the food.

*

*  This function gets the name of the food and returns the string, using an accessor function.

*

*  @return returns the variable "name" of type string

*/
	auto getName()-> const string override;
};

#endif