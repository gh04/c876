#include <iostream>
#include <vector>
using namespace std;

/*
    Using const when using vectors by reference
        • To prevent the performance and memory overhead of copying the 
            argument that would otherwise occur.
        • To prevent the function from modifying the parameter. 
        • Commonly make a large vector or string input 
            parameter pass by reference, to gain efficiency, while 
            also making the parameter const, to prevent assignment.
*/

void ReverseVals(vector<int>& vctrVals) {
   unsigned int i;  // Loop index
   int tmpVal;      // Temp variable for swapping

   for (i = 0; i < (vctrVals.size() / 2); ++i) {
      tmpVal = vctrVals.at(i); // These statements swap
      vctrVals.at(i) = vctrVals.at(vctrVals.size() - 1 - i);
      vctrVals.at(vctrVals.size() - 1 - i) = tmpVal;
   }
}

void PrintVals(const vector<int>& vctrVals) {
   unsigned int i;  // Loop index

   // Print updated vector
   cout << endl << "New values: ";
   for (i = 0; i < vctrVals.size(); ++i) {
      cout << " " << vctrVals.at(i);
   }
   cout << endl;
}

int main() {
   const int NUM_VALUES = 8;            // Vector size
   vector<int> userValues(NUM_VALUES);  // User values
   int i;                               // Loop index

   // Prompt user to populate vector
   cout << "Enter " << NUM_VALUES << " values..." << endl;
   for (i = 0; i < NUM_VALUES; ++i) {
      cout << "Value: ";
      cin >> userValues.at(i);
   }

   // Call function to reverse vector values
   ReverseVals(userValues);

   // Print reversed values
   PrintVals(userValues);

   return 0;
}