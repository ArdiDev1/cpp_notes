#include <iostream>


//L-value, Has a name
//All variables are l-values
//Can be assigned values
//Some Expressions return l-values
//persist beyond expression

//R-value, does not have a name
//Is a temporary value
//Cannot be assigned values
//Some Expressions return r-value
//does not persist beyond expression

//returns r-value 
int add(int x, int y) {
    return x + y;
}

//returns l_value
int& transform(int &x) {
    x *= x;
    return x;
}

int main() {
    // x is l value, has a name
    int x = 1;
    int result = x + x; // returns r value and assigns to l

    int& ref = x;
    int&& a = 1; // && r-value operator

    return 0;
}