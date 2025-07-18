#include <iostream>
using namespace std;

/* Output all two-letter .com Internet domain names */

int main() {
   char letter1;
   char letter2;
   
   cout << "Two-letter domain names:" << endl;
   // sets the intital letter to 'a' AKA 97 on the ascii table
   letter1 = 'a';
   while (letter1 <= 'z') {
      letter2 = 'a';
      // Increments the second char until Z for each letter in letter1
      while (letter2 <= 'z') {
         cout << letter1 << letter2 << ".com" << endl;
         ++letter2; // will increment to the next letter until it reaches 'z' AKA 121 on the ascii table
      }
      ++letter1;
   }
   
   return 0;
}