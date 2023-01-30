/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
02 février 2021
---------------------------*/

/* C++ Booleans
================ */

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{

    /* Boolean Values
    --------------------
    A boolean variable is declared with the 'bool' keyword and
    can only take the values "true" or false" */

    bool isCodingFun = true;
    cout << isCodingFun << endl;

    bool isSandTasty = false;
    cout << isSandTasty << endl;

    // Booleans Expression
    int x = 10;
    int y = 9;
    cout << (x > y) << endl; // 1

    // OR

    cout << (10 == 9) << endl; // 0

    int number = 10;
    cout << (number == 10) << endl;

    cout << (15 == 10) << endl;

    // Real Life Example
    int myAge = 25;
    int votingAge = 18;

    cout << (myAge >= votingAge); // returns 1 (true), meaning 25 year olds are allowed to vote!

    return 0;
}
