/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
04 février 2021
---------------------------

C++ Dereference
=============== */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{

  /* In the example from the previous page, we used the pointer
      variable to get the "memory address" of a variable
      (used together with the & reference operator).

      However, you can also use the pointer to get "the value" of
      the variable, by using the * operator
      (the dereference operator):
  */

  string food = "Pizza";
  cout << food << endl; // Pizza
  cout << &food << endl
       << endl; // 0x...

  string *pointer_food = &food;
  cout << pointer_food << endl; // 0x...
  cout << *pointer_food << endl
       << endl; // Pizza

  int salary = 35000;
  cout << salary << endl; // 35000
  cout << &salary << endl
       << endl; // 0x...

  int *salary_pointer = &salary;
  cout << salary_pointer << endl;  // 0x...
  cout << *salary_pointer << endl; // 35000

  /* Note that the * sign can be confusing here, as it does
       two different things in our code:
      > When used in declaration (string* ptr), it creates a pointer variable.
      > When not used in declaration, it act as a dereference operator.
*/
}
