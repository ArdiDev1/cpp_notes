#include <iostream>
#include <memory>

using std::cout;

void foo(std::shared_ptr<int> ptr) {
    cout << "p in foo: " << ptr.get() << "\n";
}

void bar(std::shared_ptr<int> ptr) {
    cout << "p in foo: " << ptr.get() << "\n";
}

int main()
{
    /* 
        shared pointer retain ownership of object through pointer 
        several shared pointer objects may own same object, maintain 
        ref count through control block.
    */
    auto p = std::make_shared<int>(42) ;
    auto q = p ;
    std::cout << " q is " << q << std::endl ;
    foo(q) ;
    std::cout << " after foo q is " << std::endl ;
    std::cout << " Before bar = " << q << std::endl ;
    bar( q ) ;
    std::cout << " After bar " << q << std::endl ;
    q.reset () ;
    std::cout << " After q.reset() " << p << std::endl ;
    p.reset () ;
    std::cout << " After p.reset() " << p << std::endl ;

    return 0;
}