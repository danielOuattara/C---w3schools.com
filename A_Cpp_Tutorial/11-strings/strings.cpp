/*---------------------------
Daniel.B OUATTARA
C++ Tutorial  w3schools.com/cpp/
daniel.ouattara[@]gmxDOTcom
01 février 2021
---------------------------*/

/* C++ Strings
================ */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // We must include #include <string> to use string

    // Basic on string :
    //-------------------
    string greeting = "Hello World Again !";
    cout << greeting << endl;

    // String concatenation:
    //----------------------
    string firstName = "John "; // notice the space left behind
    string lastName = "Doe";

    string fullName = firstName + lastName;
    cout << fullName << endl;

    string firstName_2 = "John";

    string fullName_2 = firstName_2 + " " + lastName;
    cout << fullName_2 << endl; // John Doe

    string fullName_3 = firstName_2.append(lastName); // JohnDoe
    cout << fullName_3 << endl;

    // C++ Numbers and Strings
    // -----------------------
    int x = 10;
    int y = 20;
    int z = x + y;
    cout << "z = " << z << endl;

    string x_str = "10";
    string y_str = "20";
    string z_str = x_str + y_str;
    cout << "z_str = " << z_str << '\n';

    string test_str = "10";
    int test_int = 20;
    // string final_value = test_int + test_str ; // will raise an error

    // C++ String Length
    //--------------------

    string abc_z = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "Alphabet holds : " << abc_z.length() << " items" << endl;
    cout << "Alphabet holds : " << abc_z.size() << " items" << endl;

    // C++ Access Strings
    // -------------------
    string myString = "Hello World Again!";
    cout << "myString[0] = " << myString[0] << endl;
    cout << myString[1] << endl;
    cout << myString[2] << endl;
    cout << myString[3] << endl;
    cout << myString[4] << endl;
    cout << myString[5] << endl;

    cout << " myString[myString.length() - 1] = " << myString[myString.length() - 1] << endl;
    cout << " myString[myString.length() - 2] = " << myString[myString.length() - 2] << endl;
    cout << " myString[myString.length() - 7] = " << myString[myString.length() - 3] << endl;

    // Change String Characters
    // ------------------------
    myString[0] = 'J';
    cout << myString << endl;

    // C++ User Input Strings
    // -----------------------
    string user_firstName;
    cout << "Type in your first name : ";
    cin >> user_firstName;
    cout << "You typed : " << user_firstName << endl;

    // Caution: "cin" takes in only the first bloc of string;
    // anything after a space will not be output!

    // Note: The cut part of a 2 two block string is kept in memory

    string userFullName;
    cout << " Enter your fullname";
    cin >> userFullName;
    cout << " you entered : " << userFullName << endl;

    // Omitting Namespace
    // ------------------

    /* You might see some C++ programs that runs without the standard
    namespace library. The using namespace std line can be omitted
    and replaced with the std keyword, followed by the ::operator
    for string(and cout) objects : */

    // #include <iostream>
    // #include <string>
    // int main() {
    //   std::string greeting = "Hello";
    //   std::cout << greeting;
    //   return 0;
    // }

    return 0;
}
