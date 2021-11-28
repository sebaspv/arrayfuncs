#include "arrayfuncs.cpp"
#include <iostream>

/*
Sample file to show the functions available in C++ instead of Python.
They are the same, but the implementation is a bit different because of their
syntax.
*/
using namespace arrayfuncs;
int main() {
  Array MyArray;
  MyArray.x = 2;
  MyArray.y = 2;
  // loop through the array and print all of the zeros
  for (int i = 0; i < MyArray.zeros().size(); i++) {
    for (int j = 0; j < MyArray.zeros().at(i).size(); j++) {
      std::cout<< MyArray.zeros().at(i).at(j); // print all of the zeros
    }
  }

  for (int i = 0; i < MyArray.ones().size(); i++) {
    for (int j = 0; j < MyArray.ones().at(i).size(); j++) {
      std::cout<< MyArray.ones().at(i).at(j); // print all of the ones
    }
  }
  return 0;
}