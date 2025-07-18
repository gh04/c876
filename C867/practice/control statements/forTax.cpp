#include <iostream>
using namespace std;

int main() {
   int annualSalary;
   double taxRate;
   int taxToPay;
   int startingAnnualSalary;
   int endingAnnualSalary;

   annualSalary = 0;
   startingAnnualSalary = 40000; 
   endingAnnualSalary = 60000;  

   // FIXME: Use a for loop to calculate the tax for each entry in the table.
   
   // Hint: the initialization clause is annualSalary = startingAnnualSalary

      // Determine the tax rate from the annual salary
      if (annualSalary <= 0) {
         taxRate = 0.0;
      }
      else if (annualSalary <= 20000) {
         taxRate = 0.10;   // 0.10 is 10% written as a decimal
      }
      else if (annualSalary <= 50000) {
         taxRate = 0.20;
      }
      else if (annualSalary <= 100000) {
         taxRate = 0.30;
      }
      else {
         taxRate = 0.40;
      }

      taxToPay = static_cast<int>(annualSalary * taxRate);   // Truncate tax to an integer amount
      cout << "Annual salary: " << annualSalary <<
              "\tTax rate: " << taxRate <<
              "\tTax to pay: " << taxToPay << endl;
   // FIXME: Be sure to include the closing brace for the for loop

   return 0;
}