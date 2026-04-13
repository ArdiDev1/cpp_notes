#include <iostream>
#include <vector>

using std::cout, std::endl, std::vector;

template <class T>
T sum(const vector<T>& vec) {
    T ttl{};
    for(const T& x : vec)
        ttl += x;
    return ttl;
}

int main() {

}