/** @file Final.cpp

 *  @brief  This file contains the 'main' function. Program execution begins and ends there.

 *

 *  Longer description of file.

 *

 *  @author Gibson Green

 *  @bug No known bugs.

 */

/*********************************************************************************************/
/*  LO4.
        Include a comment in which you compare and contrast the procedural/functional approach and the object-oriented approach
* 
    Procedural programming uses a very detailed list of instructions to tell the computer what to do step by step.This approach
    uses iteration to repeat a series of steps as often as needed. Functional programming is an approach to problem solving that 
    treats every computation as a mathematical function source: https://study.com/academy/lesson/functional-programming-and-logic-programming.html#:~:text=Procedural%20programming%20uses%20a%20very,computation%20as%20a%20mathematical%20function.
    Object-oriented programming (OOP) is a computer programming model that organizes software design around data, or objects, rather than 
    functions and logic. An object can be defined as a data field that has unique attributes and behavior.
    Each distinct logic sequence is known as a method. source: https://searchapparchitecture.techtarget.com/definition/object-oriented-programming-OOP#:~:text=Object%2Doriented%20programming%20(OOP)%20is%20a%20computer%20programming%20model,has%20unique%20attributes%20and%20behavior.&text=Each%20distinct%20logic%20sequence%20is%20known%20as%20a%20method.
 */
 /*********************************************************************************************/

#include <iostream>
#include "Refridgerator.h"
#include "Kitchen.h"
#include "Food.h"
#include "Container.h"

void printMainMenu();
auto makeIntegerSelection() -> int;

constexpr int one = 1;
constexpr int two = 2;
constexpr int three = 3;
constexpr int four = 4;
constexpr int five = 5;
constexpr int six = 6;
constexpr int seven = 7;
constexpr int eight = 8;
constexpr int nine = 9;
constexpr int ten = 10;
constexpr int eleven = 11;

