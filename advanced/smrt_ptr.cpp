#include <iostream>
#include <memory>

template <class T>
std::ostream& operator << (
    std::ostream& os,
    const std::unique_ptr<T>& p
) {
    return os <<p.get
}

int main() {
    std::unique_ptr<int> old_p(new int);
    *old_p = 42;

    auto new_p = std::make_unique<int>(24);
    *new_p = 32;
}