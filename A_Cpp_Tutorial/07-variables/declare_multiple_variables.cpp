
/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
18 decembre 2020
---------------------------*/

/*

C++ Variables
==============

Variables are containers for storing data values.

In C++, there are different types of variables,
defined with different keywords, for example:

---------------------------------------------------------------------------------
>  int    - stores integers (whole numbers), without decimals, such as 123 or -123
---------------------------------------------------------------------------------
>  double - stores floating point numbers, with decimals, such as 19.99 or -19.99
---------------------------------------------------------------------------------
>  char   - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
---------------------------------------------------------------------------------
>  string - stores text, such as "Hello World". String values are surrounded by double quotes
---------------------------------------------------------------------------------
>  bool   - stores values with two states: true or false
--------------------------------------------------------------------------------- */

#include <iostream>

using namespace std;

int main()
{

  /* Declare Many Variables
  ===========================

  To declare more than one variable of the same type, use a comma-separated list: */

  int x = 5, y = 6, z = 50;

  cout << x + y + z << endl;

  /* One Value to Multiple Variables
  ===================================

  You can also assign the same value to multiple variables in one line: */

  int a, b, c;
  a = b = c = 50;
  cout << a + b + c << endl;

  return 0;
}
