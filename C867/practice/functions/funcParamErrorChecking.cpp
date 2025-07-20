#include <iostream>
using namespace std;

/*
     A good practice is to check that a parameter's 
     value is within an expected range. If not in the range, 
     the function might take one or more of various actions, 
     like outputting an error message, assigning a valid value, 
     returning a value indicating failure, exiting the program, etc.
*/

void PrintDate(int currDay, int currMonth, int currYear) {

   // Parameter error checking
   if ((currDay < 1) || (currDay > 31)) {
      cout << "Invalid day (" << currDay << "). Using 1." << endl;
      currDay = 1;
   }

   if ((currMonth < 1) || (currMonth > 12)) {
      cout << "Invalid month (" << currMonth << "). Using 1." << endl;
      currMonth = 1;
   }

   // Begin function's normal behavior
   cout << currMonth << "/" << currDay << "/" << currYear;
}


int main() {

   PrintDate(30, 7, 2012);
   cout << endl << endl;

   PrintDate(40, 7, 2012);
   cout << endl << endl;

   PrintDate(30, 13, 2012);
   cout << endl << endl;

   return 0;
}