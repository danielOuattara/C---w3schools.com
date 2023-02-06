/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
05 février 2021
---------------------------

C++ Functions Overloading
=========================
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/* Function Overloading
------------------------

  With function overloading, multiple functions can have the
  same name with different parameters:

  example
  -------
  int myFunction(int x);
  float myFunction(float x);
  double myFunction(double x, double y); */

int plusFuncInt(int x, int y)
{
  return x + y;
}

double plusFuncDouble(double x, double y)
{
  return x + y;
}

/*
  Instead of defining two functions that should do the
  same thing, it is better to overload one.

  In the example below, we overload the plusFunc function
  to work for both int and double: */

int plusFunc(int x, int y)
{
  return x + y;
}

double plusFunc(double x, double y)
{
  return x + y;
}

int main()
{

  //----------------------------------------
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2 << endl;

  //----------------------------------------

  int myNum_v2_1 = plusFunc(8, 5);
  double myNum_v2_2 = plusFunc(-4.3, 12.453);

  cout << myNum_v2_1 << endl;
  cout << myNum_v2_2 << endl;

  return 0;
}

/* Note: Multiple functions can have the same name as long as
   the number and/or type of parameters are different. */