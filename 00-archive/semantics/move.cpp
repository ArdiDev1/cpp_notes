#include "integer.h"
#include <iostream>

/* 
    Copy & Move Semantics
    Copy of obeject state is created 
    Wasteful in case copy is created from temporary
    Instead, the state can be moved from the source object
*/
Integer Add(const Integer &a, const Integer &b) {
    Integer temp;
    temp.SetValue(a.GetValue() + b.GetValue());
    return temp;
}

int main() {
    Integer a(1), b(3);
    a.SetValue(Add(a, b).GetValue());
    return 0;
}