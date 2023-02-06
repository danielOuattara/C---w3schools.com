/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
05 février 2021
---------------------------*/

/* C++ Functions default parameters
=================================== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/* Default Parameter Value
============================

The "void" keyword, used in the previous examples, indicates that
the function should not return a value. If you want the function
to return a value, you can use a data type (such as int, string,
etc.) instead of void, and use the "return" keyword inside the
function:  */

int myFunction(int x)
{
  return 5 + x;
}

float myFunction_2(int x, double y)
{
  return x + y;
}

double myFunction_3(int x, double y)
{
  return x + y;
}

int main()
{

  cout << myFunction(12) << endl;
  int y;
  cout << " Type in an integer :";
  cin >> y;
  int z = myFunction(20) + y;
  cout << "z  = " << y << " + " << myFunction(20) << " = " << z << endl;
  // ----------------------------------------------------------
  int result = myFunction(1);
  cout << result << " * " << 12 << " = " << result * 12 << endl;
  // ----------------------------------------------------------
  cout << myFunction_2(12, 3.14256246) << endl;
  // ----------------------------------------------------------
  cout << myFunction_3(12, 3.14256246) << endl;

  return 0;
}

/* A parameter with a default value, is often known as
an "optional parameter".

From the example above, country is an optional parameter
and "Norway" is the default value.*/
