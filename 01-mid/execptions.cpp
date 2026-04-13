#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>

using std::cout, std::endl, std::string;

int divide(int a, int b)
{
    if(b == 0)
        throw std::runtime_error("Div by zero");

    return a / b;
}

int main()
{
    try {
        cout << divide(10, 0);
    } catch(const std::exception& e) {
        cout << "Error!" << e.what() << std::endl;
    }

    std::vector<int> v;
    return 0;
}