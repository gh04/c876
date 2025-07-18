#include <iostream>
#include <vector>
using namespace std;

/*
    Before entering the loop, maxVal must be initialized to some 
    value because maxVal will be compared with each vector element's 
    value. A logical error would be to initialize maxVal to 0, 
    because 0 is not in fact the largest value seen so far, and 
    would result in incorrect output (of 0) if the user entered all 
    negative numbers.
*/
int main() {
   const int NUM_ELEMENTS = 8;      // Number of elements to add
   vector<int> userVals;            // Empty vector for user values
   unsigned int i;                  // Loop index
   int val;                         // Element value
   int maxVal;                      // Max of elements

   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Enter value for next element: ";
      cin >> val;
      userVals.push_back(val);
   }

   maxVal = userVals.at(0);
   for (i = 0; i < userVals.size(); ++i) {
      if (userVals.at(i) > maxVal) {
         maxVal = userVals.at(i);
      }
    }
   cout << "Max of elements: " << maxVal << endl;

   return 0;
}