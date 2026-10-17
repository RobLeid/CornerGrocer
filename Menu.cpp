/*
 * Author: Robert Leidner
 * Class: CS210
 * Date: 10/17/2026
 * Purpose: Holds definitions for Menu
 */

#include "Menu.h"
#include "ItemTracker.h"

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
    // TODO create function
}

// Prints the four menu options to the console
// Parameters: none
// Return: none (uses cout)
void Menu::displayMenu() const {
    // TODO create function
}

// Prompts the user for a menu choice and validates it is an integer in range 1-4
// Parameters: none
// Return: int (the validated menu choice)
int Menu::getMenuChoice() const {
    int userChoice = 0;
    // TODO create function
    return userChoice;
}

// Option 1: prompts the user for an item name and prints its frequency from ItemTracker
// Parameters: none
// Return: none (uses cout)
void Menu::itemLookup() const {
    // TODO create function
}

// Option 2: prints every item in the tracker alongside its purchase count
// Parameters: none
// Return: none (uses cout)
void Menu::showAll() const {
    // TODO create function
}

// Option 3: prints every item alongside asterisks representing its purchase count
// Parameters: none
// Return: none (uses cout)
void Menu::showHistogram() const {
    // TODO create function
}
