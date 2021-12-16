/** @file Food.cpp

 *  @brief .cpp file for the Food class, which inherits from the item class.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#include "Food.h"

Food::Food()
{
	name = "food";
	quantity = "0";
	volume_weight = "0.0";
};

Food::Food(string n, string q, string vw)
{
	name = n;
	quantity = q;
	volume_weight = vw;
};
auto Food::getWeight_Volume() -> const string
{
	return volume_weight;
};

auto Food::getQuantity() -> const string
{
	return quantity;
};

auto Food::getName() -> const string
{
	return name;
};