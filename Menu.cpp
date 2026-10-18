/*
 * Author: Robert Leidner
 * Class: CS210
 * Date: 10/17/2026
 * Purpose: Holds definitions for Menu
 */

#include "Menu.h"
#include "ItemTracker.h"
#include <iostream>
#include <limits>

using namespace std;

// Constructor: Runs when a new Menu is created
// Parameters: tracker - reference to the already created ItemTracker that holds the loaded data
// Return: nothing
Menu::Menu(const ItemTracker& tracker) {
    this->tracker = &tracker; // store the address of the passed-in ItemTracker
}

// Main menu loop: displays menu, gets user choice, dispatches to the handler, repeats until the user exits
// Parameters: none
// Return: none
void Menu::run() {
    int userChoice;
    displayMenu();
    userChoice = getMenuChoice();

}

// Prints the four menu options to the console
// Parameters: none
// Return: none (uses cout)
void Menu::displayMenu() const {
    cout << "\n=== Corner Grocer Menu ===" << endl;
    cout << "1. Look up an item's frequency" << endl;
    cout << "2. List all items and frequencies" << endl;
    cout << "3. Show histogram" << endl;
    cout << "4. Exit" << endl;
}

// Prompts the user for a menu choice and validates it is an integer in range 1-4
// Parameters: none
// Return: int (the validated menu choice)
int Menu::getMenuChoice() const {
    int userChoice = 0;
    while (userChoice < 1 || userChoice > 4) {
        cout << "Enter your choice (1-4): ";
        cin >> userChoice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');    // discard the bad input
            cout << "Invalid input. Please enter a number (1-4)." << endl;
        }
        else if (userChoice < 1 || userChoice > 4) {
            cout << "Please enter a number between 1 and 4." << endl;
        }
    }
    return userChoice;
}

// Option 1: prompts the user for an item name and prints its frequency from ItemTracker
// Parameters: none
// Return: none (uses cout)
void Menu::itemLookup() const {
    string userItem;
    cout << "Please enter an item name: ";
    cin >> userItem;
    cout << userItem << ": " << tracker->getCount(userItem) << endl;
}

// Option 2: prints every item in the tracker alongside its purchase count
// Parameters: none
// Return: none (uses cout)
void Menu::showAll() const {
    tracker->printAll();
}

// Option 3: prints every item alongside asterisks representing its purchase count
// Parameters: none
// Return: none (uses cout)
void Menu::showHistogram() const {
    tracker->printHistogram('-');
}
