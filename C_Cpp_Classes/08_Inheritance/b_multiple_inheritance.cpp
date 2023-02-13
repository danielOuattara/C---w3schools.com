#include <iostream>

/* Multiple Inheritance
===========================

A class can also be derived from more than one base class,
using a comma - separated list */

// Base class

//---------------------------------------
class FatherClass
{
public:
    std::string fatherName = "John Doe";
    void fatherMethod()
    {
        std::cout << "Some content in father class." << std::endl;
    }
};

//---------------------------------------

// Another base class

class MyOtherClass
{
public:
    std::string motherName = "Anna Larson";
    void myotherMethod()
    {
        std::cout << "Some content in mother class." << std::endl;
    }
};

//---------------------------------------

// Derived class

class MyChildClass : public FatherClass, public MyOtherClass
{
public:
    std::string name = "Steeve Jones";
};

//---------------------------------------

int main(int argc, char const *argv[])
{

    MyChildClass steeve;
    std::cout << steeve.name << std::endl;
    std::cout << steeve.fatherName << std::endl;
    std::cout << steeve.motherName << std::endl;
    steeve.fatherMethod();
    steeve.myotherMethod();
    return 0;
}