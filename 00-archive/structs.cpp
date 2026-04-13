#include <iostream>
#include <string>

struct Address
{
    // represent priv variable
    std::string street_;
    std::string city;
};

struct Student 
{
    std::string name;
    int id;
    double gpa;
    Address addr;
};

int main()
{
    Student* student { };
    

    return;
}