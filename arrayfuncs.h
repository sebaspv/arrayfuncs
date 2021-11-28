#pragma once
#include <vector>

namespace arrayfuncs{
    class Array {
        public:
            int x;
            int y;
            std::vector<std::vector<int>> zeros();
            std::vector<std::vector<int>> ones();
    };
}