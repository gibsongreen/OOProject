/** @file Item.h

 *  @brief header file for the Item abstract class, instances of items are contained in containers.

 *

 *  The Item class is an abstract class that provides an interface for the Food and Drink classes.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */

/*
LO3. Correctly reason about control flow in a program using dynamic dispatch.
The program using the abstract class item, the getter functions for name, quantity,
and weight/volume are determined by the compiler at run time for the instances 
created by the inherited virtual functions, these functions are overriden in said
classes, and so the compiler will use dynamic dispatch at runtime to determine
which approriate get function should be called

LO6. Use object-oriented encapsulation mechanisms such as interfaces and private members.
"An interface describes the behavior or capabilities of a C++ class without committing to a 
particular implementation of that class."
source: https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm
	An interface is implemented by using the abstract class Item, which is a class that 
	provides an appropriate base class from which the Food and Drink class can inherit from
	- The item class is never instantiated as an object, thus serving as an interface
*/
#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
using namespace std;

class Item
{
public:
	string name;
	string quantity;
	string volume_weight;

	/** @brief Item default constructor prototype.

*

*

*/
	Item();
	Item(string name);
	virtual ~Item() = default;
	Item(const Item&) = delete;
	Item(Item&&) = delete;
	Item& operator=(const Item&) = delete;
	Item& operator=(Item&&) = delete;
	/** @brief Item overloaded constructor prototype.

*

*

*/
	/** @brief Get the name of the item.

*

*  This function gets the name of the item and returns the string, using an accessor function.

*

*  @return returns the variable "name" of type string

*/
	virtual auto getName()->const string = 0;
	/** @brief Set the name of the item.

*

*  This function allows the name variable to be set using a mutator function.

*

*  @param "name" parameter of type string describing the name of the container

*  @return void

*/
	void setName(string n);
	/** @brief Change the name of the Item instance.

*

*  This function allows the user to change the name of the item
*  instance. The item name will print and the user will be prompted to enter
*  a new name.

*

*  @return void

*/
	virtual void changeName();
	/** @brief Get the quantity of the item.

*

*  This function gets the quantity of the item and returns the int, using an accessor function.

*

*  @return returns the variable "quantity" of type int

*/
	virtual auto getQuantity()->const string = 0;
	/** @brief Set the quantity of the item.

*

*  This function allows the quantity variable to be set using a mutator function.

*

*  @param "quantity" parameter of type string describing the name of the container

*  @return void

*/
	void setQuantity(string q);
	/** @brief Get the weight/volume of the item.

*

*  This function gets the weight/volume of the item and returns the double, using an accessor function.

*

*  @return returns the variable "weight/volume" of type double

*/
	virtual auto getWeight_Volume()-> const string  = 0;
	// pure virtual function
	/** @brief Set the weight/volume of the item.

*

*  This function allows the name weight/volume to be set using a mutator function.

*

*  @param "weight/volume" parameter of type string describing the name of the container

*  @return void

*/
	void setWeight_Volume(string v_w);
};
#endif