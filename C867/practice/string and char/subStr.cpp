#include <iostream>
#include <string>
using namespace std;

/*
    Given string workString on one line and integer 
    substrLen on a second line, assign newStr with 
    workString + the last substrLen characters of workString.

    Ex: If the input is:
    Fuzzy bear
    4

    then the output is:
    Fuzzy bearbear
*/

int main() {
   string workString;
   int substrLen;
   string newStr;

   getline(cin, workString);
   cin >> substrLen;

   newStr = workString + workString.substr(workString.length() - substrLen, substrLen);
   
   cout << newStr << endl;
   
   return 0;
}