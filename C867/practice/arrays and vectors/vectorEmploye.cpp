#include "codetest.h"
#include <iostream>
#include <vector>
using namespace std;

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

   for (i = 0; i < employeeNumbers.size(); ++i) {
      cout << employeeNumbers.at(i) << " ";
   }
   cout << endl;

   codetest(); // For code testing only

   return 0;
}
