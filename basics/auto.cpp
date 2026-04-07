#include <iostream>

using namespace std;

int main() {
    //auto keyword, indicates storage class 
    // meaning has been changed in C++11
    // Compiler auto infer type of initalizer

    auto j = 10; // declration always needs to be initalized
    auto a = 33.3 + 10;

    int x;
    //const int 
    auto &a = x;

    // type will be of largest data type in the expression

    //list needs to be on right hand side of initializer operator
    auto list = {1, 2, 3, 4};
}