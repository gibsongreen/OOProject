/** @file Pantry.cpp

 *  @brief .cpp file of Item, instances of items can be contained in containers.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#include "Item.h"

Item::Item()
{
	name = "name";
};

Item::Item(string n)
{
	name = n;
};

void Item::setName(string n)
{
	name = n;
};

void Item::changeName()
{
	cout << "Old name:" << getName() << endl;
	cout << "Enter a new name: ";
	std::string new_name;
	cin >> new_name;
	setName(new_name);
	cout << "New name is: " << getName() << endl;
};

void Item::setQuantity(string q)
{
	Item::quantity = q;
};

void Item::setWeight_Volume(string v_w)
{
	Item::volume_weight = v_w;
};