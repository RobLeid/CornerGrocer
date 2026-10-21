# Corner Grocer

**Robert Leidner**

**CS210**

**10/20/2026**

## Summarize the project and what problem it was solving.

Corner Grocer is a C++ program that reads in a list of items purchased throughout the day and counts up how many times each one was bought, so the store can figure out which produce sells the most and arrange things around that. 

## What did you do particularly well?

I think the planning went really well. I wrote out a plan (Plan.md) before touching any code, and most of the design came straight from it. I also like how the two classes split up the work, ItemTracker handles everything to do with the data and Menu handles everything the user touches, so each one stays pretty simple. I spent a good amount of time thinking about how things could go wrong too, so I made sure to validate inputs

## Where could you enhance your code? How would these improvements make your code more efficient, secure, and so on?

There are a few things I'd clean up. The item search only reads one word (which each item on the list was), so I'd switch it to getline in case the store ever adds something like "Green Beans." I'd also like to go back and use a reference in Menu instead of a pointer if I spent a little more time researching how. 

## Which pieces of the code did you find most challenging to write, and how did you overcome this? What tools or resources are you adding to your support network?

Looping through the map tripped me up a little, since all the loops we'd done up to this point were number indexed and a map doesn't really work that way. I ended up finding a [Stack Overflow thread](https://stackoverflow.com/questions/26281979/how-do-you-loop-through-a-stdmap) that showed how to do it. I'll definitely be keeping StackOverflow bookmarked

## What skills from this project will be particularly transferable to other projects or course work?

Reading and writing files, validating input and working with maps all feel like stuff I'll use again. I think the bigger thing is the habit of planning first and then building in small bits, and writing little stub functions to break it down before fully writing out the functions

## How did you make this program maintainable, readable, and adaptable?

Every file has a header comment and every function has a short comment explaining what it does, what it takes in and what it returns. I tried to keep the names descriptive so the code mostly explains itself. Since the data and the menu are in separate classes, changing one shouldn't really affect the other