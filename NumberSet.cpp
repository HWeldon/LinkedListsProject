#include <iostream>
#include <algorithm>
#include <vector>
#include "NumberSet.h"
using namespace std;

NumberSet :: NumberSet()
{

}

void NumberSet :: add(int A)
{
  // Check to see if user input is already in the set
  // warn user if found
  if (find(v_set.begin(), v_set.end(), A) != v_set.end())
    {
      cout << endl;
      cout << "Number already in set.";
      cout << endl;
    }
  // If user input is not already in set, add the
  // input to the vector
  else
    {
      v_set.push_back(A);
    }
}


void NumberSet :: remove(int A)
{
  // If set contains user number, remove it from set.
  if (find(v_set.begin(), v_set.end(), A) != v_set.end())
    {
      vector<int>::iterator position = find(v_set.begin(), v_set.end(), A);
      if (position != v_set.end())
	{
	  v_set.erase(position);
	}
    }
  // If user number is not in set, warn user
  else
    {
      cout << endl;
      cout << "Number not in set.";
      cout << endl;
    }

}


void NumberSet :: clear()
{
  // If set is not empty, clear it
  if(!v_set.empty())
    {
      v_set.clear();
      cout << "The set is now empty.";
      cout << endl;
      cout << endl;
    }
  // if set is already empty, warn user
  else
    {
      cout << "Set already empty.";
      cout << endl;
      cout << endl;
    }
}


int NumberSet :: size()
{
  // If set is empty, return 0 for size
  if(v_set.empty())
    {
      cout << "The size of the set is: 0";
      cout << endl;
      cout << endl;
    }
  // If set contains values, return size of the set
  else
    {
      cout << "The size of the set is: " <<  v_set.size();
      cout << endl;
      cout << endl;
    }
}


void NumberSet :: output()
{
  cout << "The set is: ";
  for (vector<int>::const_iterator i = v_set.begin(); i != v_set.end(); ++i)
    {
      cout << *i << ' ';
    }
  cout << endl;
  cout << endl;
}
