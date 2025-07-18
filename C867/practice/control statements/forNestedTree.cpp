#include <iostream>
using namespace std;

/*
    Integer inValue is read from input. For each number 
    from 0 to inValue both inclusive, output the number's 
    value of exclamation point characters ('!') followed by 
    the number on a new line.

    Ex: If the input is 4, then the output is:

0
!1
!!2
!!!3
!!!!4
*/
int main() {
   int inValue;
   int i;
   int j;

   cin >> inValue;
   // Outer loops sets the height of the pyramid
   for (i = 0; i <= inValue; ++i) {
    // Inner loop sets the width. Start at 1 to skip the first printing
     for (j = 1; j <= i ; ++j) {
       cout << "!";

     }
    cout << i;
      cout << "\n";
    }

   return 0;
}