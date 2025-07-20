#include <iostream>
using namespace std;

/*
    Complete the function FindCharacters() that has one 
    string parameter and one character parameter. The 
    function returns true if at least one character in the 
    string is not equal to the character parameter. 
    Otherwise, the function returns false.

    Ex: If the input is wsgt s, then the output is:

    True, at least one character is not equal to s.
*/

bool FindCharacters(string inputString, char x) {

   for (int i = 0; i < inputString.size(); ++i) {
      if (inputString.at(i) != x) {
         return true;
      }
   }
   return false;

}

int main() {
   string inString;
   char x;
   bool result;

   cin >> inString;
   cin >> x;

   result = FindCharacters(inString, x);

   if (result) {
		cout << "True, at least one character is not equal to " << x << "." << endl;
	}
	else {
		cout << "False, all the characters are equal to " << x << "." << endl;
	}

   return 0;
}