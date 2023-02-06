/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
04 février 2021
---------------------------*/

/* C++ Functions default parameters
==================================== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

/* Default Parameter Value
==========================

You can also use a default parameter value, by using the equal
sign (=).

If we call the function without an argument, it uses this
default value :*/

void myFunction(string country = "Norway")
{
    cout << "I come from " + country << endl;
}

int main()
{

    myFunction();
    myFunction("Burkina Faso");
    myFunction("Africa");
    myFunction("Sahel");
    myFunction();
    return 0;
}

/* A parameter with a default value, is often known as
an "optional parameter".

From the example above, country is an optional parameter
and "Norway" is the default value.*/
