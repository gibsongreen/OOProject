// Final.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Gibson Green
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
using namespace std;

void printUserMenu();
void printMainMenu();
int makeIntegerSelection();

int main()
{
    /*
    //Prints opening menu
    printUserMenu();
    menu_selection = makeIntegerSelection();
    //if new user, set up you fridge
    if (menu_selection == 1)
    {
        Kitchen kitchen;
    }
    // if returning user, enter main menu
    else if (menu_selection == 2)
    {
        cout << "Returning User" << endl;
    }
    */
    // Menu Selection, using integer to go through program
    Kitchen kitchen;

    int menu_selection;
    printMainMenu();

    menu_selection = makeIntegerSelection();

    while (menu_selection != 6)
    {
        switch (menu_selection)
        {
        case 1:
            cout << "You are in the: " << kitchen.fridge.getName() << endl;
            cout << "The internal temperature is: " << kitchen.fridge.getInternalTemperature() << endl;
            break;
        case 2:
            cout << "You are in the: " << kitchen.freezer.getName() << endl;
            cout << "The internal temperature is: " << kitchen.freezer.getInternalTemperature() << endl;
            break;
        case 3:
            cout << "You are in the: " << kitchen.pantry.getName() << endl;
            break;
        case 4:
            cout << "You are in the: " << kitchen.cannedgoods.getName() << endl;
            break;
        case 5:
            cout << "You are in the: " << kitchen.spicedrawer.getName() << endl;
            break;
        default:
            cout << "Make a Proper selection!" << endl;
        }
        printMainMenu();
        cin >> menu_selection;

    }
    cout << "You've reached the endl of this program, goodbye!" << endl;
}

void printUserMenu()
{
    cout << "1. New User" << endl;
    cout << "2. Returning User" << endl;
}

void printMainMenu()
{
    cout << "Make a Menu Selection: " << endl;
    cout << "1. Open Fridge" << endl;
    cout << "2. Open Freezer" << endl;
    cout << "3. Open Pantry" << endl;
    cout << "4. Open Canned Goods" << endl;
    cout << "5. Open Spice Drawer" << endl;
    cout << "6. Exit Program" << endl;
}

int makeIntegerSelection()
{
    int menu_selection;
    try
    {
        cin >> menu_selection;
    }
    catch (invalid_argument& e) {
        cout << e.what() << endl;
    }

    return menu_selection;
}


#include <iostream>
#include "Refridgerator.h"
#include "Kitchen.h"
#include "Food.h"
#include "Container.h"
using namespace std;

void printMainMenu();
int makeIntegerSelection();

