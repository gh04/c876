#include <iostream>
#include <string>
using namespace std;

/*
    The following function modifies a string by 
    replacing spaces with hyphens.

*/

// Function replaces spaces with hyphens
void StrSpaceToHyphen(string& modStr) {
   unsigned int i;   // Loop index
   
   for (i = 0; i < modStr.size(); ++i) {
      if (modStr.at(i) == ' ') {
         modStr.at(i) = '-';
      }
   }
}

int main() {
   string userStr;  // Input string from user
   
   // Prompt user for input
   cout << "Enter string with spaces: " << endl;
   getline(cin, userStr);
   
   // Call function to modify user defined string
   StrSpaceToHyphen(userStr);
   
   // Output modified string
   cout << "String with hyphens: ";
   cout << userStr << endl;
   
   return 0;
}

/*
    Output:
    
    Enter string with spaces: 
    Hello there everyone.
    String with hyphens: Hello-there-everyone.

    ...

    Enter string with spaces: 
    Good bye  now   !!!
    String with hyphens: Good-bye--now---!!!
*/