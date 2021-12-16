/** @file CannedGoods.h

 *  @brief header file for the CannedGoods class, which inherits from the Container class.

 *

 *  The CannedGoods class inherits all member functions and attributes from the Container class
 *  The CannedGoods class only utilizes the Food class and foodList vector

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#ifndef CANNEDGOODS_H
#define CANNEDGOODS_H
#include "Container.h"

class CannedGoods : public Container
{
public:

	/** @brief CannedGoods default constructor prototype.

 *

 *

 */
	CannedGoods();

	/** @brief Print the inventory of the food list of the cannedgoods.

 *

 *  This function prints the food inventory of the cannedgoods instance.
 *  This function is overriden because cannedgoods only needs to print food items.
 *  If the cannedgoods does not contain a food, it will not print

 *  @return void

 */
	void printInventory() override;
};

#endif
