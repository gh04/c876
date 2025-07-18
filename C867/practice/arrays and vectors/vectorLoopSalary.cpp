#include <iostream>
#include <vector>
using namespace std;

/*
    Integer vecVals is read from input as the number of elements 
    in vector averageSalary. Given the integer vector averageSalary, 
    write a for loop that assigns sumBonus with the total bonus. Each 
    salary value above 300 contains a bonus equal to the salary value 
    minus 300.

    Ex: If the input is:
    3
    49 352 366
    
    then the output is:
    Bonus sum: 118
*/
int main() {
   vector<int> averageSalary;
   int vecVals;
   int sumBonus;
   unsigned int i;
   int salary;

   cin >> vecVals;

   for (i = 0; i < vecVals; ++i) {
      cin >> salary;
      averageSalary.push_back(salary);
   }

   sumBonus = 0;

   for (i = 0; i < averageSalary.size(); ++i) {
    if (averageSalary.at(i) > 300) {
        sumBonus += averageSalary.at(i) - 300;
    }
   }

   cout << "Bonus sum: " << sumBonus << endl;
   
   return 0;
}