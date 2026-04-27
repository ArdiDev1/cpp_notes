#include <concepts>

template <typename T>
concept Comparable =
    requires(T a, T b) {
        {a > b} -> std::convertible_to<bool>
    }