int main()
{
    // creates an instance of kitchen
    int menu_selection;
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
    }
    
    // sets up menu selector and prints main menu
    printMainMenu();
    
    // user give integer input to make menu selection
    menu_selection = makeIntegerSelection();
   
    //menu continues until exit code is 6 is inputted by user 
    while (menu_selection != 7)
    {
        // menu selection navigates program
        switch (menu_selection)
        {
        case 1:
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

            int menu_selection2;
            menu_selection2 = makeIntegerSelection();

            switch (menu_selection2)
            {
            case 1:
                //change internal temperature of fridge
                kitchen.fridge.changeInternalTemperature();
                break;
            case 2:
                //add food
                kitchen.fridge.addFood();
                break;
            case 3:
                //add multiple foods
                kitchen.fridge.addMultipleFoods();
                break;
            case 4:
                //remove food
                kitchen.fridge.printFoodInventory();
                kitchen.fridge.removeFood();
                break;
            case 5:
                //add drink
                kitchen.fridge.addDrink();
                break;
            case 6:
                //add multiple drinks
                kitchen.fridge.addMultipleDrinks();
                break;
            case 7:
                //remove drink
                kitchen.fridge.printDrinkInventory();
                kitchen.fridge.removeDrink();
                break;
            case 8:
                //print inventory
                kitchen.fridge.printInventory();
                break;
            case 9:
                //print food inventory
                kitchen.fridge.printFoodInventory();
                break;
            case 10:
                //print drink inventory
                kitchen.fridge.printDrinkInventory();
                break;
            case 11:
                //print drink inventory
                kitchen.fridge.saveContainerFile();
                break;
            default:
                cout << "Improper Menu Selection." << endl;
            }
            break;

        case 2:
            // Freezer Menu
            cout << "1. Change Freezer Internal Temperature " << endl;
            cout << "2. Add Freezer Food item" << endl;
            cout << "3. Add Multiple Freezer Food items" << endl;
            cout << "4. Remove Freezer Food item" << endl;
            cout << "5. Print Freezer Inventory" << endl;
            cout << "6. Save Freezer File" << endl;
            cout << "7. Exit" << endl;

            int menu_selection3;
            menu_selection3 = makeIntegerSelection();

                switch (menu_selection3)
                {
                case 1:
                    //change internal temperature of fridge
                    kitchen.freezer.changeInternalTemperature();
                    break;
                case 2:
                    //add food
                    kitchen.freezer.addFood();
                    break;
                case 3:
                    //add multiple foods
                    kitchen.freezer.addMultipleFoods();
                    break;
                case 4:
                    //remove food
                    kitchen.freezer.printFoodInventory();
                    kitchen.freezer.removeFood();
                    break;
                case 5:
                    //print inventory
                    kitchen.freezer.printInventory();
                case 6:
                    //print drink inventory
                    kitchen.freezer.saveContainerFile();
                    break;
                default:
                    cout << "Improper Menu Selection." << endl;
                    break;
                }
            break;

        case 3:
            // Pantry Menu
            cout << "You are in the: " << kitchen.pantry.getName()<< endl;
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
            int menu_selection4;
            menu_selection4 = makeIntegerSelection();

            switch (menu_selection4)
            {
            case 1:
                //add food item
                kitchen.pantry.addFood();
                break;
            case 2:
                //add multiple food items
                kitchen.pantry.addMultipleFoods();
                break;
            case 3:
                //remove food item
                kitchen.pantry.printFoodInventory();
                kitchen.pantry.removeFood();
                break;
            case 4:
                //add drink item
                kitchen.pantry.addDrink();
                break;
            case 5:
                //add multiple drink items
                kitchen.pantry.addMultipleDrinks();
                break;
            case 6:
                //remove drink item
                kitchen.pantry.printDrinkInventory();
                kitchen.pantry.removeDrink();
                break;
            case 7:
                //print inventory
                kitchen.pantry.printInventory();
                break;
            case 8:
                //print food inventory
                kitchen.pantry.printFoodInventory();
                break;
            case 9:
                //print drink inventory
                kitchen.pantry.printDrinkInventory();
                break;
            case 10:
                //print drink inventory
                kitchen.pantry.saveContainerFile();
                break;
            default:
                cout << "Improper Menu Selection." << endl;
            }
            break;

        case 4:
            // Canned Goods Menu
            cout << "You are in the: " << kitchen.cannedgoods.getName() << endl; 
            cout << "Make a Menu Selection: " << endl;
            cout << "1. Add Food item" << endl;
            cout << "2. Add Multiple Food items" << endl;
            cout << "3. Add Remove item" << endl;
            cout << "4. Print Inventory" << endl;
            cout << "5. Save Canned Goods File" << endl;
            cout << "6. Exit" << endl;

            int menu_selection5;
            menu_selection5 = makeIntegerSelection();

            switch (menu_selection5)
            {
            case 1:
                //add food
                kitchen.cannedgoods.addFood();
                break;
            case 2:
                //add multiple foods
                kitchen.cannedgoods.addMultipleFoods();
                break;
            case 3:
                //remove canned goods food item
                kitchen.cannedgoods.printInventory();
                kitchen.cannedgoods.removeFood();
                break;
            case 4:
                //print inventory
                kitchen.cannedgoods.printInventory();
                break;
            case 5:
                //save canned good file
                kitchen.cannedgoods.saveContainerFile();
                break;
            default:
                cout << "Improper Menu Selection." << endl;
            }
            break;

        case 5:
            // Spice Drawer Menu
            cout << "You are in the: " << kitchen.spicedrawer.getName() << endl;
            cout << "Make a Menu Selection: " << endl;
            cout << "1. Add Food item" << endl;
            cout << "2. Add Multiple Food items" << endl;
            cout << "3. Remove Food item" << endl;
            cout << "4. Print Inventory" << endl;
            cout << "5. Save Spice Drawer File" << endl;
            cout << "6. Exit" << endl;

            int menu_selection6;
            menu_selection6 = makeIntegerSelection();

            switch (menu_selection6)
            {
            case 1:
                //add food
                kitchen.spicedrawer.addFood();
                break;
            case 2:
                //add food
                kitchen.spicedrawer.addMultipleFoods();
                break;
            case 3:
                //remove spice item
                kitchen.spicedrawer.printInventory();
                kitchen.spicedrawer.removeFood();
                break;
            case 4:
                //print inventory
                kitchen.spicedrawer.printInventory();
                break;
            case 5:
                //print inventory
                kitchen.spicedrawer.saveContainerFile();
                break;
            default:
                cout << "Improper Menu Selection." << endl;
            }

            break;

        case 6:
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

int makeIntegerSelection()
{
    int menu_selection;
    try
    {
        cin >> menu_selection;
    }
    catch (invalid_argument& e) {
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
    cout << "7. Exit Program" << endl;
}