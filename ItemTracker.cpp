/*
 * Author: Robert Leidner
 * Class: CS210
 * Date: 10/17/2026
 * Purpose: Holds definitions for ItemTracker
 */

#include "ItemTracker.h"
#include <string>
#include <fstream>
#include <cctype>

using namespace std;

// Constructor: Runs when new ItemTracker is created
// Parameters: inputFileName - used to create map
// Return: nothing
ItemTracker::ItemTracker(const string& inputFileName) {
    // TODO Create constructor
    // Creates map
    // calls loadFromFile using input file name
    // loops through file until end, each time reading in item name, using title case function, and writing to map, or incrementing the value in the map
    // use writeBackup function to using an outputFileName
}

// checks if the map actually contains data
// Parameters - none
// Return - bool (true or false if map is empty)
bool ItemTracker::isEmpty() const {
    return itemFrequency.empty();
}

// gets the count of an item based on user input
// Parameters - item (input from user)
// Return - int (# from map)
int ItemTracker::getCount(const string& item) const {
    // TODO create function
    // run titleCase on input
    // use item as key value for lookup
    // use try/catch block with itemFrequency.at(item) and catch out_of_range, and return 0 if out of range
}

// prints all items with all the counts
// Parameters - none
// Return - none (uses cout)
void ItemTracker::printAll() const {
    // TODO create function
    // loop through map and output key and values
}

// prints all items, with the counts as a symbol
// Parameters - char (symbol used to print, defaults to a *)
// Return - none (uses cout)
void ItemTracker::printHistogram(char symbol) const {
    // TODO create function
    // similar to printAll() except instead of printing the values it prints a character
    // will need to think about formatting here with different word lengths
}

// helper function to make everything title case
// Parameters - rawString (string to convert)
// Return - string (converted string)
string ItemTracker::titleCase(const string& rawString) const {
    string convertedString = rawString;
    if (convertedString.empty()) {
        return convertedString;
    }
    convertedString[0] = toupper(convertedString[0]);

    for (int i = 1; i < convertedString.size(); ++i) {
        convertedString[i] = tolower(convertedString[i]);
    }

    return convertedString;
}

// loads the data from provided file
// Parameters - string inputFileName
// Return - none
void ItemTracker::loadFromFile(const string& inputFileName) {
    string item;
    ifstream inputFile;
    inputFile.open(inputFileName);

    if (!inputFile.is_open()){
        return;
    }

    while (inputFile >> item){
        itemFrequency[titleCase(item)]++;
    }
}

// writes the backup data to .dat file
// Parameters - string outputFileName
// Return - none
void ItemTracker::writeBackup(const string& outputFileName) const {
    // TODO create function
}