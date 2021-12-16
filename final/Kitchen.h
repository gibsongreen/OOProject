/** @file Kitchen.h

 *  @brief header file for the Kitchen class, which holds instances of containers.

 *

 *  The kithcen file contains instances of a Refridgerator, Freezer, Pantry, Spice
 *  Drawer, Canned Goods, and Grocery List classes. The kitchen source file has
 *  member functions for unloading the groceries.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#ifndef KITCHEN_H
#define KITCHEN_H
#include "Refridgerator.h"
#include "Freezer.h"
#include "Pantry.h"
#include "CannedGoods.h"
#include "SpiceDrawer.h"
#include "GroceryList.h"
#include <functional>

class Kitchen
{
public:
    /** @brief Kitchen default constructor prototype.

*

*

*/
    Kitchen();
    Refridgerator fridge;
    Freezer freezer;
    Pantry pantry;
    CannedGoods cannedgoods;
    SpiceDrawer spicedrawer;
    GroceryList grocerylist;

    /** @brief Unload the entire grocery list into the kitchen containers.

 *

 *  First, while the foodlist of the grocerylist isn't empty, food items are removed
 *  from the list and added to the kithcen container, then the same process is followed
 *  for the drink list.

 *

 *  @return void

 */
    void unloadGroceries();
    /** @brief Unload an item from the grocery list into a kitchen container.

 *

 *  The user is asked if they would like to remove a food or drink item from the 
 *  grocery list, then which item, and where they would like the item to go.

 *

 *  @return void

 */
    void unloadItem();
    /** @brief Unload multiple items from the grocery list into the kitchen containers.

 *

 *  The user is asked if they would like to remove a food or drink item from the 
 *  grocery list, then which item, and where they would like the item to go. This
 *  process is continued until the user no longer wants to unload items. 

 *

 *  @return void

 */
    void unloadMultipleItems();

    /** @brief Pass other unload functions as argument to call them.

*

*  A function is passes as an argument to the unload function by passing
*  its address to the unload function. Passing function by pointer.

*

*  @return void

*/
    void unload(function<void()> func);
};
#endif