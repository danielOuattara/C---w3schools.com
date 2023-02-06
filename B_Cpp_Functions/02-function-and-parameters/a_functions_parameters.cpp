/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
04 février 2021
---------------------------*/

/* C++ Functions parameters
============================ */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/* Parameters and Arguments
    ------------------------------

    Information can be passed to functions as a parameter.
    Parameters act as variables inside the function.
    Parameters are specified after the function name, inside
    the parentheses. You can add as many parameters as you want,
    just separate them with a comma:

    Syntax
    ------

    void functionName(param_1, param_2, param_3,...) {
      // code to be executed
    }

   The following example has a function that takes a string
   called "fname" as parameter. When the function is called,
   we pass along a first name, which is used inside the function
   to print the full name:  */

void myFunction(string fname)
{
  cout << fname << " Doe " << endl;
}

int main()
{
  myFunction("Jeany");
  myFunction("Bob");
  myFunction("Antony");
  myFunction("Tiiiga");
  return 0;
}

/* When a "parameter" is passed to the function, it is called
an "argument". So, from the example above: "fname" is a parameter,
 while "Liam", "Jenny" and "Anja" are arguments. 
 
 */
