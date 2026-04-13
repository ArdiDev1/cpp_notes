#include <iostream>
#include <vector>

template <class InputIterator, class T>
InputIterator my_find(
    InputIterator from,
    InputIterator to,
    const T& target
) {
    for(auto i = from; i < to; i++) {
        if (i == target)
        {
            return 
        }
        
    }
}

int main() {
    std::vector<int> x = {1, 20, 4, 50};
    auto at = my_find(x.begin(), x.end(), 17);
    bool found = (at != x.end())
    if(found)
        std::cout << "value=" << *at <<std::endl;
}