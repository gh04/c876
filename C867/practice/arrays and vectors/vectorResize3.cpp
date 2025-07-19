#include <iostream>
#include <vector>
using namespace std;

/*
    Given the integer vector myVector and the i
    nput integers numValues and firstNum, resize 
    myVector to numValues. Then, assign the elements 
    of myVector with integers firstNum * (i / 2 + 1),
    where i is the index of each element in the vector.

    Ex: If the input is:
    3 1 
    
    then the output is:
    1 1 2
*/
int main() {
   vector<int> myVector;
   int numVals;
   unsigned int i;
   int numValues;
   int firstNum;

   cin >> numValues;
   cin >> firstNum;
    myVector.resize(numValues);
   for (i = 0; i < numValues; ++i) {
     myVector.at(i) = firstNum * (i / 2 + 1);
   }

   for (i = 0; i < myVector.size(); ++i) {
      cout << myVector.at(i) << " ";
   }
   cout << endl;

   return 0;
}