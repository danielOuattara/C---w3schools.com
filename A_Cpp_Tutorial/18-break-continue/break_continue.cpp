/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
03 février 2021
---------------------------*/

/* C++ Break and Continue
========================= */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    /* C++ break
    ==============

    The "break" statement is used to jump out of a loop.*/

    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << "i = " << i << endl;
    }
    cout << "--------------------" << endl;

    //-----------------------------------------------
    int j = 0;
    while (j < 10)
    {
        cout << j << endl;
        j++;

        if (j == 7)
        {
            cout << "break on j == 7" << endl;
            break;
        }
    }

    cout << "--------------------" << endl;

    /* C++ Continue
    //-----------------------------

    The "continue" statement breaks one iteration in the loop.
    If a specified condition occurs, it continues with the next
    iteration in the loop.*/

    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            cout << "continue on i == 4" << endl;
            continue;
        }

        cout << "i = " << i << endl;
    }

    cout << "--------------------" << endl;

    //-------------------------------------------

    int k = 0;
    while (k <= 10)
    {
        if (k == 7)
        {
            k++; // necessary : WHY ???
            continue;
        }
        cout << k << endl;
        k++;
    }
}
