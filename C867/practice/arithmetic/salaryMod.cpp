#include <iostream>
using namespace std;

/*
 *  The following program calculates yearly and monthly salary given an hourly wage. 
 *  The program assumes a work-hours-per-week of 40 and work-weeks-per-year of 50.
 *  Insert the correct number in the code below to print a monthly salary. Then run the program
 */

int main () {
   int hourlyWage;
   
   hourlyWage = 20;

   cout << "Annual salary is: ";
   cout << hourlyWage * 40 * 50;
   cout << endl;

   cout << "Monthly salary is: ";
   cout << ((hourlyWage * 40 * 50) / 12);
   cout << endl;
   // FIXME: The above is wrong. Change the 1 so the statement outputs monthly salary.

   return 0;
}