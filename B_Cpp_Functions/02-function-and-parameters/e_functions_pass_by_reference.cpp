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
===========================

    In the examples from the previous pages, we used normal
    variables when we passed parameters to a function.

    You can also pass a reference to the function. This can be
    useful when you need to change the value of the arguments: */

void swapNumbers(int &x, int &y)
{
  int z = x;
  x = y;
  y = z;
}

int main()
{
  int firstNumber = 10;
  int secondNumber = 20;

  cout << "Before swap : " << endl;
  cout << firstNumber << " " << secondNumber << endl;

  swapNumbers(firstNumber, secondNumber);

  cout << " after swap :" << endl;
  cout << firstNumber << "  " << secondNumber << endl;

  return 0;
}
