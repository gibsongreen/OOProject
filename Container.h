#pragma once
using namespace std;
#include <iostream>
#include <vector>
#include "Food.h"
#include "Drink.h"

/*

LO1:
	Design and implement a class.

LO1a:
	At least one class in a header file with non-trivial methods implemented in a cpp file

LO2:
	Use subclassing to design simple class hierarchies that allow code to be reused for distinct subclasses.

LO2a:
	Include comments describing the visibility inheritance model
				Container is the grandparent class to
				/							\
		parent class Refridgerator		children classes pantry, canned good, spice drawer
			/
	child class Freezer

	- Container class contains name of container, the ability to add and remove items from the container
		the ability to print the inventory of the container, the ability to save the container object to 
		a text file, and the ability to read a text file and convert it into a container object
	- The refridgerator, pantry, canned goods and spice drawer inherit all fields and methods from container
	- the refridgerator adds methodology for temperature
	- the freezer inherits from the grandprarent class, container, and the parent class, refridgerator, with
		functionality changes
*/

class Container 
{
public:
	string name;
	//LO1c. Utilize an initialization list
	Container() : name{ "name" } {}
	//LO1a: Overload container constructor
	Container(string name);
	string getName();
	void setName(string name);

	vector <Food*> foodList;
	void addFood();
	void addFood(string text);
	void addMultipleFoods();
	void removeFood();

	vector <Drink*> drinkList;
	void addDrink();
	void addDrink(string text);
	void addMultipleDrinks();
	void removeDrink();

	void printInventory();
	void printFoodInventory();
	void printDrinkInventory();

	void saveContainerFile();
	void readContainerFile();
};
