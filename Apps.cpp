#include <iostream>
#include <vector>
#include "NumberSet.h"
#include "NumberSet.cpp"

using namespace std;

int main()
{
        NumberSet ns;
        // Introduction
	cout << endl;
	cout << "Welcome to the Vector-izer 5000" << endl;

	// Menu screen looping variable
	int userMenuChoice;

	// Menu screen loop
	do
	{
		cout << "1) Add an element to the set" << endl;
		cout << "2) Remove an element from the set" << endl;
		cout << "3) Clear the set" << endl;
		cout << "4) Return the size of the set" << endl;
		cout << "5) Print the set" << endl;
		cout << "To perform an operation type 1,2,3,4, or 5 (enter 0 to quit): ";

		cin >> userMenuChoice;
		cout << endl;

		// Menu branches
		if (userMenuChoice == 1)
		{
		  cout << "Enter a positive integer: ";
		  int userInput;
		  cin >> userInput;
		  ns.NumberSet::add(userInput);
		  cout << endl;
		}

		else if (userMenuChoice == 2)
		{
		  cout << "Enter a positive integer to remove: ";
		  int userInputRemove;
		  cin >> userInputRemove;
		  ns.NumberSet::remove(userInputRemove);
		  cout << endl;
		}

		else if (userMenuChoice == 3)
		{
		  ns.NumberSet::clear();
		}

		else if (userMenuChoice == 4)
		{
		  ns.NumberSet::size();
		}

		else if (userMenuChoice == 5)
		{
		  ns.NumberSet::output();
		}

		else if (userMenuChoice == 0)
		{
			cout << "Closing program now." << endl;
			cout << endl;
		}

		// Check for incorrect input
		else
		{
			cout << "Invalid option entered. Please select 1,2,3,4,5 or 0" << endl;
			cout << endl;
		}

	} while (userMenuChoice != 0);

	return 0;
}
