#include <iostream>
using namespace std;

int main() {   
   int annualSalary;
   double taxRate;
   int taxToPay;

   cout << "Enter annual salary: " << endl;
   cin >> annualSalary;

   // Determine the tax rate from the annual salary
   if (annualSalary <= 0) {
      cout << "annualSalary cannot be less than 1\n";
      taxRate = 0;
   }
   else if (annualSalary <= 20000) {
      taxRate = 0.10;
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
   cout << "Annual Salary: " << annualSalary << endl;
   cout << "Tax rate: " << taxRate << endl;
   cout << "Tax to pay: " << taxToPay << endl;

   return 0;
}