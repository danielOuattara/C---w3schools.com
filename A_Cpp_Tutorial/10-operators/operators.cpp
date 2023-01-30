/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
01 février 2021
---------------------------*/

/* C++ Data Types
==================  */

#include <iostream>
#include <string>

using namespace std;

int main()
{
  int sum_1 = 100 + 50;    // 150
  int sum_2 = sum_1 + 250; //  400
  int sum_3 = sum_2 + 14;  // 414

  /* Arithmetic Operators
  =========================

  Operator 	Name  	        Description 	                          Example
  ----------------------------------------------------------------------------
  + 	      Addition 	      Adds together two values 	              x + y
  - 	      Subtraction     Subtracts one value from another 	      x - y
  * 	      Multiplication 	Multiplies two values 	                x * y
  / 	      Division 	      Divides one value by another 	          x / y
  % 	      Modulus  	      Returns the division remainder 	        x % y
  ++ 	      Increment 	    Increases the value of a variable by 1 	++x
  -- 	      Decrement 	    Decreases the value of a variable by 1 	--x


  Assignment Operators
  ======================

  Operator 	Example 	Same As
  ----------------------------------
  =  	      x = 5 	  x = 5
  += 	      x += 3 	  x = x + 3
  -= 	      x -= 3 	  x = x - 3
  *= 	      x *= 3 	  x = x * 3
  /= 	      x /= 3 	  x = x / 3
  %= 	      x %= 3 	  x = x % 3
  &= 	      x &= 3 	  x = x & 3
  |= 	      x |= 3 	  x = x | 3
  ^= 	      x ^= 3 	  x = x ^ 3
  >>= 	    x >>= 3 	x = x >> 3
  <<= 	    x <<= 3 	x = x << 3


  Comparaison Operators
  ==========================

  Operator 	Name 	                      Example
  ----------------------------------------------
  == 	      Equal to 	                  x == y
  != 	      Not equal 	                x != y
  > 	      Greater than 	              x > y
  < 	      Less than 	                x < y
  >= 	      Greater than or equal to 	  x >= y
  <= 	      Less than or equal to 	    x <= y


   Logical Operators
  =====================

  Operator 	 Name 	       Description 	                  Example
  --------------------------------------------------------------------------
  &&  	     Logical and 	 Returns true if both  	        x < 5 &&  x < 10
                           statements are true
  --------------------------------------------------------------------------
  ||  	     Logical or 	 Returns true if one  	        x < 5 || x < 4
                           of the statements is true
  --------------------------------------------------------------------------
  ! 	       Logical not 	 Reverse the result, returns  	!(x < 5 && x < 10)
                           false if the result is true
  --------------------------------------------------------------------------
  */

  return 0;
}
