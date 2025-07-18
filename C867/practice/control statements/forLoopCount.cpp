#include <iostream>
using namespace std;

/*
    In the outer for loop variable i is initialized with 0 
    and is incremented in each iteration while i is less 
    than outerValue.

    Ex: For input 2 6, outerValue is 2 and innerValue is 6, 
    so the inner loop executes 2 * (6 + 1) = 2 * 7 = 14 times.


*/

int main() {
   int outerValue;
   int innerValue;
   int count;
   int i;
   int j;

   cin >> outerValue;
   cin >> innerValue;

   count = 0;
   for (i = 0; i < outerValue; ++i ) {
		for (j = 0; j <= innerValue; ++j) {
         ++count;
      }
   }

   cout << "Inner loop ran " << count << " times" << endl;

   return 0;
}