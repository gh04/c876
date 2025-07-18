#include <iostream>
#include <string>
using namespace std;

/*
    Write a program whose input is a character and a string, 
    and whose output indicates the number of times the character 
    appears in the string. The output should include the input 
    character and use the plural form, n's, if the number of times 
    the characters appears is not exactly 1.
*/
int main() {
    string const PLURAL_STR = "'s";
    string output;
    int charCount = 0;
    char c;
    string str;

    cin >> c;
    getline(cin, str);


   for (int i = 0; i < str.length(); ++i) {
    if (str.at(i) == c) {
        ++charCount;
    }
   }

   if (charCount > 1 || charCount == 0) {
    cout << charCount << " " << c << PLURAL_STR << endl;
   } else {
    cout << charCount << " " << c << endl;
   }

   return 0;

}