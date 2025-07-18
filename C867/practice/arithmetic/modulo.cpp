#include <iostream>
using namespace std;

int main() {
   int userMinutes;   // User input: Minutes
   int outHours;      // Output hours
   int outMinutes;    // Output minutes (remaining)

   cout << "Enter minutes: ";
   cin  >> userMinutes;

   outHours   = userMinutes / 60;
   outMinutes = userMinutes % 60;

   cout << userMinutes << " minutes is ";
   cout << outHours    << " hours and ";
   cout << outMinutes  << " minutes." << endl;

    // % 6 yields 0 - 5. Then + 5 yields 5 - 10.
   cout << "rand modulo1: " << (userMinutes % 6) + 5 << endl; 
   // x % 21 yields 0 to 20. Then - 10 yields -10 to 10.
   cout << "rand modulo2: " << (userMinutes % 21) - 10 << endl; 

   /*
   Integer userVal is read from input. Assume userVal is greater than 10000 
   and less than 99999. Assign thousandsDigit with userVal's thousands place value.
   Ex: If the input is 19456, then the output is:
   Value in thousands place: 9
   */
  int userVal;
  int thousandsDigit;
  int tempVal;
  
  cin >> userVal;
  
  tempVal = userVal / 1000;
  
  thousandsDigit = tempVal % 1;
  
  cout << "Value in thousands place: " << thousandsDigit << endl;

  /*
    Convert totalDays to years, weeks, and days, finding the maximum number of years, 
    then weeks, then days.
   
    Ex: If the input is 3297, then the output is:
    Years: 9
    Weeks: 1
    Days: 5
   
    Note: Assume a year has 365 days. A week has 7 days.
  */

  int totalDays;
  int numYears;
  int numWeeks;
  int numDays;

  cin >> totalDays;

  numYears = totalDays / 365;
  totalDays = totalDays % 365;
  numWeeks = totalDays / 7;
  numDays = totalDays % 7;
  
  cout << "Years: " << numYears << endl;
  cout << "Weeks: " << numWeeks << endl;
  cout << "Days: " << numDays << endl;
  
  return 0;
}