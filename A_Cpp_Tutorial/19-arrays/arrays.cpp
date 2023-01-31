/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
03 février 2021
---------------------------*/

/* C++ Array
============== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

    // Declaring
    //-----------
    string cars[4] = {"Volvo", "BMW", "Audi", "Mazda"};

    int myNumbers[3] = {10, 20, 30};

    // Accessing elements
    // ------------------
    cout << cars[0] << endl;
    cout << myNumbers[2] << endl;
    cout << "--------------------" << endl;

    // Change an Array Element
    // -----------------------
    cars[0] = "Opel";
    cout << cars[0] << endl; // Opel
    cout << "--------------------" << endl;

    // Loop Through an Array
    // ----------------------
    string fruits[4] = {"banana", "apple", "mango", "orange"};
    for (int i = 0; i < 4; i++)
    {
        cout << fruits[i] << endl;
    }
    cout << "-------" << endl;

    //------------------------
    for (int i = 0; i < sizeof(cars) / sizeof(*cars); i++)
    {
        cout << cars[i] << endl;
    }
    cout << "--------------------" << endl;

    // Omit Array Size
    // ----------------
    string animals[] = {"sheep", "monkey", "lion"};
    for (int i = 0; i < sizeof(animals) / sizeof(*animals); i++)
    {
        cout << animals[i] << endl;
    }
    cout << "--------------------" << endl;

    string animals_2[5] = {"mouse", "cat", "dog"}; // oversized, extra place kept !
    animals_2[3] = "tiger";
    animals_2[4] = "donkey";
    for (int i = 0; i < sizeof(animals_2) / sizeof(*animals_2); i++)
    {
        cout << animals_2[i] << endl;
    }
    cout << "--------------------" << endl;

    // Omit Elements on Declaration
    // ----------------------------

    string food[5];
    food[0] = "cheese";
    food[1] = "bacon";
    for (int i = 0; i < sizeof(food) / sizeof(*food); i++)
    {
        cout << food[i] << endl;
    }
    cout << "--------------------" << endl;
}
