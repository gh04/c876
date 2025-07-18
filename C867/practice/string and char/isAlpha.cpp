#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
   string inString;

   getline(cin, inString);

   if (isalpha(inString.at(0))) {
      cout << "The first character is not a digit.\n";
       
   } else {
      cout << "The first character is a digit." << inString.at(0) << endl;
   }

   return 0;
}