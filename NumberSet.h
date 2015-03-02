#ifndef NUMBERSET_H
#define NUMBERSET_H
#include <vector>

class NumberSet
{
   private:
      std::vector<int> v_set;
   public:
      NumberSet();
      // default constructor
      void add(int A);
      // add element to the set
      void remove(int A);
      // remove element from the set
      void clear();
      // clear the entire set, if empty, do nothing
      int size();
      // return the number of elements in the set, return 0 if set is empty
      void output();
      // print all elements in the set (in any order)
};

#endif
