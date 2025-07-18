#include <iostream>
#include <vector>
using namespace std;

/*
 *   Write a while loop to read integers from input 
 *   until -1 is read. For each integer read before -1,
 *   add the integer times two to vector dataVect.
 *
 *   Ex: If the input is 6 8 7 1 -1, then the output is:
 *   
 *   12
 *   16
 *   14
 *   2
 */

int main() {
   vector<int> dataVect;
   int value;
   int i;

   cin >> value;
   
   while (value != -1) {
    dataVect.push_back(value * 2);
    cin >> value;
   }

   for (i = 0; i < dataVect.size(); ++i) {
      cout << dataVect.at(i) << endl;
   }

   return 0;
}