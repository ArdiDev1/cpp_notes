#include <iostream>

int add(int* a, int* b) {
    return *a + *b;
}

void AddVal(int* a, int* b, int* result) {
    *result = *a + *b;
}

void Swap(int* a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main() {
    int a = 5, b = 6;

    int result{};

    std::cout << "Sum: " << add(&a, &b) << std::endl;

    AddVal(&a, &b, &result);

    std::cout << "AddVal: " << result  << std::endl;

    Swap(&a, &b);

    std::cout << "Swap: " << a << ", " << b << std::endl;
}