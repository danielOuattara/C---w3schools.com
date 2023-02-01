/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
04 février 2021
---------------------------

C++ Modifiy Pointer
===================
*/

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])

{

  /* Modify the Pointer Value
   ---------------------------

    You can also change the pointer's value, but note that
    this will also change the value of the original variable: */

  string food = "Pizza";
  cout << food << endl
       << endl; // Pizza

  string *pointer_food = &food;
  cout << pointer_food << endl;  // 0x61fde0
  cout << *pointer_food << endl; // Pizza
  cout << &(*pointer_food) << endl
       << endl; // 0x61fde0

  cout << "---------- " << endl;

  cout << &pointer_food << endl; // 0x61fdd8  <--- memory address of the pointer variable pointer_food

  cout << "---------- " << endl;

  // modify the pointer value;
  *pointer_food = "Soup & Cheese";

  cout << *pointer_food << endl; // Soup & Cheese
  cout << pointer_food << endl;  // 0x61fdE0
  cout << food << endl;          // Soup & Cheese

  cout << "---------- " << endl
       << endl;

  int salary = 35000;
  cout << salary << endl;  // 35000
  cout << &salary << endl; // 0x61fdd4

  int *salary_pointer = &salary;
  cout << *salary_pointer << endl;

  *salary_pointer = 37000;
  cout << *salary_pointer << endl; // 37000
  cout << salary << endl;          // 37000

  /* Note that the * sign can be confusing here,
     as it does two different things in our code:
      > When used in declaration (string* ptr), it creates a pointer variable.
      > When not used in declaration, it act as a dereference operator.
*/
}
