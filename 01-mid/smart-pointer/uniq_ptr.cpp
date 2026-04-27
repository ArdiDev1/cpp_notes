#include <iostream>
#include <memory>

using std::cout;

void foo(std::unique_ptr<int> x)
{
    cout << "x= " << x.get() << " *x= " << *x << '\n';
}

int main()
{
    /*
       unique ptr, only can have one owner 
       ownership needs to be transferred to use
    */
    std::unique_ptr uq_px = std::make_unique<int>(42);
    foo(std::move(uq_px));

    return 0;
}