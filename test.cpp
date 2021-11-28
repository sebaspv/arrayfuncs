#include "arrayfuncs.cpp"
#include <iostream>

using namespace arrayfuncs;
int main(){
    Array MyArray;
    MyArray.length = 10;
    for(int i = 0; i < MyArray.zeros().size(); i++){
        std::cout<<MyArray.zeros().at(i)<< std::endl;
    }
    return 0;
}