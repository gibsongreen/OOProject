/** @file CannedGoods.cpp

 *  @brief .cpp file for the Canned Goods class, which inherits from the Container class and holds Food objects.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#include "CannedGoods.h"

CannedGoods::CannedGoods()
{
	name = "Canned Goods";
};

void CannedGoods::printInventory()
{
	printFoodInventory();
};