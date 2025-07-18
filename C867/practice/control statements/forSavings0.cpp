#include <iostream>
#include <ctype.h>
#include <cmath>
using namespace std;

/*
    The program outputs the amount of a savings account each 
    year for 10 years, given an input initial amount and 
    interest rate
*/

int main() {
   double initialSavings;  // User-entered initial savings
   double interestRate;    // Interest rate
   double currSavings;     // Current savings with interest
   int numYears;           // Num of years to calculate out
   char compoundCycle;     // Terms: Monthly * 12, Quarterly * 4, Yearly * 1
   int compoundRate;
   int i;                  // Loop variable

   cout << "Enter initial savings: ";
   cin  >> initialSavings;

   cout << "Enter interest rate: ";
   cin  >> interestRate;
   cout << "Enter compound Cycle Char\n(M = monthly, Q = quarterly, Y = Yearly): ";
   cin >> compoundCycle;
   cout << "Enter number of years: ";
   cin >> numYears;

   compoundCycle = tolower(compoundCycle);
   cout << "cycle: " << compoundCycle;

   while (compoundCycle != 'm' && compoundCycle != 'q' && compoundCycle != 'y') {
        cout << "\nIt must be M for monthly\nOR\nQ for quarterly\nOR\nY for Yearly\n> ";
        cin >> compoundCycle;
        compoundCycle = tolower(compoundCycle);
   }

   switch (compoundCycle)
   {
   case 'm':
    compoundRate = 12;
    break;
   case 'q':
    compoundRate = 4;
    break;
   case 'y':
    compoundRate = 1;
    break;
   default:
    break;
   }

   cout << endl << "Annual savings for " << numYears << " years: " << endl;

   currSavings = initialSavings;
   cout << "Year 0: $" << currSavings << endl;
   for (i = 1; i <= numYears; ++i) {
      currSavings *= pow(1 + interestRate / compoundRate, compoundRate);
      cout << "Year " << i << ": $" << currSavings << endl;
   }

   return 0;
}