
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

  /* Declare variables
    --------------------*/

  // <type> <variable_name> = <value>;

  int number_1;
  number_1 = 15;

  cout << number_1 << endl;
  cout << number_1 << '\n';

  int number_2 = 7;
  cout << number_2 << endl;

  // overwriting existing variable value
  //-------------------------------------
  int number_3 = 10;
  number_3 = 11;
  cout << number_3 << endl;

  // other type of variables
  //------------------------
  int myNum = 5;            // Integer (whole number without decimals)
  double myFloatNum = 5.99; // Floating point number (with decimals)
  char myLetter = 'D';      // Character
  string myText = "Hello";  // String (text)
  bool myBoolean = true;    // Boolean (true or false)

  // Display Variables
  //-------------------
  int age = 37;

  cout << "I am " << age << " y.o \n";

  // Add Variables Together
  //-------------------------
  int x = 5;
  int y = 11;
  cout << x << " + " << y << " = " << x + y << "\n";

  // Declaring Mutliple Variables
  //-----------------------------
  int a = 1, b = 2, c = 21;

  /* C++ Identifiers
    -------------------
    The general rules for constructing names for variables (unique identifiers) are:

    > Names can contain letters, digits and underscores
    > Names must begin with a letter or an underscore (_)
    > Names are case sensitive (myVar and myvar are different variables)
    > Names cannot contain whitespaces or special characters like !, #, %, etc.
    > Reserved words (like C++ keywords, such as int) cannot be used as names

    */

  int minutesPerHour = 60;

  double rate_of_growth = 2.45;

  // Constants
  // ---------

  const int VARIABLE = 10;

  const float PI = 3.14159;

  const int MINUTES_IN_HOUR = 60;

  return 0;
}
