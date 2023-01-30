/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
18 decembre 2020
---------------------------*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{

  /* String Types
  ================

  The 'string' type is used to store a sequence of
  characters/text.

  This is not a built-in type, but it behaves like
  one in its most basic usage.

  String values must be surrounded by double quotes */

  string greeting = "Hello";
  cout << greeting << endl;

  /*
  To use strings, you must include an additional header
  file in the source code, the <string> library: */
  // #include <string>

  // Create a string variable
  string greeting2 = "Hello Again !";

  // Output string value
  cout << greeting2 << endl;

  /* You will learn more about strings, in our C++ Strings Chapter */

  return 0;
}
