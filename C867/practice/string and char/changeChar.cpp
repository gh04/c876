#include <iostream>
#include <string>
using namespace std;

int main() {
   string userWord ="Caterpillar";
   int replaceIndex;
   
   cout << "Enter an index (0-10): ";
   cin  >> replaceIndex;

   userWord.at(replaceIndex) = '*';

   cout << "Updated string: ";
   cout << userWord << endl;

   return 0;
}