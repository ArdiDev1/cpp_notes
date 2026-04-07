#include <iostream>

using std::cout, std::endl;

// undefined behavior.
int* bad()
{
    int x = 10;
    int* p = &x;
    return p;
}

void set_to_zero_ptr(int* p)
{
    *p = 0;
}

void increment(int& value) {
    ++value;
}

int main() {
    //& is an adress operator
    int a = 5;

    int& ref = a; //create an alias for a
    ref = 5;

    int* ptr = &a;

    std::cout << a << std::endl;

    increment(ref);
    std::cout <<  ref << std::endl;

    if(ptr == nullptr)
        std::cout << "Its null: " << "\n";

    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr2 = arr;

    ptr = arr + 1;
    cout << *ptr << "\n";


    // prints infinite 
    // for(;;)
    //     cout << "hello" << "\n";

    int* p = new int(43);
    cout << *p << "\n";

    delete p;

    new int(50);

    cout << *p << "\n";

    int x = 5;
    int* array = new int[x];

    array[0] = 5;
    array[1] = 10;

    cout << array[0] << "\n";
    delete[] array;

    int test[3];

    cout << test[0] << "\n";

    return 0;
}