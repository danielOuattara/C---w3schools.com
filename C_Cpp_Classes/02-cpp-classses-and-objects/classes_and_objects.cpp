/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
06 février 2021
---------------------------

 C++ Classes and Objects
========================== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/* C++ is an object-oriented programming language.
Everything in C++ is associated with "classes" and "objects", along with
its "attributes" and "methods".

For example: in real life, a car is an object. The car has 'attributes',
such as weight and color, and 'methods', such as drive, brake, tunr left,
turn right, etc...

Attributes and methods are basically variables and functions that belongs
to the class. These are often referred to as "class members".

A class is a user-defined data type that we can use in our program, and it
works as an object constructor, or a "blueprint" for creating objects. */

/* Create a Class
=================

To create a class, use the "class" keyword:*/

class MyClass
{                  // The class
public:            // Access specifier
  int myNumber;    // Attribute (int variable)
  string myString; // Attribute (string variable)
};

class Car
{
public:
  string brand;
  string model;
  int year;
};

class Spy
{
private:
  string name;
  int age;
  bool wearWeapons;

public:
  string countryOfOrigin;
  int salary;
};

/*
  > The "class" keyword is used to create a class called " MyClass ".

  > The "public" keyword is an access specifier, which specifies that
    members (attributes and methods) of the class are accessible from
    outside the class. You will learn more about access specifiers later.

  >  Inside the class, there is an integer variable 'myNumber' and a string
    variable 'myString'. When variables are declared within a class,
    they are called attributes.

  > The class definition ends with a semicolon ;. */

/*
   Create an Object
   =================

   In C++, an object is created from a class. We have already created the
   class named MyClass, so now we can use it to create objects.

   To create an object from MyClass, specify the class name, followed by the
   object name.

   To access the class attributes (myNum and myString), use the dot syntax (.)
   on the object:*/

int main(int argc, char const *argv[])
{
  MyClass myObject; // create an object from MyClass

  // Access attributes and set values
  myObject.myNumber = 15;
  myObject.myString = " Hello C++ Classes & Objects ";

  cout << myObject.myNumber << myObject.myString << '\n';

  // Multiple objects -----------------------------

  Car carObject_1; // first object
  carObject_1.brand = "BMW";
  carObject_1.model = " 320 IXS";
  carObject_1.year = 2021;

  cout << carObject_1.brand << " " << carObject_1.model << " "
       << carObject_1.year << '\n'
       << endl;

  // ------------------------------------------------
  Car carObject_2; // second object
  carObject_2.brand = "BMW";
  carObject_2.model = " 322 IXS";
  carObject_2.year = 2022;

  cout << carObject_2.brand << " " << carObject_2.model << " "
       << carObject_2.year << '\n'
       << endl;

  // ---------------------------------------------------

  Spy jamesBond;
  // jamesBond.name = "James Bond";  // Error : name is inaccessible as private attibute
  jamesBond.countryOfOrigin = "England";
  jamesBond.salary = 123000;

  cout << "James Bond is from " << jamesBond.countryOfOrigin << ". He is paid £" << jamesBond.salary << " per year, not including extras, like kissing girls and driving speed cars and other... " << endl;

  return 0;
}
