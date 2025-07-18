#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;      // Number of elements to add
   vector<int> userVals;            // Empty vector for user values
   unsigned int i;                  // Loop index
   int val;                         // Element value
   int sumVal;                      // Sum of elements

   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << "Enter value: ";
      cin >> val;
      userVals.push_back(val);
   }

   sumVal = 0;
   for (i = 0; i < userVals.size(); ++i) {
      sumVal = sumVal + userVals.at(i);
   }
   cout << "Sum of elements: " << sumVal << endl;

   return 0;
}