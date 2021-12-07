#include "Container.h"
using namespace std;
#include <iostream>

Container::Container()
	{
		name = "name";
	};
Container::Container(string n)
	{
		name = n;
	};
string Container::getName()
	{
		return name;
	};
void Container::setName(string n)
	{
		name = n;
	};