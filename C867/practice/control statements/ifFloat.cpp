#include <iostream>
#include <cmath>
using namespace std;

/*
    Floating-point numbers should be compared for "close enough" 
    rather than exact equality. Ex: If (x - y) < 0.0001, x and y 
    are deemed equal. Because the difference may be negative, the 
    absolute value is used: fabs(x - y) < 0.0001. fabs() is a 
    function in the math library. The difference threshold 
    indicating that floating-point numbers are equal is often 
    called the epsilon. Epsilon's value depends on the program's 
    expected values, but 0.0001 is common.

    The std::abs() function is overloaded to support floating-point
    and integer types. However, good practice is to use the fabs() 
    function to make the operation clear.
*/
int main() {
   double bodyTemp;

   cout << "Enter body temperature in Fahrenheit: ";
   cin >> bodyTemp;

   if (fabs(bodyTemp - 98.6) < 0.0001) {
      cout << "Temperature is exactly normal." << endl;
   }
   else if (bodyTemp > 98.6) {
      cout << "Temperature is above normal." << endl;
   }
   else {
      cout << "Temperature is below normal." << endl;
   }

   return 0;
}