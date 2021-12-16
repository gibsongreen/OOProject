/** @file Container.cpp

 *  @brief .cpp file for the Container class, instance of Kitchen holds containers.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Container.h"


Container::Container(string n)
{
	name = n;
};

auto Container::getName() const -> ret_type
{
	return name;
};

void Container::setName(string n)
{
	name = n;
};

void Container::addFood()
{
	cout << "Enter the name of the food: " << endl;
	string food_name;
	cin >> food_name;
	cout << "Enter the quantity of the food: " << endl;
	string food_quantity;
	cin >> food_quantity;
	cout << "Enter the volume/weight of the food: " << endl;
	string food_vw;
	cin >> food_vw;

	auto* food = new Food(food_name, food_quantity, food_vw);
	foodList.push_back(food);
};

void Container::addFood(string text, string q, string vw)
{
	auto* food = new Food(text, q, vw);
	foodList.push_back(food);
};

void Container::addMultipleFoods()
{
	unsigned int food_adder = 0;
	do
	{
		addFood();
		cout << "Add another food item?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> food_adder;

	} while (food_adder != 2);
};

// LO7. Define and use iterators and other operations on aggregates, including operations that take functions as arguments.
/*
 An iterator is an object (like a pointer) that points to an element inside the container.
 Iterators play a critical role in connecting algorithm with containers along with the manipulation of data stored inside the containers.
 source: https://www.geeksforgeeks.org/introduction-iterators-c/

 The vector container utilizes a random-access iterator,can randomly access any element inside the container

 Throughout the removeFood method, the iterator foodList.begin() is called to access the first
 element in the vector list, and since it is random access, we can erase the element
 */
void Container::removeFood()
{
	cout << "Select a drink based on the index" << endl;
	int food_selector = 0;
	cin >> food_selector;
	if (!foodList.empty())
	{
		cout << "Select a food based on the index" << endl;
		cin >> food_selector;
	}
	foodList.erase(foodList.begin() + food_selector);

	if (foodList.empty())
	{
		cout << "There is no food here" << endl;
	}
};

void Container::addDrink()
{
	cout << "Enter the name of the drink: " << endl;
	std::string drinkname;
	cin >> drinkname;
	cout << "Enter the quantity of the drink: " << endl;
	std::string drinkquantity;
	cin >> drinkquantity;
	cout << "Enter the volume/weight of the drink: " << endl;
	std::string drinkvw;
	cin >> drinkvw;

	auto* drink = new Drink(drinkname,drinkquantity,drinkvw);
	drinkList.push_back(drink);
};

void Container::addDrink(string text, string q, string vw)
{
	auto* drink = new Drink(text, q, vw);
	drinkList.push_back(drink);
};

void Container::addMultipleDrinks()
{
	unsigned int drink_adder = 0;
	do
	{
		addDrink();
		cout << "Add another drink item?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> drink_adder;

	} while (drink_adder != 2);
};

void Container::removeDrink()
{
	if (drinkList.empty())
	{
		cout << "There are no drinks here" << endl;
	}

	int drink_selector = 0;
	cout << "Select a drink based on the index" << endl;
	cin >> drink_selector;
	if (!drinkList.empty())
	{
		cout << "Select a drink based on the index" << endl;
		cin >> drink_selector;
	}
	//drinkList.at(drink_selector)->name = "string";
	drinkList.erase(drinkList.begin() + drink_selector);
};

void Container::printInventory()
{
	if (!foodList.empty())
	{
		cout << "Food List:" << endl;
		for (unsigned int i = 0; i < foodList.size(); i++)
		{
			cout << i << "\t" << foodList[i]->name << ", q = " << foodList[i]->quantity << ", vw = " << foodList[i]->volume_weight << endl;
		}
	}
	if (!drinkList.empty())
	{
		cout << "Drink List:" << endl;
		for (unsigned int i = 0; i < drinkList.size(); i++)
		{
			cout << i << "\t" << drinkList[i]->name << ", q = " << drinkList[i]->quantity << ", vw = " << drinkList[i]->volume_weight << endl;
		}
	}
};

void Container::printFoodInventory()
{

	if (!foodList.empty())
	{
		cout << "Food List:" << endl;
		for (unsigned int i = 0; i < foodList.size(); i++)
		{
			cout << i << "\t" << foodList[i]->name << ", q = " << foodList[i]->quantity << ", vw = " << foodList[i]->volume_weight << endl;
		}
	}
};

void Container::printDrinkInventory()
{
	if (!drinkList.empty())
	{
		cout << "Drink List:" << endl;
		for (unsigned int i = 0; i < drinkList.size(); i++)
		{
			cout << i << "\t" << drinkList[i]->name << ", quantity = " << drinkList[i]->quantity << ", volume/weight = " << drinkList[i]->volume_weight << endl;
		}
	}
};

void Container::saveContainerFile()
{
	if (!foodList.empty())
	{
		ofstream file_object;
		const string file_name = name + "_food_list" + ".txt";
		//clear previous data of file
		ofstream file(file_name);
		// creates file in append mode
		// source: https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
		file_object.open(file_name, ios::app);

		//modernized for loop, see original below
		for (auto& elem : foodList)
		{
			file_object << elem->name << "," << elem->quantity << "," << elem->volume_weight << endl;
		}
		file_object.close();
	}
	if (!drinkList.empty())
	{
		ofstream file_object;
		const string file_name = name + "_drink_list" + ".txt";
		//clear previous data of file
		ofstream file(file_name);
		// creates file in append mode
		// source: https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
		file_object.open(file_name, ios::app);

		// modernized for loop, see original below
		for (auto& elem : drinkList)
		{
			file_object << elem->name << "," << elem->quantity << "," << elem->volume_weight << endl;
		}
		file_object.close();
	}
};

void Container::readContainerFile()
{
	constexpr int zero = 0;
	constexpr int one = 1;
	constexpr int two = 2;

	ifstream file_object;
	string file_name = name + "_food_list" + ".txt";
	// Opening file in input mode
	file_object.open(file_name, ios::in);
	string text;
	while (getline(file_object, text))
	{
		stringstream ss(text);
		string word;
		vector <string> temp;
		while (getline(ss, word, ','))
		{
			temp.emplace_back(word);
		}
		addFood(temp[zero],temp[one],temp[two]);
	}
	file_object.close();

	file_name = name + "_drink_list" + ".txt";
	// Opening file in input mode
	file_object.open(file_name, ios::in);
	while (getline(file_object, text))
	{
		stringstream ss(text);
		string word;
		vector <string> temp;
		while (getline(ss, word, ','))
		{
			temp.emplace_back(word);
		}
		addDrink(temp[zero],temp[one],temp[two]);
	}
	file_object.close();
};