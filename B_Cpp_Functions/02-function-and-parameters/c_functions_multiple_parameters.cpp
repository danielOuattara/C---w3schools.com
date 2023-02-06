/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
05 février 2021
---------------------------*/

/* C++ Functions multiple parameters
==================================== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/* Default Parameter Value
===========================
Inside the function, you can add as many parameters as
you want:*/

void myFunction(string country = "Norway", int population = 10)
{
    cout << "I come from " + country + "  population is " << population << " millions" << endl;
}

void myFunction_2(string firstName = "firstName", int age = 1)
{
    cout << "I'am " + firstName + " I am " << age << " y.o" << endl;
}

int main()
{

    myFunction();
    myFunction("Burkina Faso", 20);
    myFunction("Africa", 25000);
    myFunction("Sahel");
    myFunction("Earth");

    //-----------
    cout << "-----------------------\n\n";

    myFunction_2("John", 37);
    myFunction_2();
    return 0;
}

/* Note that when you are working with multiple parameters,
   the function call must have the same number of arguments
   as there are parameters, and the arguments must be passed
   in the same order.*/
