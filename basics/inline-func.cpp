#include <iostream>

//has to make a jump here 
int square(int x) {
    return x * x;
}


//replaces function call with function body, without overhead of function
//call, defined in header file, makes a request to the compiler.
//excessive inlining increases bianary size
int inline foo(int x) {
    return x * x;
}

// macros work through text-substitution, does not work
#define Square(x) x * x;

int main() {
    //function call has overhead with it, needs to jump and
    //store information of return address
    int result = square(5);
    return 0;
}