- Robert Leidner
- CS 210
- 10/16/2026

How the program will work:
- program starts
- creates map with keys of string and values of int
- reads in the input file
- loop through each line and adds it to map
- supposedly the below code will create a key if it doesn't exist, otherwise it will increment 
```
mapName["keyName"]++;
```
- write the keys, values to the .dat file
- close the input file and .dat file, keep map in memory
- ask user for input for 4 menu options
- do the menu options

Classes
- menu
  - holds all the functions related to the menu and getting input from the user
  - also will hold a reference to ItemTracker that will contain everything related to tracking the actual items
  - validations for inputs
    - checking menu choices for validity (try/catch blocks?)
      - value is in range
      - value is actually an int
- ItemTracker
  - holds a map of [itemName, count] that is string, int
  - holds all functions related to getting data including
    - reading file (including validations)
      - validations like did file open? (bool?)
      - was there data in the file? (map is not empty?)
    - creating the backup .dat file only if the file opened and there was data
    - holding the map
    - lookups for the map
      - include function to print out histogram based on values
  - should standardize all the item names to title case, both upon reading from file and upon user input
  - this should probably load first, there's no need for a menu if no data. Then it gets passed to Menu by reference 
    