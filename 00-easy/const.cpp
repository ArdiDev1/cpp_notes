#include <iostream>

/*
 creates variable that is constant
 value cant be modified
 replaces c-macros
 commonly used with refrences 
 always needs initalizer
*/

//common to see in programs, ref have easier syntax

// can pass in literal or l-value
void foo(const int &ref) {

}

int main() {

    const int CHUNK_SIZE = 512;

    int a = 5;

    //more readable, no scope
    const float pi = 3.141592f;

    // adress can change, value cannot
    const int *ptr = &CHUNK_SIZE; 

    // constant adress but value can change
    int *const ptr = &a;

    //adress cant change, value cannot change
    const int *const ptr = &CHUNK_SIZE;

    const int &ref = 5; // useful for passing refrence to function
}
