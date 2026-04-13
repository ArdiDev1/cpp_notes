#include "car.h"
#include <iostream>

int Car::totalCount = 0; // accessable in all member functions

Car::Car()
{
    std::cout << "Car()" << std::endl;

    fuel = 0;
    speed = 0;
    passengers = 0;
    totalCount++;
}

Car::Car(float fuel, int passangers)
{
    ++totalCount;
    this->fuel = fuel;
    this->passengers = passangers;
    speed = 0; 

}

//this pointer, hidden pointer passed to member functions 
// points to the object that invoked the member function
// Provided as a keyword that is meaningful only in member functions
Car::Car(float fuel, float speed, int passengers) {
    //this is implicit, however we use this to avoid variable duplication
    // fuel = fuel, would be impossible for compiler to know which one is which
    this->fuel = fuel;
    this->speed = speed;
    this->passengers = passengers;
    totalCount++;
}

Car::~Car()
{
    std::cout << "~Car()" << std::endl;
    totalCount--;
}

void Car::FillFuel(float amount)
{
    fuel = amount;
}

void Car::Accelerate()
{   
    speed++;
    fuel -= 0.5f;
}

void Car::Brake()
{
    speed = 0;
}

void Car::AddPassengers(int count)
{
    passengers = count;
}

void Car::Dashboard()
{
    std::cout << "Fuel:" << fuel << std::endl;
    std::cout << "Speed:" << speed << std::endl;
    std::cout << "Passengers:" << passengers << std::endl;
}

void Car::CarCount()
{
    std::cout << "Total cars: " << totalCount << std::endl;
}

const void Car::ShowFuel()
{
    std::cout << fuel << std::endl;
}
