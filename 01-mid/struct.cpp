#include <iostream>
#include <string>

struct Student {
private:
    size_t id;
    std::string msg;
    double gpa;

public: 
    Student(int id, std::string msg, double gpa) {
        this->id = id;
        this->msg = msg;
        this->gpa = gpa;
    }

    double getGpa() const {
        return gpa;
    }
};

int main()
{
    //Initalize
    Student s1(1, "hello", 3.45);

    std::cout << s1.getGpa() << std::endl;

    return 0;
}