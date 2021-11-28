#include "arrayfuncs.h"
#include <vector>

using namespace arrayfuncs;
std::vector<int> Array::zeros(){
    std::vector<int> random_vector;
    for(int i = 0; i<Array::length; i++){
        random_vector.push_back(0);
    }
    return random_vector;
}