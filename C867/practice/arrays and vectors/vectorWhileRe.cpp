#include <iostream>
#include <vector>
using namespace std;

/*
    Integers are read from input and stored into a 
    vector until 0 is read. Output the odd elements 
    in the vector in reverse order. End each number 
    with a newline.

    Ex: If the input is:
    -5 4 -14 7 0
    
    then the output is:
    7
    -5
*/

int main() {
   vector<int> dataVect;
   int value;
   int i;

   cin >> value;
   while (value != 0) {
      dataVect.push_back(value);
      cin >> value;
   }

   for (i = dataVect.size() - 1; i <= 0; --i) {
    if (dataVect.at(i) % 2 != 0) {
        cout << dataVect.at(i) << endl;
    }
   }

   return 0;
}