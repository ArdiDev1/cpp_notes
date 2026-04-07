#include <iostream>

//function pointer, holds adress of the function
//type is same as signature of the function
//can indirectly invoke the function
//used by algorithims and classes 

//<ret>(*fnptr)(args) = &function
// int (*ptradd)(int, int) = &add // int add(int, int)

using namespace std;

void print(int count, char ch) {
    for (int i = 0; i < count; i++)
    {
        cout << ch;
    }
    cout << endl;
}

int main() {
    void (*fptr) (int, char) =  &print;// name also denotes adress, & optional

    (*fptr)(8, 'd');
    fptr(8, 5);
}