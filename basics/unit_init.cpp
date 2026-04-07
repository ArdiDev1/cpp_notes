#include <iostream>
//Uniform Initalization intializes all types

//c++ 98 provided different ways to initalize types
//Scalar types by = or (), and Arrays with {} introduced in c++ 11

int main() {
    int a1;
    int a2 = 0; //copy initalization
    int a(0);

    char d3[8];
    char a3[8] = {'1', '2', '3', '4'};

    int b1{}; //initalized to zero
    int b2(); //most vexing parse 

    char e1[8]{}; //auto initalizes array to zero

    //anything on the heap also initalized like this
    int *p1 = new int[8]{};

    //Avoid copy initalization especially with user-defined types.

    return 0;
}