#include <iostream>
using namespace std;

/*
    Define a function StartsWith() that has two string parameters. 
    If the first string starts with the second string, the function 
    prints the first string followed by "<>" and the second string. 
    Otherwise, the function prints "No match.". End with a newline. 
    The function does not return any value.

    Ex: If the input is champe dis, then the output is:

    No match.

*/

void StartsWith(string inputString1, string inputString2) {
      int index = inputString1.find(inputString2);
    //   cout << "Find index: "<< index << endl;
    //   cout << "INPUT1 Sub: " << inputString1.substr(0 , inputString2.length()) << endl;
   if (index != string::npos) {
        if (inputString1.substr(0 , inputString2.length()) == inputString2) {
         cout << inputString1 << "<>" << inputString2 << endl;
        }
   } else {
      cout << "No match." << endl;
   }
}
int main() {
   int i;
   string inputString1;
   string inputString2;

   cin >> inputString1;
   cin >> inputString2;

   StartsWith(inputString1, inputString2);

   return 0;
}