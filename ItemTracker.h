/*
 * Author: Robert Leidner
 * Class: CS210
 * Date: 10/17/2026
 * Purpose: Holds declarations for ItemTracker
 */

#ifndef CORNERGROCER_ITEMTRACKER_H
#define CORNERGROCER_ITEMTRACKER_H

#include <string>
#include <map>

using namespace std;

class ItemTracker {
    public:
        ItemTracker(const string& inputFileName); // constructor
        bool isEmpty() const; // checks if the map actually contains data
        int getCount(const string& item) const; // gets the count of an item based on user input
        void printAll() const; // prints all items with all the counts
        void printHistogram(char symbol = '*') const; // prints all items, witht he counts as a symbol


    private:
        map<string, int> itemFrequency; // will hold all the data
        string titleCase(const string& rawString) const; // helper function to make everything title case
        void loadFromFile(const string& inputFileName); // loads the data from provided file
        void writeBackup(const string& outputFileName) const; // writes the backup data to .dat file
};


#endif //CORNERGROCER_ITEMTRACKER_H
