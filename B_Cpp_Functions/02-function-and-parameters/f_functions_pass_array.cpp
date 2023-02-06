/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
05 février 2021
---------------------------*/

/* C++ Pass Array to a Function
=================================== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/* Pass Arrays as Function Parameters
========================================

You can also pass arrays to a function:*/

void myFunction(int arrayOfInt[5])
{
  for (int i = 0; i < 5; i++)
  {
    cout << arrayOfInt[i] << "\n";
  }
}

int main()
{
  int myNumbers[5] = {10, 20, 30, 40, 50};
  myFunction(myNumbers);
  return 0;
}

/*
The function (myFunction) takes an array as its parameter
(int myNumbers[5]), and loops through the array elements
with the for loop.

When the function is called inside main(), we pass along
the myNumbers array, which outputs the array elements.

Note that when you call the function, you only need to use
the name of the array when passing it as an argument
myFunction(myNumbers).

However, the full declaration of the array is needed in the
function parameter (int myNumbers[5]).
 */