/** @file Drink.cpp

 *  @brief .cpp file for the Drink class, which inherits from the Item Class.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#include "Drink.h"

Drink::Drink()
{
	name = "drink";
	quantity = "0";
	volume_weight = "0.0";
};

Drink::Drink(string n, string q, string vw)
{
	name = n;
	quantity = q;
	volume_weight = vw;
};

auto Drink::getWeight_Volume() -> const string
{
	return volume_weight;
};

auto Drink::getQuantity() -> const string
{
	return quantity;
};

auto Drink::getName() -> const string
{
	return name;
};