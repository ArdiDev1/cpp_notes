#include <iostream>

class Integer {
    int* value_;

public:
    // Default constructor
    Integer() : value_(new int(0)) {}

    // Constructor
    Integer(int value) : value_(new int(value)) {}

    // Destructor
    ~Integer() {
        delete value_;
    }

    // Copy constructor (deep copy)
    Integer(const Integer& i) : value_(new int(*i.value_)) {}

    // Copy assignment
    Integer& operator=(const Integer& a) {
        if (this == &a) return *this;

        delete value_;
        value_ = new int(*a.value_);
        return *this;
    }

    // Move constructor
    Integer(Integer&& other) {
        value_ = other.value_;
        other.value_ = nullptr;
    }

    // Move assignment
    Integer& operator=(Integer&& other) noexcept {
        if (this == &other) return *this;

        delete value_;
        value_ = other.value_;
        return *this;
    }

    int GetValue() const {
        return *value_;
    }

    void SetValue(int value) {
        *value_ = value;
    }

    Integer operator+(const Integer& a) const {
        return Integer(*value_ + *a.value_);
    }

    bool operator==(const Integer& obj) const {
        return *value_ == *obj.value_;
    }
};

int main() {
    Integer a(1), b(3);
    Integer sum = a + b;
    a = b;

    std::cout << a.GetValue() << std::endl;
    std::cout << sum.GetValue() << std::endl;

    return 0;
}