#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
 *   String keyStr is read from input. For each character 
 *   in keyStr that is a digit, increment count by 1. 
 *   Then, output "Valid" if count is less than 7 and 
 *   keyStr's length is greater than 5. Otherwise, output 
 *   "Invalid". End each output with a newline.
 *
 *   Ex 1: If the input is 749021, then the output is:
 *   Valid
 *
 *   Ex 2: If the input is M5ndY, then the output is:
 *   Invalid
 */
int main() {
   string keyStr;
   int i;
   int count;
   
   getline(cin, keyStr);
   count = 0;
   
   for (i = 0; i < keyStr.length(); ++i) {
    if (isdigit(keyStr.at(i)) ) {
        ++count;
    }
   }

   if (keyStr.length() > 5  && count < 7) {
    cout << "Valid\n";
   } else {
    cout << "Invalid\n";
   }
   
   return 0;
}