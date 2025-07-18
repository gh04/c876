#include <iostream>
#include <string>
using namespace std;

/*
     counts the number of letters in a string, not counting digits, symbols, etc.
*/
int main() {
   string inputWord;
   int numLetters;
   unsigned int i;

   cout << "Enter a word: ";
   getline(cin, inputWord);

   numLetters = 0;
   for (i = 0; i < inputWord.size(); ++i) {
      if (isalpha(inputWord.at(i))) {
         numLetters += 1;
      }
   }

   cout << "Number of letters: " << numLetters << endl;

   return 0;
}