#include <iostream>
#include <string>
using namespace std;

int main() {
   string userWord;

   cout << "Enter a 5-letter word: ";
   cin  >> userWord;
   

   cout << "Scrambled: ";
   cout << userWord.at(3);
   cout << userWord.at(1);
   cout << userWord.at(4);
   cout << userWord.at(0);
   cout << endl;

   cout << "Size: " << userWord.size() << endl;

   return 0;
}