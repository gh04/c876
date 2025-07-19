#include <iostream>
#include <vector>
using namespace std;

/*
    Integer numValues is read from input, representing 
    the size of vector sequenceList. Perform the following 
    tasks:

    Read an integer from input and append to sequenceList.
    
    Read another integer from input and append to sequenceList.
    
    For index 2 to numValues - 1, find the sum of the two 
    elements in sequenceList before that index and append to sequenceList.
    
    Ex: If the input is:

    8
    9 1
    then the output is:

    Sequence: 9 1 10 11 21 32 53 85
*/
int main() {
   int numValues;
   vector<int> sequenceList;
   unsigned int i;
   int inputVal;

   cin >> numValues;

   for (i = 0; i < 2; ++i) {
      cin >> inputVal;
      sequenceList.push_back(inputVal);
    
   }

   for (i = 2; i < numValues; ++i) {
      sequenceList.push_back(sequenceList.at(i - 2) + sequenceList.at(i - 1));
   }

   cout << "Sequence: ";
   for (i = 0; i < sequenceList.size(); ++i) {
      cout << sequenceList.at(i) << " ";
   }
   cout << endl;

   return 0;
}