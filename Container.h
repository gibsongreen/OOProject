#pragma once
using namespace std;
#include <iostream>

class Container 
{
public:
	string name;
	Container();
	Container(string name);
	string getName();
	void setName(string name);
};