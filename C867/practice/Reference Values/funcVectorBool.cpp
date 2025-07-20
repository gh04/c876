#include <iostream>
#include <vector>
using namespace std;

/*
    Define a function CompareValues() that has one input 
    string parameter, one character parameter, and one output 
    vector parameter passed by reference. The function should 
    not return any value. The function appends true to the 
    output vector for each character in the string that is not 
    equal to the character parameter, and appends false otherwise. 
    The values in the output vector are in the same order as the \
    input string.

    Ex: If the input is jbvd d, then the output is:

    j is not equal to d
    b is not equal to d
    v is not equal to d
    d is equal to d
*/

void CompareValues(string inputString, char x, vector<bool>& results) {
     for (int i = 0; i < inputString.size(); ++i) {
      if (inputString.at(i) != x) {
         results.push_back(true);
      } else {
         results.push_back(false);
      }
   }  
}

int main() {
   string inputString;
   int i;
   char x;
   vector<bool> results;
   
   cin >> inputString;
   cin >> x;

   CompareValues(inputString, x, results);

   for (i = 0; i < results.size(); ++i) {
      if (results.at(i)) {
         cout << inputString.at(i) << " is not equal to " << x << endl;
      }
      else {
         cout << inputString.at(i) << " is equal to " << x << endl;
      }
   }

   return 0;
}