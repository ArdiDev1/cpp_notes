#include <iostream>

#pragma once
#include <iostream>

class Complex{
    double real_;
    double imag_;
    Complex add(const Complex& c2) const;
    void print(std::ostream& os) const;
public:
    // DEFAULT
    Complex(): real_(0), imag_(0) {}
    // CUSTOM
    Complex(double a, double b
            ): real_(a), imag_(b) {}
    // COPY
    Complex(const Complex& c):
        real_(c.real_),
        imag_(c.imag_) {}
    // COPY ASSIGNMENT
    Complex& operator=(const Complex& c) {
        real_ = c.real_;
        imag_ = c.imag_;
        return *this;
    }
    
    Complex add(const Complex& c) const{
        return Complex(real_ + c.real_, imag_ + c.imag_);
    }
    
    Complex operator+(const Complex& c) {
        return this->add(c);
    }

    friend Complex operator+(double a, const Complex& b) {
        return Complex(
            b.real_ + a,
            b.imag_
        );
    }

    friend Complex operator+(const Complex& b, double a) {
        return Complex(
            b.real_ + a,
            b.imag_
        );
    }

    void print(std::ostream& os) {
        os << "(" << real_ << "+" << imag_ << "i)\n";
    }
};

int main() 
{
    Complex c1(1.3, 3.2);
    c1.print(std::cout);

}
