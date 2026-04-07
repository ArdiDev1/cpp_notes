#include <iostream>
using namespace std; //namespace used to wrap types, not visible outside

//Refrence type, defines alternative name for variable
//Created with the & operator during declaration

//Refrence v Pointer
//ref: needs to be initalized, should have an l-value, cannot be nullptr
//pointer: initalizer is optional, need not be l-value
int main() {
    //always needs to be intalized when declared
    //no memory allocated for refrence, its just a name

    int x = 0;
    int& ref = x;
    ++ref;

    int y = 20;

    // will assign x to 20
    ref = y;
    std::cout << x << std::endl; // << insertion operator << a << b called cascading

    //hold same memory
    std::cout << &ref << " " << &x << std::endl; // :: scope resolution operator

    return 0;
}