#include "integer.h"
#include <iostream>

int main() {
    Integer i(15);
    Integer i2(i); // cant be done, problem is copying of pointers

    //Shallow copy, changes made in p1 and p2 reflect in all other pointers 
    // that hold same adress

    //Shallow copy is a duplicate of an object where the new object
    //shares the same underlying values as the original object.
    int *p1 = new int(5);
    int *p2 = p1;

    //Deep copy, a duplicate of an object and copies all objects found 
    //within it
    int *p3 = new int(*p1);

    // i = i2, shallow copy;

    std::cout << i2.GetValue() << std::endl;
    std::cout << i.GetValue() << std::endl;
    return 0;
}