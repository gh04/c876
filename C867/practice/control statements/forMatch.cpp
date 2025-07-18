#include <iostream>
using namespace std;

/*
    Integer inputCount is read from input representing the number of 
    integers to be read next. Use a for loop to read in the remaining 
    integers from input into val. If all integers read from input are 
    equal to -1, assign matchesCond with true. Otherwise, assign 
    matchesCond with false.

    Code at the end of main() outputs "All match -1" if matchesCond is 
    true, or "Some values are not -1" if matchesCond is false.

    Ex: If the input is:
    3
    -1 -1 -1
    
    then the output is:
    All match -1
*/
int main() {
   int inputCount;
   bool matchesCond;
   int i;
   int val;
   
   matchesCond = true;
   cin >> inputCount;

   for (i = 0; i < inputCount; ++i) {
      cin >> val;
      if (val != -1) {
         matchesCond = false;
         break;
      } else {
         matchesCond = true;
      }
   }

   if (matchesCond) {
      cout << "All match -1" << endl;
   }
   else {
      cout << "Some values are not -1" << endl;
   }

   return 0;
}