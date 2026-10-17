/*
 * Author: Robert Leidner
 * Class: CS210
 * Date: 10/17/2026
 * Purpose: Holds definitions for ItemTracker
 */

#include "ItemTracker.h"
#include <string>
#include <map>

using namespace std;

// Constructor: Runs when new ItemTracker is created
// Parameters: inputFileName - used to create map
// Return: nothing
ItemTracker::ItemTracker(const string& inputFileName) {
    // TODO Create constructor
}

// checks if the map actually contains data
// Parameters - none
// Return - bool (true or false if map is empty)
bool ItemTracker::isEmpty() const {
    bool isEmptyBool = true;
    // TODO create function
    return isEmptyBool;
}

// gets the count of an item based on user input
// Parameters - item (input from user)
// Return - int (# from map)
int ItemTracker::getCount(const string& item) const {
    int itemCount = 0;
    // TODO create function
    return itemCount;
}

// prints all items with all the counts
// Parameters - none
// Return - none (uses cout)
void ItemTracker::printAll() const {
    // TODO create function
}

// prints all items, with the counts as a symbol
// Parameters - char (symbol used to print, defaults to a *)
// Return - none (uses cout)
void ItemTracker::printHistogram(char symbol) const {
    // TODO create function
}

// helper function to make everything title case
// Parameters - rawString (string to convert)
// Return - string (converted string)
string ItemTracker::titleCase(const string& rawString) const {
    string convertedString;
    // TODO create function
    return convertedString;
}

// loads the data from provided file
// Parameters - string inputFileName
// Return - none
void ItemTracker::loadFromFile(const string& inputFileName) {
    // TODO create function
}

// writes the backup data to .dat file
// Parameters - string outputFileName
// Return - none
void ItemTracker::writeBackup(const string& outputFileName) const {
    // TODO create function
}