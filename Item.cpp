#include "Item.h"

Item::Item()
{
	name = "name";
}
Item::Item(string n)
{
	name = n;
}
string Item::getName()
{
	return name;
}
void Item::setName(string n)
{
	name = n;
}