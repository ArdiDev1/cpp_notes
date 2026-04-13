#include <iostream>
#include <string>
#include <unordered_map>

using std::string;

int main()
{
    std::unordered_map<int, string> students;
    students[1001] = "Hello";
    students[1002] = "World";

    std::cout << students[1001] << std::endl;
    
    return 0;
}