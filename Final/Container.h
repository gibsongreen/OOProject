/** @file Container.h

 *  @brief header file for the Container class, instances of containers are stored an instance of the Kitchen class.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#ifndef CONTAINER_H
#define CONTAINER_H
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

LO5: 
	"A type B is a subtype of A if every function that can be invoked on an object of type A can also be 
	 invoked on an object of type B. Inheritance refers to reuse of implementations."
	 source: https://www.cmi.ac.in/~madhavan/courses/pl2009/lecturenotes/lecture-notes/node28.html#:~:text=Subtyping%20refers%20to%20compatibility%20of,refers%20to%20reuse%20of%20implementations.
	 Container Class = Base Class
	 Subtypes of Container Class = Refridgerator, Pantry
	 Inherited Classes with codesharing and overriding = CannedGoods, SpiceDrawer, Freezer
		- Subclass invoke every function of the container class
		- inherited classes use codesharing and overriding for reused implemenetation of the container class
	 */

class Container
{
public:
	string name;
	vector <Food*> foodList;
	//LO1c. Utilize an initialization list
		/** @brief Container default constructor prototype.

 *

 *

 */
	Container() : name{ "name" } {}
	//LO1a: Overload container constructor
		/** @brief Container overloaded constructor prototype.

 *

 *

 */
	Container(string name);
	/** @brief Get the name of the container.

 *

 *  This function returns the name of the container instance

 *

 *  @return returns the variable "name" of type string

 */
	virtual ~Container() {};
	Container(const Container&) = delete;
	Container(Container&&) = delete;
	Container& operator=(const Container&) = delete;
	Container& operator=(Container&&) = delete;

	typedef string ret_type;
	auto getName() const-> ret_type;
	/** @brief Set the name of the container.

 *

 *  This mutator function sets the value of the name variable 

 *

 *  @param "name" parameter of type string describing the name of the container

 *  @return void

 */
	virtual void setName(string name);

	/** @brief Add a food instance to the to the cotainers food list.

 *

 *  This function allows for the user to add a new food item instance to the 
 *  vector foodList, which is the vector list that stores food items in the container.
 *  The user will be prompted for the name of the food once the function is called.

 *

 *  @return void

 */
	void addFood();
	/** @brief Short description of function.

 *

 *  This function allows for the user to add a new food item instance to the
 *  vector foodList, which is the vector list that stores food items in the container.
 *  The input name of the food item should already be initialized prior to the function call.

 *

 *  @param parameter named "text" to add the name of the food, of type string

 *  @return void

 */
	void addFood(string text, string q, string vw);
	/** @brief Add multiple food instances to the container list.

 *

 *  This function allows for the user to add a new food item instance to the
 *  vector foodList, which is the vector list that stores food items in the container.
 *  The user will be prompted after adding a new food item instance if they would like
 *  to add another food item to the vector list.

 *

 *  @return void

 */
	void addMultipleFoods();
	/** @brief Remove an food item from the container's food list.

 *

 *  This function allows the user to remove a food item from the container.
 *  The inventory of the container will print along with its index number,
 *  and the user must enter the index number of the food item they wish to remove

 *

 *  @return void

 */
	void removeFood();

	vector <Drink*> drinkList;
	/** @brief Add a drink instance to the drink list of the container.

 *

 *  This function allows for the user to add a new drink item instance to the
 *  vector drinkList, which is the vector list that stores drink items in the container.
 *  The user will be prompted for the name of the drink once the function is called.

 *

 *  @return void

 */
	void addDrink();
	/** @brief Add a drink to the drink list of the container.
 *

 *  This function allows for the user to add a new drink item instance to the
 *  vector drinkList, which is the vector list that stores drink items in the container.
 *  The input name of the drink item should already be initialized prior to the function call.

 *

 *  @param parameter named "text" which is the name of the drink instance

 *  @return void

 */
	void addDrink(string text, string q, string vw);
	/** @brief Add multiple drinks to the drink list of the container.

 *

 *  This function allows for the user to add a new drink item instance to the
 *  vector drinkList, which is the vector list that stores drink items in the container.
 *  The user will be prompted after adding a new drink item instance if they would like
 *  to add another drink item to the vector list..

 *

 *  @return void

 */
	void addMultipleDrinks();
	/** @brief Remove a drink from the drink list of the container.

 *

 *  This function allows the user to remove a drink item from the container.
 *  The inventory of the container will print along with its index number,
 *  and the user must enter the index number of the drink item they wish to remove

 *  @return void

 */
	void removeDrink();
	
	//LO5.
	// OO Inheritance utilized, print inventory function overriden
	// in base classes CannedGoods, Freezer, and Spice Drawer
	// to print the inventory only the foodList inventory
	/** @brief Print the inventory of the food list & drink list of the container.

 *

 *  This function prints the entire inventory of the container instance.
 *  The food inventory will print first, followed by the drink inventory.
 *  If the container does not contain a food or a drink, the corresponding list
 *  will not print
 
 *  @return void

 */
	virtual void printInventory();
	/** @brief Print the inventory of the food list list of the container.

 *

 *  This function prints the inventory of the food list of the container. If 
 *  the food list is empty, it does not print.
 *

 *  @return void

 */
	void printFoodInventory();
	/** @brief Print the inventory of the drink list of the container.

 *

 *  This function prints the inventory of the drink list of the container. If
 *  the drink list is empty, it does not print.

 *

 *  @return void

 */
	void printDrinkInventory();

	/** @brief Save the inventory of the food and drink list to a text file.

 *

 *  This function allows the user to save the inventory of the container,
 *  both the food list and drink list, to a text file for the container. 
 *  The container file can then be read and edited by a returning user. 
 *  This function should only be called after editing the contents of the 
 *  inventory of the container.

 *

 *  @return void

 */
	void saveContainerFile();
	/** @brief Read the saved container file (for a return usering).

 *

 *  This function allows a returning user to read the inventory of the 
 *  container they are in. A returning user will then be able to access
 *  previous saved containers in their kitchen. 

 *

 *  @return void

 */
	void readContainerFile();
};
#endif