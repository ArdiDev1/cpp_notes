#include <iostream>
class Animal {
public:
    void Eat() {
        std::cout << "Animal Eating" << std::endl;
    }

    void Run() {
        std::cout << "Animal Running" << std::endl;
    }
};

class Dog : public Animal {
public:
    void Eat() {
        std::cout << "Dog Eating" << std::endl;
    }
};

int main() {
    Dog d;
    d.Eat();
    d.Run();
    return 0;
}