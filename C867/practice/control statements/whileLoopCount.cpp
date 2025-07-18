#include <iostream>
using namespace std;

/*
    Variable i is initialized with 0. In the outer loop, i is 
    incremented in each iteration. For the outer loop to execute 
    (outerNum + 1) times, i should iterate from 0 to outerNum, 
    inclusive. So the outer loop should iterate while i is less 
    than or equal to outerNum.

    Ex: For input 3 6, outerNum is 3 and innerNum is 6, so the 
    inner loop executes (3 + 1) * (6 + 1) = 4 * 7 = 28 times.
*/
int main() {
   int outerNum;
   int innerNum;
   int count;
   int i;
   int j;

   cin >> outerNum;
   cin >> innerNum;

   count = 0;
   i = 0;
   while (i <= outerNum) {
		j = 0;
		while (j <= innerNum) {
         ++count;
         ++j;
      }
      ++i;
   }

   cout << "Inner loop ran " << count << " times" << endl;

   return 0;
}