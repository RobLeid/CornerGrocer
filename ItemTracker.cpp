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
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor: Runs when new ItemTracker is created
// Parameters: inputFileName - used to create map
// Return: nothing
ItemTracker::ItemTracker(const string& inputFileName) {
    loadFromFile(inputFileName);
    writeBackup("frequency.dat");
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
    try {
        return itemFrequency.at(titleCase(item));
    }
    catch (const out_of_range){
        return 0;
    }


    // run titleCase on input
    // use item as key value for lookup
    // use try/catch block with itemFrequency.at(item) and catch out_of_range, and return 0 if out of range
}

// prints all items with all the counts
// Parameters - none
// Return - none (uses cout)
void ItemTracker::printAll() const {
    for (const auto& [item, count] : itemFrequency) {
        cout << item << " " << count << endl;
    }
}

// prints all items, with the counts as a symbol
// Parameters - char (symbol used to print, defaults to a *)
// Return - none (uses cout)
void ItemTracker::printHistogram(char symbol) const {
    for (const auto& [item, count] : itemFrequency) {
        cout << setw(15) << item << " ";
        for (int i = 0; i < count; ++i){
            cout << symbol;
        }
        cout << endl;
    }
    // similar to printAll() except instead of printing the values it prints a character
    // will need to think about formatting here with different word lengths
}

// helper function to make everything title case
// Parameters - rawString (string to convert)
// Return - string (converted string)
string ItemTracker::titleCase(const string& rawString) const {
    string convertedString = rawString;
    // return early if string is empty to avoid out_of_range errors
    if (convertedString.empty()) {
        return convertedString;
    }
    // convert first charater to upper
    convertedString[0] = toupper(convertedString[0]);

    // convert every character from index i -> end to lower
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

    inputFile.close();
}

// writes the backup data to .dat file
// Parameters - string outputFileName
// Return - none
void ItemTracker::writeBackup(const string& outputFileName) const {
    ofstream outputFile;
    outputFile.open(outputFileName);

    if (!outputFile.is_open()) {
        return;
    }

    // loop through the map and write to outputFile
    for (const auto& [item, count] : itemFrequency) {
        outputFile << item << " " << count << endl;
    }

    outputFile.close();
}