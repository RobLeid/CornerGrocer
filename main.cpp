/*
 * Author: Robert Leidner
 * Class: CS210
 * Date: 10/17/2026
 * Purpose: Main program that will call Menu and ItemTracker to read in list from external file
 * and count up # of each item, as well as perform certain tasks prompted by user
 */

#include <iostream>
#include "Menu.h"
#include "ItemTracker.h"

using namespace std;

int main() {
    ItemTracker tracker("CS210_Project_Three_Input_File.txt");
    Menu cornerGrocer(tracker);
    cornerGrocer.run();
    return 0;
}
