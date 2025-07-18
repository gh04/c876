#include <iostream>
#include <vector>
using namespace std;

/*
 *  Integers are read from input and stored into a vector 
 *  until 0 is read. Output the elements in the vector, 
 *  replacing any elements less than the vector's last 
 *  element with "IGNORE". End each element with a newline.   
 *  
 *  Ex: If the input is 4 -9 -8 3 0, the vector's last element 
 *  is 3. 
 *  
 *  Thus, the output is:  *  
 *  4
 *  IGNORE
 *  IGNORE
 *  3
*/
int main() {
   vector<int> inputIntegers;
   int value;
   int i;

   cin >> value;
   while (value != 0) {
      inputIntegers.push_back(value);
      cin >> value;
   }

   for (i = 0; i < inputIntegers.size(); ++i) {
    if (inputIntegers.back() >= inputIntegers.at(i)) {
        cout << "IGNORE\n";
    } else {
        cout << inputIntegers.at(i) << endl;
    }
   }

   return 0;
}