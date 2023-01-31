/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
02 février 2021
---------------------------*/

/* C++ Switch
============== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])

{
    int day = 4;

    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thrusday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    }

    // Default
    // ---------

    int today = 4;
    switch (today)
    {

    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Looking forward to the weekend" << endl;
    }

    return 0;
}
