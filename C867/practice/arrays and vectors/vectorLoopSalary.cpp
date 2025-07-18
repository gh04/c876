#include <iostream>
#include <vector>
using namespace std;

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

   /* Your code goes here */

   cout << "Bonus sum: " << sumBonus << endl;
   
   return 0;
}