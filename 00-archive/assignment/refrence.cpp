#include <iostream>

void add(int a, int b, int &result) {
    result = a + b;
}

void Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int result, a = 5, b = 6;

    add(a, b, result);
    std::cout << "Added: " << result << std::endl;

    Swap(a, b);
    std::cout << "Swapped: " << a << ", " << b << std::endl;
    
}