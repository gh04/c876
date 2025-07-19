#include <iostream>
#include <vector>
using namespace std;

/*
 *    Integer numElements is read from input, representing 
 *    the number of integers to be read next. Then, the 
 *    remaining integers are read and stored into vector 
 *    numbersList. For each element in numbersList that is even:
 *
 *    Output the element, followed by " is corrected to an odd 
 *    number" and a newline.
 *    
 *    Assign the element with the element's current value minus 1.
 *  
 *    Ex: If the input is:
 *    3
 *    80 30 43
 * 
 *    then the output is:   
 *    Original numbers: 80 30 43 
 *    80 is corrected to an odd number
 *    30 is corrected to an odd number
 *    Nearest odd numbers: 79 29 43 
 */
int main() {
   int numElements;
   vector<int> numbersList;
   unsigned int i;
   int inputVal;

   cin >> numElements;

   for (i = 0; i < numElements; ++i) {
      cin >> inputVal;
      numbersList.push_back(inputVal);
   }

   cout << "Original numbers: ";
   for (i = 0; i < numbersList.size(); ++i) {
      cout << numbersList.at(i) << " ";
   }
   cout << endl;

   for (i = 0; i < numbersList.size(); ++i) {
     if (numbersList.at(i) % 2 == 0) {
        cout << numbersList.at(i) << " is corrected to an odd number\n";
        --numbersList.at(i);
     }
   }

   cout << "Nearest odd numbers: ";
   for (i = 0; i < numbersList.size(); ++i) {
      cout << numbersList.at(i) << " ";
   }
   cout << endl;

   return 0;
}