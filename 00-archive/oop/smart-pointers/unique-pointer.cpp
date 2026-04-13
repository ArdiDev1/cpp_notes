#include <iostream>
#include <memory>

struct Integer
{
    int *m_pInt;

    Integer(int value) {
        *m_pInt = value;
    }

    void SetValue(int value) {
        *m_pInt = value;
    }
};


int main() {
    Integer *p = new Integer(5);


    //<> represent type
    std::unique_ptr<Integer> p; 
 
    return 0;
}