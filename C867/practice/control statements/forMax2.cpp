#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int inputCount;
   double inVal;
   double largestVal;
   int i;

   cin >> inputCount;

   for (i = 0; i < inputCount; ++i) {
      cin >> inVal;
      cout << "Value read: " << inVal << endl;
      
      if (i == 0) {
         largestVal = inVal;   
      } else if (inVal > largestVal) {
         largestVal = inVal;   
      }
   }

   cout << "Largest: " << largestVal << endl;

   return 0;
}