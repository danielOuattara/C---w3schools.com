/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
04 février 2021
---------------------------*/

/*

C++ Pointers
===============
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
   /*
   You learned from the previous chapter, that we can get
   the memory address of a variable by using the "&"
   operator */

   string food = "Pizza";
   string &meal = food;
   cout << "food = " << food << endl;   // Pizza
   cout << "&food = " << &food << endl; // 0x61fdd0...
   cout << "meal = " << meal << endl;   // Pizza
   cout << "&meal = " << &meal << endl; // 0x61fdd0...

   /* A pointer however, is a variable that stores the memory
      address as its value.

      A pointer variable points to a data type (like int or string)
      of the same type, and is created with the * operator.
      The address of the variable you're working with is assigned
      to the pointer:
*/

   string *pointer_food = &food;
   cout << "pointer_food = " << pointer_food << endl; // 0x61fdd0

   int salary = 35000;
   cout << "salary = " << salary << endl;   // 35000
   cout << "&salary = " << &salary << endl; //

   int *salary_pointer = &salary;
   cout << "salary_pointer = " << salary_pointer << endl;

   /* NOTE:
      string* pointer_food; //    <-- Preferred
      string *pointer_food;
      string * pointer_food;
      */
}
