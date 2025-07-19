#include <iostream>
#include <vector>
using namespace std;

/*
 *    Integer numElements is read from input, representing 
 *    the size of vectors, yesterdayTemperatures and 
 *    todayTemperatures. Then, the remaining integers are 
 *    read and stored into vector yesterdayTemperatures and 
 *    todayTemperatures, respectively. Perform the following tasks:
 *
 *    If yesterdayTemperatures is equal to todayTemperatures, 
 *    output "Yesterday's temperatures are the same as today's 
 *    temperatures.", followed by a newline.
 *    
 *    Otherwise, output "Yesterday's temperatures are not the 
 *    same as today's temperatures.", followed by a newline.
 *    
 *    Assign todayBackup as a copy of todayTemperatures.
 *
 *    Ex: If the input is:
 *    2
 *    151 35
 *    116 125
 *    
 *    then the output is:
 *    Yesterday's temperatures: 151 35 
 *    Today's temperatures: 116 125 
 *    Yesterday's temperatures are not the same as today's temperatures.
 *    Today's backup: 116 125 
*/
int main() {
   int numElements;
   vector<int> yesterdayTemperatures;
   vector<int> todayTemperatures;
   vector<int> todayBackup;
   unsigned int i;
   int inputVal;

   cin >> numElements;

   cout << "Yesterday's temperatures: ";
   for (i = 0; i < numElements; ++i) {
      cin >> inputVal;
      yesterdayTemperatures.push_back(inputVal);
      cout << yesterdayTemperatures.at(i) << " ";
   }
   cout << endl;

   cout << "Today's temperatures: ";
   for (i = 0; i < numElements; ++i) {
      cin >> inputVal;
      todayTemperatures.push_back(inputVal);
      cout << todayTemperatures.at(i) << " ";
   }
   cout << endl;

   if (todayTemperatures == yesterdayTemperatures) {
      cout << "Yesterday's temperatures are the same as today's temperatures.\n";
   } else {
      cout << "Yesterday's temperatures are not the same as today's temperatures.\n";
   }
   todayBackup = todayTemperatures;

   cout << "Today's backup: ";
   for (i = 0; i < todayBackup.size(); ++i) {
      cout << todayBackup.at(i) << " ";
   }
   cout << endl;

   return 0;
}