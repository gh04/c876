#include <iostream>
#include <iomanip>
using namespace std;

/*
Given 4 integers, output their product and their average using integer arithmetic.
Also output the product and average using floating-point arithmetic.
*/
int main() {
   int num1;
   int num2;
   int num3;
   int num4;
   int product;
   int average;
   double productFloat;
   double averageFloat;

   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;
   
   // Integer Math 
   product = num1 * num2 * num3 * num4;
   average = (num1 + num2 + num3 + num4) / 4;
   cout << product << " " << average << endl; 
// Floating Point Math
   productFloat = static_cast<double>(num1) * num2 * num3 * num4;
   averageFloat = (num1 + num2 + num3 + num4) / 4.0;

   cout << fixed << setprecision(3) << productFloat << " " << averageFloat << endl; 
   

   return 0;
}
