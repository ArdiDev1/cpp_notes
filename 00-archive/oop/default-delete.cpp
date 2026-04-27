#include <iostream>

class Integer {
public:
    int m_value { 0 };

    Integer() = default; // makes default constructor, added in c++ 11

    //image we dont want someone to make a copy of our object
    Integer(const Integer&) = delete; // 

    Integer(int value) {
        m_value = value;
    }

    //cannot be invoked if a float is passed in 
    void SetValue(float) = delete;

    void SetValue(int value) {
        m_value = value;
    }
};

int main() {
    Integer i1;
    Integer i2(3);
    return 0;
}