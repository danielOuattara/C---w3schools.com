/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
03 février 2021
---------------------------*/

/* C++ Memory Address
======================*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{

    // Memory Address
    // ---------------

    /* In the example from the previous page, the "&" operator
       was used to create a reference variable.

       But it can also be used to get the memory address of a variable;
       which is the location of where the variable is stored on the
       computer.

       When a variable is created in C++, a memory address is assigned
       to the variable. And when we assign a value to the variable,
       it is stored in this memory address.

       To access the memory address, use the "&" operator, and the result
       will represent where the variable is stored:   */

    string food = "oranges";
    cout << food << endl;  // oranges
    cout << &food << endl; // 0x61fde0...

    /* And why is it useful to know the memory address ?
    --------------------------------------------------

        References and Pointers (which you will learn about in the next
        chapter) are important in C++, because they give you the ability
        to manipulate the data in the computer's memory - which can
        reduce the code and improve the performance.

        These two features are one of the things that make C++ stand out
        from other programming languages, like Python and Java.
*/
}
