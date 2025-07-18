// #include "codetest.h"
#include <iostream>
#include <vector>
using namespace std;

/*
    Six integers are read from input as variables 
    employee1 to employee6. Use push_back() to add 
    the variables employee1 to employee6 to vector 
    employeeNumbers with the variables employee1 to 
    employee6 in the order the input integers are read.

    Ex: If the input is 15 35 19 25 16 36, then the output is:
    15 35 19 25 16 36 
*/

int main() {
   vector<int> employeeNumbers;
   int employee1;
    int employee2;
    int employee3;
    int employee4;
    int employee5;
    int employee6;
    unsigned int i;

    cin >> employee1;
    cin >> employee2;
    cin >> employee3;
    cin >> employee4;
    cin >> employee5;
    cin >> employee6;

   /* Your code goes here */
   employeeNumbers.push_back(employee1);
   employeeNumbers.push_back(employee2);
   employeeNumbers.push_back(employee3);
   employeeNumbers.push_back(employee4);
   employeeNumbers.push_back(employee5);
   employeeNumbers.push_back(employee6);

   for (i = 0; i < employeeNumbers.size(); ++i) {
      cout << employeeNumbers.at(i) << " ";
   }
   cout << endl;

//    codetest(); For code testing only

   return 0;
}
