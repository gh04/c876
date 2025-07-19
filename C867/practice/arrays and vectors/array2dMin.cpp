#include <iostream>
using namespace std;
/*
 *   Write a loop to iterate from 0 to the last row of 
 *   milesTracker. Within each row, use a nested loop 
 *   to iterate from 0 to the last column of milesTracker.
 *
 *   Within the nested loop, if an element is greater than 
 *   maxMiles, assign maxMiles with the value of the element. 
 *   Similarly, if an element is less than minMiles, assign 
 *   minMiles with the value of the element.
 *
 *   Ex: If the input is:
 *
 *   -10 20 30 40
 *
 *   the output is:
 *   Min miles: -10
 *   Max miles: 40
 */
int main() {
   const int NUM_ROWS = 2;
   const int NUM_COLS = 2;
   int milesTracker[NUM_ROWS][NUM_COLS];
   int i;
   int j;
   int maxMiles = 0;
   int minMiles = 0;
   int value;

   for (i = 0; i < NUM_ROWS; i++){
      for (j = 0; j < NUM_COLS; j++){
         cin >> value;
         milesTracker[i][j] = value;
      }
   }
   cout << endl;

   maxMiles = milesTracker[0][0];
   minMiles = milesTracker[0][0];

   /* Your solution goes here  */
   for (i = 0; i < NUM_ROWS; ++i) {
        for (j = 0; j < NUM_COLS; ++j) {
            if (milesTracker[i][j] > maxMiles) {
                maxMiles = milesTracker[i][j];
            } else if (milesTracker[i][j] < minMiles) {
                minMiles = milesTracker[i][j];
            }
        }
   }

   cout << "Min miles: " << minMiles << endl;
   cout << "Max miles: " << maxMiles << endl;

   return 0;
}