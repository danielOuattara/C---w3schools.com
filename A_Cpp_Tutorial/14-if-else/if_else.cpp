/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
02 février 2021
---------------------------*/

/* C++ If... else if ... else
=============================== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{

    // If statement
    //---------------

    if (20 > 18)
    {
        cout << "20 is greater than 18" << endl;
    }

    // Else  statement
    //----------------

    int time = 20;

    if (time < 18)
    {
        cout << "Good day !" << endl;
    }

    else
    {
        cout << "Good evening !" << endl;
    }

    // Else If statement
    // -----------------

    int hours = 12;

    if (hours < 11)
    {
        cout << "Good morning !" << endl;
    }

    else if (hours < 18)
    {
        cout << "Good afternoon !" << endl;
    }

    else
    {
        cout << " Good evening !" << endl;
    }

    // Short hand If... Else: Ternary Operator
    //-----------------------------------------

    int time2 = 20;
    string result = (time2 < 18) ? "Good Day Ternary !" : "Good Evening Ternary";
    cout << result << endl;

    string moment = "Morning";
    string greeting = (moment == "Morning") ? "Good Morning" : "Good Evening !";
    cout << greeting << endl;

    /*

    Comparaison Operators
    =======================

    Operator 	Name 	                      Example
    ----------------------------------------------
    == 	      Equal to 	                  x == y
    != 	      Not equal 	                x != y
    > 	      Greater than 	              x > y
    < 	      Less than 	                x < y
    >= 	      Greater than or equal to 	  x >= y
    <= 	      Less than or equal to 	    x <= y


    Logical Operators
    ==================

    Operator 	 Name 	         Description 	                Example
    --------------------------------------------------------------------------
    &&  	     Logical and     Returns true if both  	        x < 5 &&  x < 10
                                 statements are true
    --------------------------------------------------------------------------
    ||  	     Logical or 	 Returns true if one  	        x < 5 || x < 4
                                 of the statements is true
    --------------------------------------------------------------------------
    ! 	         Logical not 	 Reverse the result, returns  	!(x < 5 && x < 10)
                                 false if the result is true
    --------------------------------------------------------------------------*/

    return 0;
}
