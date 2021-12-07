// Final.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Procedural programming uses a very detailed list of instructions to tell the computer what to do step by step. This approach
// uses iteration to repeat a series of steps as often as needed. Functional programming is an approach to problem solving that 
// treats every computation as a mathematical function source: https://study.com/academy/lesson/functional-programming-and-logic-programming.html#:~:text=Procedural%20programming%20uses%20a%20very,computation%20as%20a%20mathematical%20function.
// Object-oriented programming (OOP) is a computer programming model that organizes software design around data, or objects, rather than 
// functions and logic. An object can be defined as a data field that has unique attributes and behavior.
// Each distinct logic sequence is known as a method. source: https://searchapparchitecture.techtarget.com/definition/object-oriented-programming-OOP#:~:text=Object%2Doriented%20programming%20(OOP)%20is%20a%20computer%20programming%20model,has%20unique%20attributes%20and%20behavior.&text=Each%20distinct%20logic%20sequence%20is%20known%20as%20a%20method.


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
            cout << "You are in the: " << kitchen.pantry.getName()<< endl;
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
