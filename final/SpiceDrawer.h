/** @file SpiceDrawer.h

 *  @brief header file for the Spice Drawer class, which inherits from the Container class.

 *

 * The spice drawer class inherits all fields and functions from the container class.
 * The spice drawer container is stored in the kitchen aggregator.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#ifndef SPICEDRAWER_H
#define SPICEDRAWER_H

#include "Container.h"

class SpiceDrawer : public Container
{
public:
	/** @brief SpiceDrawer default constructor prototype.

*

*

*/
	SpiceDrawer();
	/** @brief Print the inventory of the food list of the spice drawer.

*

*  This function prints the food inventory of the spice drawer instance.
*  This function is overriden because spice drawer only needs to print food items.
*  If the spice drawer does not contain a food, it will not print

*  @return void

*/
	void printInventory() override;
};

#endif