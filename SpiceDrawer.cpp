/** @file SpiceDrawer.cpp

 *  @brief .cpp file of Spice Drawer, which inherits from Container Class and can store food

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#include "SpiceDrawer.h"

SpiceDrawer::SpiceDrawer()
{
	name = "Spice Drawer";
};

void SpiceDrawer::printInventory()
{
	printFoodInventory();
};