/** @file Refridgerator.h

 *  @brief header file for the Refridgerator class, which inherits from the Container class.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#ifndef REFRIDGERATOR_H
#define REFRIDGERATOR_H
#include "Container.h"

class Refridgerator : public Container
{
protected:
	int internal_temperature;
public:
	/** @brief Refridgerator default constructor prototype.

*

*

*/
	Refridgerator();
	/** @brief Refridgerator default destructor prototype.

*

*

*/

	
	/** @brief Get the internal temperature of the Refridgerator.

*

*  This function allows the user to get the internal temperature of the 
*  Refridgerator. The default constructor sets the value of the internal
*  temperature, use setInteralTemperature() to change the temperature. Function
*  is called when the fridge instance is "opened" by the user

*

*  @return Returns the internal temperature, of type int

*/
	auto getInternalTemperature() const noexcept -> int;

	/** @brief Set the internal temperature of the Refridgerator.

*

*  This function allows the user to set the internal temperature of the fridge
*  instance. The frige temperature will print and the user will be prompted to enter
*  a new temperature within a predetermined range.

*

*  @param parameter "t" of type int to set the internal temperature variable 

 
*  @return void

*/
	void setInternalTemperature(int t) noexcept;

	/** @brief Change the internal temperature of the Refridgerator.

*

*  This function allows the user to change the internal temperature of the fridge
*  instance. The frige temperature will print and the user will be prompted to enter
*  a new temperature within a predetermined range.

*

*  @return void

*/
	virtual void changeInternalTemperature();
/*
LO3.Correctly reason about control flow in a program using dynamic dispatch.
The compiler at runtime will decide if the above function or the derived
version of the function is the correct implementation. The freezer class 
overrides this function, however the fridge function implements this function.
At runtime the compiler must use dynamic dispatch to determine which version to use
*/
};

#endif