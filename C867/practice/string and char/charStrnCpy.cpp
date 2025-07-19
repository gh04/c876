#include <cstring>
#include <iostream>
using namespace std;

/*
 *    Variables fruitStr, symbolStr, and numChars are 
 *    assigned with a string for a fruit name, a string 
 *    of symbols, and an integer read from input, respectively. numChars 
 *    represents the number of characters to copy. Copy 
 *    numChars characters from symbolStr to the beginning of fruitStr.
 *
 *
 *    Ex: If the input is:
 *    
 *    pomegranate
 *    ???????????
 *    3
 *    then the output is:
 *    
 *    ???egranate
 */
int main() {
    char fruitStr[80];
	char symbolStr[80];
	int numChars;

    cin >> fruitStr;
	cin >> symbolStr;
	cin >> numChars;

   strncpy(fruitStr, symbolStr, numChars);

   cout << fruitStr << endl;

   return 0;
}