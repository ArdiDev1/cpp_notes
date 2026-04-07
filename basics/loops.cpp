#include <iostream>

int main() {
    int arr[] {1, 2, 3, 4, 5};

    int *beg = &arr[0];
    int *end = &arr[5];
    while (beg != end)
    {
        std::cout << *beg << std::endl;
        ++beg;
    }

    //volatile is a qualifier like const, applied to variables when you dont
    //want compiler to assume value during optimization
    // how for-each loop is implemented
    
    auto &&range = arr;
    auto start = std::begin(range); // returns (int*) beginning of array
    auto end = std::end(arr); // returns end of array, does not need to be same
    for (; start != end; ++start)
    {
        auto v = *start;
    }

    for (int i = 0; i < 5; i++)
    {
        //print
    }

    // range based for loop, does not need index variable
    // each iteration returns element
    for(int x : arr) {

    }

    // if you dont want duplication
    for (int& x: arr) {

    }

    // can't modify 
    for(const int& x: arr) {

    }

    // over initalization list
    for(const int& x: {1, 2, 3, 4, 5}) {

    }
}