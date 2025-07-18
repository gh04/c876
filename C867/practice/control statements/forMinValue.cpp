#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double inValue;
   double minValue;
   int i;

   for (i = 0; i < 7; ++i) {
      cin >> inValue;
      if (i == 0) {
         minValue = inValue;   
      } else if (inValue < minValue) {
         minValue = inValue;   
      }
   }

   cout << minValue << endl;

   return 0;
}