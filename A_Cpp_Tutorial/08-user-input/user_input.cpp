/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
18 decembre 2020
---------------------------*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    /* C++ User Input
    ==================

    You have already learned that "cout" is used to
    output/print values.

    Now we will use "cin" to get user input.

    "cin" is a predefined variable that reads data
    from the keyboard with the extraction operator ">>".
    */

    int x;
    cout << "\n";
    cout << "Type a number : ";
    cin >> x;
    cout << "You have typed : " << x << "\n";
    cout << "-----------------\n";

    int y, z;
    cout << "Type 2 numbers successively : ";
    cin >> y >> z;
    cout << "You have typed : " << y << " and " << z << endl;
    cout << "-----------------\n";

    // Simple calculator
    //-------------------

    int num1, num2;
    int sum;

    cout << "Simple calculator\n";
    cout << "Type in an integer : ";
    cin >> num1;

    cout << "Type in an other integer : ";
    cin >> num2;

    sum = num1 + num2;
    cout << "Sum is : " << sum << "\n";

    return 0;
}
