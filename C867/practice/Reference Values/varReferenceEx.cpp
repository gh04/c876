#include <iostream>
using namespace std;

/*
    Output:

    Enter an integer: 42
    We wrote your integer to usrValInt.
    usrValInt is: 42.
    usrValRef refers to usrValInt, and is: 42.

    We assigned usrValInt with 99.
    usrValInt is now: 99.
    usrValRef is now: 99.
    Note that usrValRef refers to usrValInt, so it changed too.
*/

int main() {
   int usrValInt;
   int& usrValRef = usrValInt;  // Refers to usrValInt

   cout << "Enter an integer: ";
   cin  >> usrValInt;

   cout << "We wrote your integer to usrValInt." << endl;
   cout << "usrValInt is: " << usrValInt << "." << endl;
   cout << "usrValRef refers to usrValInt, and is: " << usrValRef << "." << endl;

   usrValInt = 99;
   cout << endl << "We assigned usrValInt with 99." << endl;
   cout << "usrValInt is now: " << usrValInt << "." << endl;
   cout << "usrValRef is now: " << usrValRef << "." << endl;
   cout << "Note that usrValRef refers to usrValInt, so it changed too." << endl;
   return 0;
}