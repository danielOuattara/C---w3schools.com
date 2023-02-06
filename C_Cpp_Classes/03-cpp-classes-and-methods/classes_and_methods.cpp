/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
06 février 2021
---------------------------*/

/* C++ Classes Methods
====================== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/* Class Methods
=================

Methods are functions that belongs to the class.

There are two ways to define functions that belongs to a class:
  >  Inside class definition
  >  Outside class definition

In the following example, we define a function inside the class,
and we name it "myMethod".

Note: You access methods just like you access attributes: by creating
      an object of that class and by using the dot syntax (.):  */

// class MyClass
// {
// public:
//   void myMethod()
//   { // Method/function defined inside the class
//     cout << "Hello World!\n";
//   }
// };

// int main()
// {
//   MyClass myObj;    // Create an object of MyClass
//   myObj.myMethod(); // Call the method
//   return 0;
// }

/* To define a function outside the class definition, you have to "declare"
it inside the class and then define it outside of the class.
This is done by specifiying the name of the class, followed the scope
resolution '::' operator, followed by the name of the function: */

class MyClass
{
public:
  void myMethod_1() // method declaration
  {
    cout << "Hello Classes Methods." << endl; // method definition
  }

  void myMethod_2(); // Method  declaration
};

void MyClass::myMethod_2()
{
  cout << "Method declared in a class but defined outside of it." << endl;
}

/*Parameters
=============
You can also add parameters to methods*/

//-----------------------------
class Car
{
public:
  int speedMethod_1(int maxSpeed) // definition & declaration & parameter
  {
    return maxSpeed;
  };

  int speedMethod_2(int maxSpeed); // declaration & parameter
};

int Car::speedMethod_2(int maxSpeed)
{
  return maxSpeed;
}

//--------------------------------
class MySecondClass
{
public:
  int myNumber;
  string myString;

  void myFirstMethod()
  {
    cout << "My first method from class MySecondClass" << endl;
  }

  void firstIntMethod(int speed = 130)
  {
    cout << "Maximum speed on speed ways is : " << speed << endl;
  }

  void mySecondMethod();

  int secondIntMethod(int value);
};

void MySecondClass::mySecondMethod()
{
  cout << "My Second method from class MySecondClass" << endl;
}

int MySecondClass::secondIntMethod(int value = 7)
{
  return (value + 3) / 2 % 3;
}

class SuperCar
{

public:
  string brand;
  string model;
  int year;
};

int main(int argc, char const *argv[])
{

  MyClass myObject;
  cout << "------------------" << endl;
  myObject.myMethod_1();
  myObject.myMethod_2();

  cout << "------------------" << endl;
  Car car_1;
  cout << car_1.speedMethod_1(2000) << endl;
  cout << car_1.speedMethod_2(3000) << endl;

  return 0;
}
