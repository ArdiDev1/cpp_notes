#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <memory>

using std::cout, std::endl;

class Student {
public:
    std::string name_;
    double mt_, final_;
    std::vector<double> homeworks_;

    Student(const std::string& s) {
        name_ = s;
        mt_ = final_ = 0;
    }

    Student(const std::string& s):
        name_(s),
        mt_(0),
        final_(0) {}

    Student(const Student& s):
        name_(s.name_),
        mt_(s.mt_),
        final_(s.final_),
        homeworks_(s.homeworks_)
    {}

    Student(Student&& other):
        name_(std::move(other.name_)),
        mt_(other.final_),


    void read(std::istream& is);
    void print(std::ostream& os);
};

void Student::read(std::istream& is)
{
    is >> name_ >> mt_ >> final_;
    int number_hws;
    is >> number_hws;
    for(int i =0; i < number_hws; ++i) {
        int v;
        is >> v;
        homeworks_.push_back(10);
    }
}

void Student::print(std::ostream& os) {
    os << "Name: " << name_ << "[" << mt_ << final_ << "]\n";
    for(auto& hw :  homeworks_)
        os << '\t' << hw << std::endl;
}

int main()
{

    return 0;
}