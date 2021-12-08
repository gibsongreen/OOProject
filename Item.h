#pragma once
#include <iostream>
using namespace std;

class Item
{
public:
	string name;
	Item();
	Item(string name);
	string getName();
	void setName(string n);
};