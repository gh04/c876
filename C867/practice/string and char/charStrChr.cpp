#include <cstring>
#include <iostream>
using namespace std;

/*
 *    Character array patientName and character 
 *    searchChar are assigned with a name and a 
 *    character read from input. Output "List A" 
 *    if searchChar does not exist in patientName, 
 *    and "List B" otherwise. End with a newline.
 */ 

int main() {
   char patientName[80];
	char searchChar;

   cin.getline(patientName, 80);
	cin >> searchChar;

   if (strchr(patientName, searchChar) != NULL) {
      cout << "List B" << endl;  
   } else {
      cout << "List A" << endl; 
   }

   return 0;
}