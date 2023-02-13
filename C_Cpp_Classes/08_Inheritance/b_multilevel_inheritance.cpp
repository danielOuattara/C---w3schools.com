#include <iostream>

/*
C++ Multilevel Inheritance
===========================
A class can also be derived from another class,
which is already derived from another class.

In the following example, MyGrandChild is derived
from class MyChild, which is derived from MyClass */

//------------------------------------
// Base class (parent)

class GrandFather
{
public:
    int grandFatherBirthYear = 1928;
    void myFunction()
    {
        std::cout << "Some content in parent class." << std::endl;
    }
};

//------------------------------------
// Derived class (child)

class Father : public GrandFather
{
public:
    int fatcherBirthYear = 1958;
};

//------------------------------------
// Derived class (grandchild)

class Son : public Father
{
public:
    int sonBirthday = 1998;
    std::string name = "John Doe";
};

//------------------------------------
int main()
{
    Son john;
    john.myFunction();
    std::cout << john.name << "\n";
    std::cout << john.grandFatherBirthYear << std::endl;
    std::cout << john.fatcherBirthYear << std::endl;
    std::cout << john.sonBirthday << std::endl;
    return 0;
}
