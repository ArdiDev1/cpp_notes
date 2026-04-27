#include <iostream>
#include "cls.h"
#include <memory> // contains smart pointers

// In large programs, it may not always be possible to remeber
// to call delete everytime you call new 

//Smart pointer behaves like pointer, but automatically frees the memory
// standard library has such functions


class IntPtr {
    Integer *m_p;

public:
    IntPtr(Integer *p) : m_p(p) {}

    Integer *operator ->() {
        return m_p;
    }

    Integer &operator *() {
        return *m_p;
    }

    ~IntPtr() {
        delete m_p;
    }
};  

//C++ emphasizes use of smart pointers and not raw pointers
void CreateInteger() {
    std::unique_ptr<Integer> p(new Integer);
    //unique pointers are used when underlying resources are not 
    //to be used, cannot be copied, since unique pointer's copy 
    //constructor is a deleted function
    //Can be moved, but does not have copy semantics, using std::move
    
    //shared pointer is used when you want to share underlying resource 
    // with other parts of the code, maintains a refrence counter,
    // every time a copy is made the refrence count is incremented by one
    // when a shared pointer is destroyed, refrence count is decremented,
    // when it reaches zero, the memory of the underlying resource is released
    std::shared_ptr<Integer> p2(new Integer);

    p->SetValue(4);
    std::cout << p->GetValue() << std::endl;
}

int main() {
    CreateInteger();

    return 0;
}