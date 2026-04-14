#include "vector.h"
#include <iostream>

int main() 
{
    vector<int> vec{};
    std::cout << vec.capacity() << std::endl;
    return 0;
}