#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 8;         // Number of elements in vector
   vector<int> userVals(NUM_VALS); // User values
   unsigned int i;                 // Loop index
   
   cout << "Enter " << NUM_VALS << " integer values..." << endl;
   for (i = 0; i < userVals.size(); ++i) {
      cout << "Value: ";
      cin >> userVals.at(i);
   }
   
   cout << "You entered: ";
   for (i = 0; i < userVals.size(); ++i) {
      cout << userVals.at(i) << " ";
   }
   cout << endl;
   
   return 0;
}

/*
Vectors combined with loops are powerful together: User-entered numbers.
    Enter 8 integer values...
    Value: 5
    Value: 99
    Value: -1
    Value: -44
    Value: 8
    Value: 555555
    Value: 0
    Value: 2
    You entered: 5 99 -1 -44 8 555555 0 2
*/