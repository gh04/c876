#include <iostream>
#include <cstring>
using namespace std;

/*
    The following function modifies a string by 
    replacing spaces with hyphens.

    output:
    Enter string with spaces: 
    Hello there everyone.
    String with hyphens: Hello-there-everyone.

    ...

    Enter string with spaces: 
    Good bye  now   !!!
    String with hyphens: Good-bye--now---!!!
*/

/*
    • When setting an array as a function parameter, it is a reference value.
    • void StrSpaceToHyphen(char modString[]) {...) 
        ◦ Is syntactic sugar for char* modString 
        ◦ actually passing a pointer to the first element of the array.
        ◦ Arrays declared as parameters in functions decay to pointers.
*/

// Function replaces spaces with hyphens
void StrSpaceToHyphen(char modString[]) {
   int i;      // Loop index
   
   for (i = 0; i < strlen(modString); ++i) {
      if (modString[i] == ' ') {
         modString[i] = '-';
      }
   }
}

int main() {
   const int INPUT_STR_SIZE = 50;  // Input C string size
   char userStr[INPUT_STR_SIZE];   // Input C string from user
   
   // Prompt user for input
   cout << "Enter string with spaces: " << endl;
   cin.getline(userStr, INPUT_STR_SIZE);
   
   // Call function to modify user defined C string
   StrSpaceToHyphen(userStr);
   
   cout << "String with hyphens: " << userStr << endl;
   
   return 0;
}