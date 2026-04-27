#include <iostream>

enum Status {
    PENDING,
    APPROVED,
    REJECTED
};

class Rectangle {
private:
    double width;
    double height;
    Status currStatus;

public:
    Rectangle(double w, double h)
        : width(w), height(h) {}

    double getWidth() const {
        return width;
    }
    
    void setStatus(Status s) {
        currStatus = s;
    }

    Status getStatus() const {
        return currStatus;
    }
};

int main() 
{
    Rectangle* rect = new Rectangle(4.3, 43.5);

    std::cout << rect->getWidth() << std::endl;

    rect->setStatus(APPROVED);

    std::cout << rect->getStatus() << std::endl;

    return 0; 
}