auto main() -> int
{
    // creates an instance of kitchen
    int menu_selection = 0;
    cout << "1. New User" << endl;
    cout << "2. Returning User" << endl;
    cin >> menu_selection;

    Kitchen kitchen;
    if (menu_selection == 2)
    {
        kitchen.fridge.readContainerFile();
        kitchen.freezer.readContainerFile();
        kitchen.pantry.readContainerFile();
        kitchen.cannedgoods.readContainerFile();
        kitchen.spicedrawer.readContainerFile();
        kitchen.grocerylist.readContainerFile();
    }
    
    // sets up menu selector and prints main menu
    printMainMenu();
    constexpr int main_menu_exitor_value = 9;
    
    // user give integer input to make menu selection
    menu_selection = makeIntegerSelection();
   
    //menu continues until exit code is 6 is inputted by user 
    while (menu_selection != main_menu_exitor_value)
    {
        // menu selection navigates program
        switch (menu_selection)
        {
        case one:
        {
            // Fridge Menu
            cout << "You are in the: " << kitchen.fridge.getName() << endl;
            cout << "The internal temperature is: " << kitchen.fridge.getInternalTemperature() << endl;
            cout << "Make a Menu Selection: " << endl;
            cout << "1. Change Internal Temperature " << endl;
            cout << "2. Add Food item" << endl;
            cout << "3. Add Multiple Food items" << endl;
            cout << "4. Remove Food item" << endl;
            cout << "5. Add Drink item" << endl;
            cout << "6. Add Multiple Drink items" << endl;
            cout << "7. Remove Drink item" << endl;
            cout << "8. Print Fridge Inventory" << endl;
            cout << "9. Print Food Inventory" << endl;
            cout << "10. Print Drink Inventory" << endl;
            cout << "11. Save Fridge Files" << endl;
            cout << "12. Exit" << endl;

            int menu_selection2 = 0;
            menu_selection2 = makeIntegerSelection();

            switch (menu_selection2)
            {
            case one:
                //change internal temperature of fridge
                kitchen.fridge.changeInternalTemperature();
                break;
            case two:
                //add food
                kitchen.fridge.addFood();
                break;
            case three:
                //add multiple foods
                kitchen.fridge.addMultipleFoods();
                break;
            case four:
                //remove food
                kitchen.fridge.printFoodInventory();
                kitchen.fridge.removeFood();
                break;
            case five:
                //add drink
                kitchen.fridge.addDrink();
                break;
            case six:
                //add multiple drinks
                kitchen.fridge.addMultipleDrinks();
                break;
            case seven:
                //remove drink
                kitchen.fridge.printDrinkInventory();
                kitchen.fridge.removeDrink();
                break;
            case eight:
                //print inventory
                kitchen.fridge.printInventory();
                break;
            case nine:
                //print food inventory
                kitchen.fridge.printFoodInventory();
                break;
            case ten:
                //print drink inventory
                kitchen.fridge.printDrinkInventory();
                break;
            case eleven:
                //print drink inventory
                kitchen.fridge.saveContainerFile();
                break;
            default:
                cout << "Improper Menu Selection." << endl;
            }
        }
        break;


        case two:
        {
            // Freezer Menu
            cout << "1. Change Freezer Internal Temperature " << endl;
            cout << "2. Add Freezer Food item" << endl;
            cout << "3. Add Multiple Freezer Food items" << endl;
            cout << "4. Remove Freezer Food item" << endl;
            cout << "5. Print Freezer Inventory" << endl;
            cout << "6. Save Freezer File" << endl;
            cout << "7. Exit" << endl;

            const int menu_selection3 = makeIntegerSelection();

            switch (menu_selection3)
            {
            case one:
                //change internal temperature of fridge
                kitchen.freezer.changeInternalTemperature();
                break;
            case two:
                //add food
                kitchen.freezer.addFood();
                break;
            case three:
                //add multiple foods
                kitchen.freezer.addMultipleFoods();
                break;
            case four:
                //remove food
                kitchen.freezer.printInventory();
                kitchen.freezer.removeFood();
                break;
            case five:
                //print inventory
                kitchen.freezer.printInventory();
            case six:
                //print drink inventory
                kitchen.freezer.saveContainerFile();
                break;
            default:
                cout << "Improper Menu Selection." << endl;
                break;
            }
        }
        break;

        case three:
        {
            // Pantry Menu
            cout << "You are in the: " << kitchen.pantry.getName() << endl;
            cout << "Make a Menu Selection: " << endl;
            cout << "1. Add Food item" << endl;
            cout << "2. Add Multiple Food items" << endl;
            cout << "3. Remove Food item" << endl;
            cout << "4. Add Drink item" << endl;
            cout << "5. Add Multiple Drink items" << endl;
            cout << "6. Remove Drink item" << endl;
            cout << "7. Print Inventory" << endl;
            cout << "8. Print Food Inventory" << endl;
            cout << "9. Print Drink Inventory" << endl;
            cout << "10. Save Pantry Files" << endl;
            cout << "11. Exit" << endl;

            const int menu_selection4 = makeIntegerSelection();

            switch (menu_selection4)
            {
            case one:
                //add food item
                kitchen.pantry.addFood();
                break;
            case two:
                //add multiple food items
                kitchen.pantry.addMultipleFoods();
                break;
            case three:
                //remove food item
                kitchen.pantry.printFoodInventory();
                kitchen.pantry.removeFood();
                break;
            case four:
                //add drink item
                kitchen.pantry.addDrink();
                break;
            case five:
                //add multiple drink items
                kitchen.pantry.addMultipleDrinks();
                break;
            case six:
                //remove drink item
                kitchen.pantry.printDrinkInventory();
                kitchen.pantry.removeDrink();
                break;
            case seven:
                //print inventory
                kitchen.pantry.printInventory();
                break;
            case eight:
                //print food inventory
                kitchen.pantry.printFoodInventory();
                break;
            case nine:
                //print drink inventory
                kitchen.pantry.printDrinkInventory();
                break;
            case ten:
                //print drink inventory
                kitchen.pantry.saveContainerFile();
                break;
            default:
                cout << "Improper Menu Selection." << endl;
            }
        }
        break;

        case four:
        {
            // Canned Goods Menu
            cout << "You are in the: " << kitchen.cannedgoods.getName() << endl;
            cout << "Make a Menu Selection: " << endl;
            cout << "1. Add Food item" << endl;
            cout << "2. Add Multiple Food items" << endl;
            cout << "3. Add Remove item" << endl;
            cout << "4. Print Inventory" << endl;
            cout << "5. Save Canned Goods File" << endl;
            cout << "6. Exit" << endl;

            const int menu_selection5 = makeIntegerSelection();

            switch (menu_selection5)
            {
            case one:
                //add food
                kitchen.cannedgoods.addFood();
                break;
            case two:
                //add multiple foods
                kitchen.cannedgoods.addMultipleFoods();
                break;
            case three:
                //remove canned goods food item
                kitchen.cannedgoods.printInventory();
                kitchen.cannedgoods.removeFood();
                break;
            case four:
                //print inventory
                kitchen.cannedgoods.printInventory();
                break;
            case five:
                //save canned good file
                kitchen.cannedgoods.saveContainerFile();
                break;
            default:
                cout << "Improper Menu Selection." << endl;
            }
        }
        break;

        case five:
        {
            // Spice Drawer Menu
            cout << "You are in the: " << kitchen.spicedrawer.getName() << endl;
            cout << "Make a Menu Selection: " << endl;
            cout << "1. Add Food item" << endl;
            cout << "2. Add Multiple Food items" << endl;
            cout << "3. Remove Food item" << endl;
            cout << "4. Print Inventory" << endl;
            cout << "5. Save Spice Drawer File" << endl;
            cout << "6. Exit" << endl;

            const int menu_selection6 = makeIntegerSelection();

            switch (menu_selection6)
            {
            case one:
                //add food
                kitchen.spicedrawer.addFood();
                break;
            case two:
                //add food
                kitchen.spicedrawer.addMultipleFoods();
                break;
            case three:
                //remove spice item
                kitchen.spicedrawer.printInventory();
                kitchen.spicedrawer.removeFood();
                break;
            case four:
                //print inventory
                kitchen.spicedrawer.printInventory();
                break;
            case five:
                //print inventory
                kitchen.spicedrawer.saveContainerFile();
                break;
            default:
                cout << "Improper Menu Selection." << endl;
            }
        }
        break;

        case six:
        {
            //Print Kitchen Inventory
            cout << kitchen.fridge.getName() << endl;
            kitchen.fridge.printInventory();

            cout << kitchen.freezer.getName() << endl;
            kitchen.freezer.printInventory();

            cout << kitchen.pantry.getName() << endl;
            kitchen.pantry.printInventory();

            cout << kitchen.cannedgoods.getName() << endl;
            kitchen.cannedgoods.printInventory();

            cout << kitchen.spicedrawer.getName() << endl;
            kitchen.spicedrawer.printInventory();
        }
        break;

        case seven:
        {
            // Grocery List Menu
            cout << "You are in the: " << kitchen.grocerylist.getName() << endl;
            cout << "Make a Menu Selection: " << endl;
            cout << "1. Add Food item" << endl;
            cout << "2. Add Multiple Food items" << endl;
            cout << "3. Remove Food item" << endl;
            cout << "4. Add Drink item" << endl;
            cout << "5. Add Multiple Drink items" << endl;
            cout << "6. Remove Drink item" << endl;
            cout << "7. Print Grocery List" << endl;
            cout << "8. Print Food List" << endl;
            cout << "9. Print Drink List" << endl;
            cout << "10. Save Grocery List Files" << endl;
            cout << "11. Exit" << endl;

            int menu_selection7 = 0;
            menu_selection7 = makeIntegerSelection();

            switch (menu_selection7)
            {
            case one:
                //add food
                kitchen.grocerylist.addFood();
                break;
            case two:
                //add multiple foods
                kitchen.grocerylist.addMultipleFoods();
                break;
            case three:
                //remove food
                kitchen.grocerylist.printFoodInventory();
                kitchen.grocerylist.removeFood();
                break;
            case four:
                //add drink
                kitchen.grocerylist.addDrink();
                break;
            case five:
                //add multiple drinks
                kitchen.grocerylist.addMultipleDrinks();
                break;
            case six:
                //remove drink
                kitchen.grocerylist.printDrinkInventory();
                kitchen.grocerylist.removeDrink();
                break;
            case seven:
                //print inventory
                kitchen.grocerylist.printInventory();
                break;
            case eight:
                //print food inventory
                kitchen.grocerylist.printFoodInventory();
                break;
            case nine:
                //print drink inventory
                kitchen.grocerylist.printDrinkInventory();
                break;
            case ten:
                //print drink inventory
                kitchen.grocerylist.saveContainerFile();
                break;
            default:
                cout << "Improper Menu Selection." << endl;
            }
        }
        break;
        case eight:
        {
            cout << "1. Empty Groceries" << endl;
            cout << "2. Unload an item" << endl;
            cout << "3. Unload multiple items" << endl;

            int menu_selection8 = 0;
            menu_selection8 = makeIntegerSelection();

            switch (menu_selection8)
            {
            case one:
            {
                kitchen.unloadGroceries();
            }
            break;
            case two:
            {
                kitchen.unloadItem();
            }
            break;
            case 3:
            {
                kitchen.unloadMultipleItems();
            }
            break;
            default:
            {
                cout << "default" << endl;
            }
            break;
            }
        }
            break;

        default:
            cout << "Make a Proper selection!" << endl;
        }
        printMainMenu();
        cin >> menu_selection;
        
    }
    cout << "You've reached the endl of this program, goodbye!" << endl;

    return 0;
}

auto makeIntegerSelection() -> int
{
    int menu_selection = 0;
    try
    {
        cin >> menu_selection;
    }
    catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    return menu_selection;
}

//Main Menu of Program inside of Kitchen
void printMainMenu()
{
    cout << "Make a Menu Selection: " << endl;
    cout << "1. Open Fridge" << endl;
    cout << "2. Open Freezer" << endl;
    cout << "3. Open Pantry" << endl;
    cout << "4. Open Canned Goods" << endl;
    cout << "5. Open Spice Drawer" << endl;
    cout << "6. Print Kitchen Inventory" << endl;
    cout << "7. Open Grocery List" << endl;
    cout << "8. Unload Groceries" << endl;
    cout << "9. Exit Program" << endl;
}