#pragma once
using namespace std;
#include <iostream>
#include <vector>
#include "Food.h"
#include "Drink.h"

class Container 
{
public:
	string name;
	Container();
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