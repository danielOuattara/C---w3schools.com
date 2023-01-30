/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
18 decembre 2020
---------------------------*/

/* C++ Data Types
================== */

#include <iostream>
#include <string>
using namespace std;

int main()
{

  /*
  As explained in the Variables chapter, a variable in C++
  must be a specified data type: */

  int myNum = 5;             // Integer (whole number)
  float myFloatNum = 5.99;   // Floating point number
  double myDoubleNum = 9.98; // Floating point number
  char myLetter = 'D';       // Character
  bool myBoolean = true;     // Boolean
  string myText = "Hello";   // String

  /*
  Basic Data Types
  =================

    Data Type 	Size 	    Description
    -----------------------------------------
    int 	      4 bytes   Stores whole numbers, without decimals
    ------------------------------------------------------------------------------
    float 	    4 bytes   Stores fractional numbers, containing one or
                          more decimals. Sufficient for storing 7 decimal digits
    ------------------------------------------------------------------------------
    double 	    8 bytes   Stores fractional numbers, containing one or more
                          decimals. Sufficient for storing 15 decimal digits
    ------------------------------------------------------------------------------
    boolean 	  1 byte 	  Stores true or false values
    ------------------------------------------------------------------------------
    char 	      1 byte 	  Stores a single character/letter/number, or ASCII values
    -------------------------------------------------------------------------------*/

  // Numeric Types
  // --------------

  int number1 = 1000;
  cout << number1 << "\n";

  float number2 = 3.1415926;
  cout << number2 << "\n";

  double number3 = 3.141592653589793;
  cout << number3 << "\n";

  /* float vs. double
=======================
The precision of a floating point value indicates how many digits
the value can have after the decimal point. The precision of float
is only 6 or 7 decimal digits, while double variables have
a precision of about 15 digits. Therefore it is safer to use double
for most calculations.  */

  // Scientific numbers
  //--------------------
  float f1 = 23e-7;
  cout << f1 << "\n";

  double f2 = 23e-15;
  cout << f2 << "\n";

  // Boolean Types
  //--------------
  bool isCodingFun = true;
  cout << isCodingFun << "\n"; // --> 1

  bool isSandTasty = false;
  cout << isSandTasty << "\n"; // --> 0

  // Character Types
  // ----------------
  char myGrade = 'A';
  cout << myGrade << "\n";

  // using ASCII values :

  char a = 112, b = 77, c = 105;
  cout << a << "\n"
       << b << "\n"
       << c << "\n";

  // ASCII game:  (later this can be converted to a function)

  int value;
  char ascii;

  cout << " Enter an integer : ";
  cin >> value;
  ascii = value;
  cout << "You have typed in : " << ascii << "\n";

  // STRING
  // ------

  /*NOTE: To use strings, you must include an additional header
           file in the source code, the <string> library:*/

  string greeting = "Good Morning ! ";
  cout << greeting << "\n";

  return 0;
}
