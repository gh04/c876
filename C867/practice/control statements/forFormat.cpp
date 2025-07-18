#include <iostream>
using namespace std;

/*
 * Read integer numIn from input as the number of integers 
 * to be read next. Then, use a for loop to iterate from 0 
 * to numIn - 1. In the loop:
 * 
 * Assign a variable with the integer value read from input.
 * Output the integer value.
 * 
 * Unless the integer value is the last input read, output ", " 
 * after the integer output.
 * 
 * After the loop terminates, output a newline.
 */

int main() {
   int numIn;
   int input;
   cin >> numIn;
   
   for (int i = 0; i < numIn; ++i) {
         cin >> input;
         cout << input;
         if (i != numIn - 1) {
            cout << ", ";
         }
   }
   cout << endl;

   return 0;
}