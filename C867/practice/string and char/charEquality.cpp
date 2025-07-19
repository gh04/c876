#include <cstring>
#include <iostream>
using namespace std;

/*
 *    Variables patientName and searchChar 
 *    are assigned with a string and character 
 *    read from input. For each character in 
 *    patientName, assign the character with '=' 
 *    if the character is not equal to searchChar.
 *
 *    Ex: If the input is:
 *    
 *    Ogonna
 *    n
 * 
 *    then the output is:
 *    ===nn=
 */
int main() {
   char patientName[20];
	char searchChar;
	int i;
    int len;

    cin >> patientName;
	cin >> searchChar;
    len = strlen(patientName);
   
    for (i = 0; i < len; ++i) {
    if (patientName[i] != searchChar) {
       patientName[i] = '=';
     }
   }
	cout << patientName << endl;

   return 0;
}