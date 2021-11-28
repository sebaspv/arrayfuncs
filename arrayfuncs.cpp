#include "arrayfuncs.h"
#include <vector>

using namespace arrayfuncs;
std::vector<std::vector<int>> Array::zeros(){
    std::vector<std::vector<int>> FinalVector;
    for(int i = 0; i<Array::y; i++){
        std::vector<int> AddedVector;
        for(int j = 0; j<Array::x; j++){
            AddedVector.push_back(0);
        }
        FinalVector.push_back(AddedVector);
    }
    return FinalVector;
}