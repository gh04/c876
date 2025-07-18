#include <iostream>
#include <string>
using namespace std;

/*
    "123" is a string commonly found in weak passwords. Use a while l
    oop to find and replace the occurrences of "123" in codeWord with 
    an empty string (""). Then, assign lengthStr with the length of codeWord.

    Ex: If the input is 
    
    123@Nv?xGV#Zl*p&g
    
    then the output is:
    Remaining string: @Nv?xGV#Zl*p&g
*/

int main() {
   string codeWord;
   int strIndex;
	int lengthStr;
   
   cin >> codeWord;

   strIndex = 0;
  lengthStr = 0;

   while (codeWord.find("123") != string::npos) {
    strIndex = codeWord.find("123");
    codeWord.replace(strIndex, 3, "");
   }
   
   lengthStr += codeWord.length();

   cout << "Remaining string: " << codeWord << endl;
    cout << "Length: " << lengthStr << endl;
   
   return 0;
}