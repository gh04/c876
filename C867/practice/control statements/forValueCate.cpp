#include <iostream>
using namespace std;

/*
    Integer numInput is read from input representing the number of integers 
    to be read next. Use a loop to read the remaining integers from input 
    into val. If all of the integers are in the range -200 to -100 inclusive, 
    assign allValid with true. Otherwise, assign allValid with false.

    Code at the end of main() outputs "All valid value(s)" if allValid is true, 
    or "Non-matching value(s)" if allValid is false.

    Ex: If the input is:
    2
    -150 -85
    
    then the output is:
    Non-matching value(s)
*/
int main() {
   int numInput;
   bool allValid;
   int i;
   int val;
   
   allValid = true;
   cin >> numInput;

   for (i = 0; i < numInput; ++i) {
      cin >> val;
      /* 
      That reads as plain English— “if val is less than −200 or greater than −100…”
      —and avoids any negations or extra parenthese
      */
      if (val < -200 || val > -100) {
         allValid = false;
         break;
      }
      allValid = true;
   }

   if (allValid) {
      cout << "All valid value(s)" << endl;
   }
   else {
      cout << "Non-matching value(s)" << endl;  
   }

   return 0;
}