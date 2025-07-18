#include <iostream>
#include <iomanip>
using namespace std;

/*
    Given three input values representing counts of nickels, dimes, and 
    quarters, output the total amount as dollars and cents.

    Output each floating-point value with two digits after the decimal 
    point using the following statement once before all other cout statements:
    cout << fixed << setprecision(2);
*/
int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;

   cin >> nickels;
   cin >> dimes;
   cin >> quarters;

   
   dollars = nickels * 0.05;
   dollars += dimes * 0.1;
   dollars += quarters * 0.25;

   cout << fixed << setprecision(2) << "Amount: $" << dollars << endl;
   
   return 0;
}