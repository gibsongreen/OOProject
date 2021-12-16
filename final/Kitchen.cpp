/** @file Kitchen.cpp

 *  @brief .cpp file of Kitchen, which contains Containers and inherited classes.

 *

 *  The kithcen file contains instances of a Refridgerator, Freezer, Pantry, Spice
 *  Drawer, Canned Goods, and Grocery List classes. The kitchen source file has 
 *  member functions for unloading the groceries.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */
#include "Kitchen.h"

Kitchen::Kitchen()
{
    cout << "This is the kitchen" << endl;
};

// LO7. Define and use iterators and other operations on aggregates, including operations that take functions as arguments.
/*
 An iterator is an object (like a pointer) that points to an element inside the container.
 Iterators play a critical role in connecting algorithm with containers along with the manipulation of data stored inside the containers.
 source: https://www.geeksforgeeks.org/introduction-iterators-c/

 The vector container utilizes a random-access iterator,can randomly access any element inside the container

 Throughout the unloadGroceries method, the iterator foodList.begin() is called to access the first 
 element in the vector list, and since it is random access, we can erase the element
 */

void Kitchen::unloadGroceries()
{
    constexpr int one = 1;
    constexpr int two = 2;
    constexpr int three = 3;
    constexpr int four = 4;
    constexpr int five = 5;

    while (Kitchen::grocerylist.foodList.empty())
    {
        cout << Kitchen::grocerylist.foodList.front() << endl;
        cout << "Where in the kitchen will this food item go?" << endl;
        cout << "1. Refridgerator" << endl;
        cout << "2. Freezer" << endl;
        cout << "3. Pantry" << endl;
        cout << "4. Spice Drawer" << endl;
        cout << "5. Canned Goods" << endl;

        unsigned int selection = 0;
        cin >> selection;
        if (selection == one)
        {
            fridge.foodList.push_back(Kitchen::grocerylist.foodList.front());
            Kitchen::grocerylist.foodList.erase(Kitchen::grocerylist.foodList.begin());
        }
        else if (selection == two)
        {
            freezer.foodList.push_back(Kitchen::grocerylist.foodList.front());
            grocerylist.foodList.erase(grocerylist.foodList.begin());
        }
        else if (selection == three)
        {
            pantry.foodList.push_back(Kitchen::grocerylist.foodList.front());
            grocerylist.foodList.erase(grocerylist.foodList.begin());
        }
        else if (selection == four)
        {
            spicedrawer.foodList.push_back(Kitchen::grocerylist.foodList.front());
            grocerylist.foodList.erase(grocerylist.foodList.begin());
        }
        else if (selection == five)
        {
            cannedgoods.foodList.push_back(Kitchen::grocerylist.foodList.front());
            grocerylist.foodList.erase(grocerylist.foodList.begin());
        }
        else
        {
            cout << "Improper selection" << endl;
        } 
    }
    while (Kitchen::grocerylist.drinkList.empty())
    {
        cout << Kitchen::grocerylist.drinkList.front() << endl;
        cout << "Where in the kitchen will this drink item go?" << endl;
        cout << "1. Refridgerator" << endl;
        cout << "2. Pantry" << endl;

        unsigned int selection = 0;
        cin >> selection;
        if (selection == one)
        {
            fridge.drinkList.push_back(Kitchen::grocerylist.drinkList.front());
            Kitchen::grocerylist.drinkList.erase(Kitchen::grocerylist.drinkList.begin());
        }
        else if (selection == two)
        {
            pantry.drinkList.push_back(Kitchen::grocerylist.drinkList.front());
            Kitchen::grocerylist.drinkList.erase(Kitchen::grocerylist.drinkList.begin());
        }
        else
        {
            cout << "Improper selection" << endl;
        }
    }
};

