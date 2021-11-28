#include "arrayfuncs.cpp"
#include <iostream>

/* 
Sample file to show the functions available in C++ instead of Python.
They are the same, but the implementation is a bit different because of their syntax.
*/
using namespace arrayfuncs;
int main(){
    Array MyArray;
    MyArray.length = 10;
    // loop through the array and print all of the zeros
    for(int i = 0; i < MyArray.zeros().size(); i++){
        std::cout<<MyArray.zeros().at(i)<< std::endl;
    }
    return 0;
}