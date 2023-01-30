
/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
18 decembre 2020
---------------------------*/

#include <iostream>
using namespace std;

int main()
{

  /*Constants
==============

  When you do not want others (or yourself) to change existing variable
  values, use the 'const' keyword; this will declare the variable as
  "constant", which means unchangeable and read-only */

  const int myNum = 15; // myNum will always be 15
  // myNum = 10;           // error: assignment of read-only variable 'myNum'

  /*You should always declare the variable as constant when you have
  values that are unlikely to change: */

  const int minutesPerHour = 60;
  const float PI = 3.14;

  return 0;
}
