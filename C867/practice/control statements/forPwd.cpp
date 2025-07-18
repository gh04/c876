#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
    A website requires that passwords only contain numbers. 
    For each character in codeStr that is not a number, 
    assign the character with '1' (the number one).
*/

int main() {
   string codeWord;
   unsigned int i;
   
   getline(cin, codeWord);

   for (i = 0; i < codeWord.length(); i++) {
      if (!isalpha(codeWord.at(i))) {
         codeWord.replace(i, 1, "x");
      }
   }

   cout << "Adjusted password: " << codeWord << endl;
   
   return 0;
}