/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
03 février 2021
---------------------------*/

/* C++ References
================== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    // Creating References
    // --------------------

    // A reference variable is a "reference" to an existing variable,
    // and it is created with the "&" operator

    string food = "pizza"; // variable = food
    string &meal = food;   // reference variable to food

    cout << food << endl; // pizza
    cout << meal << endl; // pizza

    return 0;
}
