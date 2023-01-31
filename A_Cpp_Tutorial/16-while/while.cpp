/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
02 février 2021
---------------------------*/

/* C++ While & Do ...while
=========================== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])

{

    /* while
    =========*/

    int i = 0;
    while (i < 11)
    {
        cout << i << endl;
        i++;
    }

    cout << "-----------" << endl;

    /* Do while
    ============*/

    int y = 5;
    do
    {
        cout << y << endl;
        y++;
    } while (y < 5);

    cout << "--------------------" << endl;

    // ---------------------------------------
    int z = 10;
    do
    {
        cout << "z = " << z << endl;
        z++;
    } while (z < 15);

    return 0;
}