void Kitchen::unloadItem()
{
    constexpr int one = 1;
    constexpr int two = 2;
    constexpr int three = 3;
    constexpr int four = 4;
    constexpr int five = 5;

    cout << "Do you want to unload a food or drink item?" << endl;
    cout << "1. Food item" << endl;
    cout << "2. Drink item" << endl;
    cout << "3. Exit" << endl;

    unsigned int selection = 0;
    cin >> selection;

    if (selection == 1 && !grocerylist.foodList.empty())
    {
        // Food item
        grocerylist.printFoodInventory();
        cout << "Select which food item to remove by index" << endl;
        int index_selection = 0;
        cin >> index_selection;

        cout << "Where in the kitchen will this food item go?" << endl;
        cout << "1. Refridgerator" << endl;
        cout << "2. Freezer" << endl;
        cout << "3. Pantry" << endl;
        cout << "4. Spice Drawer" << endl;
        cout << "5. Canned Goods" << endl;
        cout << "6. Exit" << endl;

        int location_selection = 0;
        cin >> location_selection;
        if (location_selection == one)
        {
            fridge.foodList.push_back(Kitchen::grocerylist.foodList.at(index_selection));
            Kitchen::grocerylist.foodList.erase(Kitchen::grocerylist.foodList.begin() + index_selection);
            Kitchen::grocerylist.saveContainerFile();
            fridge.saveContainerFile();
        }
        else if (location_selection == two)
        {
            freezer.foodList.push_back(Kitchen::grocerylist.foodList.at(index_selection));
            grocerylist.foodList.erase(grocerylist.foodList.begin() + index_selection);
            Kitchen::grocerylist.saveContainerFile();
            freezer.saveContainerFile();
        }
        else if (location_selection == three)
        {
            pantry.foodList.push_back(Kitchen::grocerylist.foodList.at(index_selection));
            grocerylist.foodList.erase(grocerylist.foodList.begin() + index_selection);
            Kitchen::grocerylist.saveContainerFile();
            pantry.saveContainerFile();
        }
        else if (location_selection == four)
        {
            spicedrawer.foodList.push_back(Kitchen::grocerylist.foodList.at(index_selection));
            grocerylist.foodList.erase(grocerylist.foodList.begin() + index_selection);
            Kitchen::grocerylist.saveContainerFile();
            spicedrawer.saveContainerFile();
        }
        else if (location_selection == five)
        {
            cannedgoods.foodList.push_back(Kitchen::grocerylist.foodList.at(index_selection));
            grocerylist.foodList.erase(grocerylist.foodList.begin() + index_selection);
            Kitchen::grocerylist.saveContainerFile();
            cannedgoods.saveContainerFile();
        }
        else
        {
            cout << "Exited, food list possibly empty" << endl;
        }    
    }
    else if (selection == 2 && !grocerylist.drinkList.empty())
    {
        //Drink item
        grocerylist.printDrinkInventory();
        cout << "Select which drink item to remove by index" << endl;
        int index_selection = 0;
        cin >> index_selection;

        cout << "Where in the kitchen will this drink item go?" << endl;
        cout << "1. Refridgerator" << endl;
        cout << "2. Pantry" << endl;

        int selection = 0;
        cin >> selection;
        if (selection == one)
        {
            fridge.drinkList.push_back(Kitchen::grocerylist.drinkList.at(index_selection));
            Kitchen::grocerylist.drinkList.erase(Kitchen::grocerylist.drinkList.begin() + index_selection);
            Kitchen::grocerylist.saveContainerFile();
            fridge.saveContainerFile();
        }
        else if (selection == two)
        {
            pantry.drinkList.push_back(Kitchen::grocerylist.drinkList.at(index_selection));
            Kitchen::grocerylist.drinkList.erase(Kitchen::grocerylist.drinkList.begin() + index_selection);
            Kitchen::grocerylist.saveContainerFile();
            pantry.saveContainerFile();
        }
        else
        {
            cout << "Exited, drink list possibly empty" << endl;
        }
    }
    else
    {
        cout << "Exited from adding item" << endl;
    }
};

void Kitchen::unloadMultipleItems()
{
    unsigned int selector = 0;
    
    do {
        unloadItem();

        cout << "Add unload another item?" << endl;
        cout << "1. Yes" << endl;
        cout << "2. No" << endl;
        cin >> selector;
    } while (selector != 2);
};

// LO7. Define and use iterators and other operations on aggregates, including operations that take functions as arguments.
/*
The unload function takes void functions as arguments, these functions are passed to the unload function
by pointer, by passing its address to the unload function.
source: https://www.geeksforgeeks.org/passing-a-function-as-a-parameter-in-cpp/
*/
void Kitchen::unload(function<void()> func)
{
    func();
};