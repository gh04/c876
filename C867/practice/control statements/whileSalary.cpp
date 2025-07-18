#include <iostream>
#include <string>
using namespace std;

/*
    The program below repeatedly asks the user to enter an annual salary, 
    stopping when the user enters 0 or less. For each annual salary, the 
    program determines the tax rate and computes the tax to pay.

    Run the program below with annual salaries of 40000, 90000, and then 0.
    Modify the program to use a while loop inside the given while loop. The 
    new inner loop should repeatedly ask the user to enter a salary deduction, 
    stopping when the user enters a 0 or less. The deductions are summed and 
    then subtracted from the annual income, giving an adjusted gross income. 
    The tax rate is then calculated from the adjusted gross income.
    Run the program with the following input: 40000, 7000, 2000, 0, and 0. 
    
    Note that the 7000 and 2000 are deductions.
*/

int main() {
   const string SALARY_PROMPT = "\nEnter annual salary (0 to exit): ";
   const string DEDUCTION_PROMPT = "\nEnter deductions (0 to exit): ";
   int annualSalary;
   int deduction;
   int totalDeductions;
   double taxRate;
   int taxToPay;

   cout << SALARY_PROMPT;
   cin >> annualSalary;

    totalDeductions = 0;
   while (annualSalary > 0) {
      // FIXME: Add a while loop to gather deductions. Use the variables
      // deduction and totalDeduction for deduction handling.
      // End the inner while loop when a deduction <= 0 is entered.
      while(deduction > 0) {
        cout << DEDUCTION_PROMPT;
        cin >> deduction;
        totalDeductions += deduction;
      }

     annualSalary -= totalDeductions;

      // Determine the tax rate from the annual salary
      if (annualSalary <= 20000) {
         taxRate = 0.10;        // 0.10 is 10% written as a decimal
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
      cout << "Annual salary: " << annualSalary << endl;
      cout << "Tax rate: " << taxRate << endl;
      cout << "Tax to pay: " << taxToPay << endl;

      // Get the next annual salary
      cout << SALARY_PROMPT << endl;
      cin >> annualSalary;
   }

   return 0;
}