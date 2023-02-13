#include <iostream>

/*

 Inheritance Access Specifiers
================================

You learned from the Access Specifiers chapter that there
are three specifiers available in C++. Until now, we have
only used public (members of a class are accessible from
outside the class) and private (members can only be accessed
within the class).
The third specifier, protected, is similar to private, but
it can also be accessed in the inherited class: */

//----------------------------------------

// Base class
class Employee
{
protected: // Protected access specifier
    int salary;
};

//----------------------------------------

// Derived class
class Programmer : public Employee
{
public:
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};

//----------------------------------------

int main(int argc, char const *argv[])
{

    Programmer rambo;
    rambo.setSalary(50000);
    rambo.bonus = 15000;
    std::cout << "Salary: " << rambo.getSalary() << "\n";
    std::cout << "Bonus: " << rambo.bonus << "\n";
    return 0;
}