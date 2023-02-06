/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
04 février 2021
---------------------------*/

/* C++ Functions
==================*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/* A function is a block of code which only runs when it is
  called.

  You can pass data, known as parameters, into a function.
  Functions are used to perform certain actions, and they are
  important for reusing code: Define the code once, and use it
  many times. */

/* Create a Function
   =================

    C++ provides some pre-defined functions, such as main(), which
    is used to execute code.

    But you can also create your own functions to perform certain
    actions.

    To create (declare) a function, specify the name of the function,
    followed by parentheses ():

   Syntax
   ------

   void myFunction() {
   // code to be executed
   }

   Example Explained
   ------------------

    > myFunction() is the name of the function

    > "void" means that the function does not have a return value.
      (learn more about return values later in the next chapter)

    > inside the function (in the body), add code lines that define
      what the function does  */

/* Call a Function
===================

    Declared functions are not executed immediately.
    They are "saved for later use", and will be executed later,
    when they are called.

    To call a function, write the function's name followed by two
    parentheses () and a semicolon ;

    In the following example, "myFunction()" is used to print a text
    (the action) when it is called: */

void myFunction()
{
  cout << "Hello World !" << endl;
}

int main()
{

  myFunction();
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

/* Function Declaration and Definition
=======================================

A C++ function consist of two parts:

   > Declaration: the function's name, return type, and
                  parameters (if any)
   > Definition: the body of the function (code to be executed) */

/* Note:
--------
If a user-defined function, such as myFunction()
is declared after the main() function, an error will occur.
It is because C++ works from top to bottom; which means that
if the function is not declared above main(), the program is
unaware of it:

However, it is possible to separate the declaration and the
definition of the function - for code optimization.

You will often see C++ programs that have function declaration
above main(), and function definition below main(). This make
the code better organized and easier to read:*/

void myFunction(); //  <---- Function declaration

int main()
{               // The main method
  myFunction(); // call the function
  return 0;
}

void myFunction()
{ // <---- Function definition
  cout << "I just got executed!";
}
