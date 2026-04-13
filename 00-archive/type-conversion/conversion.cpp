#include <iostream>
//Type Conversions, Conversion between types
//Preformed through cast or implicitly 

int main() {
    int a = 5, b = 6;
    // expicit keyword, used to 
    //not correct
    char *p = (char*) &a;

    //will give error, invalid cast 
    //char *p = static_cast<char*>(&a);

    //Allows casting between different types, should be avoided because
    //conversion is forced
    char *p = reinterpret_cast<char*>(&a);

    //Static cast, checks if cast is valid or not, superior to C Style.  
    double sum = static_cast<double>(a / b);

    // overload type conversion operator
    // operator <type>

    //explicit keyword can be used on type conversion operator to avoid
    //implicit conversion from compiler 
    return 0;
}