#include <iostream>

int main() {
    // new, allocates memory on the heap;
    // delete: deallocates memory
    // can initalize memor
    // can call constructors
    // new throws exception on faliure; 
    int *p = new int;
    
    //can initalize when variable is declared 
    int *p = new int(5); 
    
    delete p;
    p = nullptr; // to avoid dangling pointer


    return 0;
}