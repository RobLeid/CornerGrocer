/*
 * Author: Robert Leidner
 * Class: CS210
 * Date: 10/17/2026
 * Purpose: Holds declarations for Menu
 */

#ifndef CORNERGROCER_MENU_H
#define CORNERGROCER_MENU_H

#include "ItemTracker.h"

using namespace std;

class Menu {
    public:
        Menu(const ItemTracker& tracker); // constructor that initializes with a reference to the already created ItemTracker
        void run(); // function that will control the logic and call private member functions
    private:
        const ItemTracker* tracker; // pointer to the ItemTracker so Menu can call its methods
        void displayMenu() const; // function to display menu
        int getMenuChoice() const; // function to get and validate menu choice from user
        void itemLookup() const; // Option 1: prompts user for an item, prints its frequency
        void showAll() const; // Option 2: prints every item with its count
        void showHistogram() const; // Option 3: prints items with asterisks representing their count
};


#endif //CORNERGROCER_MENU_H
