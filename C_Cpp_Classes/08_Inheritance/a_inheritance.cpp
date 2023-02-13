
#include <iostream>

/*
C++ Inheritance
================

In C++, it is possible to inherit attributes and methods
from one class to another. We group the "inheritance concept"
into two categories:

> 'derived class' (child) - the class that inherits from another class
> 'base class' (parent)   - the class being inherited from

To inherit from a class, use the colon ':' operator

In the example below, the Car class (child) inherits the
attributes and methods from the Vehicle class (parent) */

//---------------------------

// Base class
class Vehicle
{
public:
    std::string brand = "Ford";
    void honk()
    {
        std::cout << "Tuut, tuut! \n";
    }
};

//---------------------------

// Derived class
class Car : public Vehicle
{
public:
    std::string model = "Mustang";
    void brake()
    {
        std::cout << "breaking: RhiRhiRhi !!! \n";
    }
};

//---------------------------

int main(int argc, char const *argv[])
{

    Car myCar;
    myCar.honk();
    myCar.brake();
    std::cout << myCar.brand + " " + myCar.model << std::endl;
    return 0;
}

/* Why And When To Use "Inheritance" ?
--------------------------------------
It is useful for code reusability: reuse attributes and
methods of an existing class when you create a new class. */
