#include "Container.h"
using namespace std;
#include <iostream>
#include <fstream>
#include <string>

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

void Container::addFood()
{
		Food* food = new Food();
		cout << "Enter the name of the food: " << endl;
		string foodname;
		cin >> foodname;

		food->setName(foodname);
		foodList.push_back(food);
}

void Container::addFood(string text)
{
	Food* food = new Food();

	food->setName(text);
	foodList.push_back(food);
}

void Container::addMultipleFoods()
{
	addFood();

	cout << "Add another food item?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	int food_adder;
	cin >> food_adder;

	while (food_adder != 2)
	{
		if (food_adder == 1)
		{
			addFood();
		}
		else
		{
			cout << "Improper selection" << endl;
		}
		cout << "Add another food item?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> food_adder;
	}
}

void Container::removeFood()
{
	int food_selector;
	cout << "Select a drink based on the index" << endl;
	cin >> food_selector;
	if ((food_selector < 0) || (food_selector >= foodList.size()))
	{
		cout << "Select a food based on the index" << endl;
		cin >> food_selector;
	}
	foodList.erase(foodList.begin() + food_selector);

	if (foodList.size() == 0)
		cout << "There is no food here" << endl;
}

void Container::addDrink()
{
		Drink* drink = new Drink();
		cout << "Enter the name of the drink: " << endl;
		string drinkname;
		cin >> drinkname;
		drink->setName(drinkname);
		drinkList.push_back(drink);
}

void Container::addDrink(string text)
{
	Drink* drink = new Drink();

	drink->setName(text);
	drinkList.push_back(drink);
}

void Container::addMultipleDrinks()
{
	addDrink();
	int drink_adder;
	cout << "Add another drink?" << endl;
	cout << "1. Yes" << endl;
	cout << "2. No" << endl;
	cout << "Enter an integer:" << endl;

	while (!(cin >> drink_adder))
	{
		cin.clear();
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid input; please re-enter." << endl;
	}

	while (drink_adder != 2)
	{
		if (drink_adder == 1)
		{ 
			addDrink();
			cout << "Add another drink?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << "Enter an integer:" << endl;
		}
		else
		{
			cout << "Improper selection" << endl;
		}		
		while (!(cin >> drink_adder))
		{
			cout << "Add another drink?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cout << "Enter an integer:" << endl;
			cin.clear();
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
			cout << "Invalid input; please re-enter.\n";
		}
	}
}

void Container::removeDrink()
{
	int drink_selector;
	cout << "Select a drink based on the index" << endl;
	cin >> drink_selector;
	if ((drink_selector < 0) || (drink_selector >= drinkList.size()))
	{
		cout << "Select a drink based on the index" << endl;
		cin >> drink_selector;
	}
		drinkList.erase(drinkList.begin() + drink_selector);

	if (drinkList.size() == 0)
		cout << "There are no drinks here" << endl;
}

void Container::printInventory()
{

	if (foodList.size() > 0)
	{
		cout << "Food List:" << endl;
		for (int i = 0; i < foodList.size(); i++)
		{
			cout << i << "\t" << foodList[i]->name << endl;
		}
	}
	if (drinkList.size() > 0)
	{
		cout << "Drink List:" << endl;
		for (int i = 0; i < drinkList.size(); i++)
		{
			cout << i << "\t" << drinkList[i]->name << endl;
		}
	}
}
void Container::printFoodInventory()
{

	if (foodList.size() > 0)
	{
		cout << "Food List:" << endl;
		for (int i = 0; i < foodList.size(); i++)
		{
			cout << i << "\t" << foodList[i]->name << endl;
		}
	}
}
void Container::printDrinkInventory()
{
	if (drinkList.size() > 0)
	{
		cout << "Drink List:" << endl;
		for (int i = 0; i < drinkList.size(); i++)
		{
			cout << i << "\t" << drinkList[i]->name << endl;
		}
	}
}

void Container::saveContainerFile()
{
	if (foodList.size() != 0)
	{
		ofstream file_object;
		string file_name = name + "_food_list" + ".txt";
		//clear previous data of file
		ofstream file(file_name);
		// creates file in append mode
		// source: https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
		file_object.open(file_name, ios::app);
		for (int i = 0; i < foodList.size(); i++)
		{
			file_object << foodList[i]->name << endl;
		}
		file_object.close();
	}
	if (drinkList.size() != 0)
	{
		ofstream file_object;
		string file_name = name + "_drink_list" + ".txt";
		//clear previous data of file
		ofstream file(file_name);
		// creates file in append mode
		// source: https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
		file_object.open(file_name, ios::app);
		for (int i = 0; i < drinkList.size(); i++)
		{
			file_object << drinkList[i]->name << endl;
		}
		file_object.close();
	}
}

void Container::readContainerFile()
{
	ifstream file_object;
	string file_name = name + "_food_list" + ".txt";
	// Opening file in input mode
	file_object.open(file_name, ios::in);
	string text;
	while (getline(file_object, text))
	{
		addFood(text);
	}
	file_object.close();

	file_name = name + "_drink_list" + ".txt";
	// Opening file in input mode
	file_object.open(file_name, ios::in);
	while (getline(file_object, text))
	{
		addDrink(text);
	}
	file_object.close();

}
