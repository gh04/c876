#include <iostream>
#include <string>
using namespace std;

/*
    Many documents use a specific format for a person's name. 
    
    Write a program whose input is: firstName middleName lastName

    and whose output is: lastName, firstInitial.middleInitial.

    Ex: If the input is: Pat Silly Doe
    the output is: Doe, P.S.
    
    If the input has the form: firstName lastName
    the output is: lastName, firstInitial.

    Ex: If the input is: Julia Clark
    the output is: Clark, J.
*/

int main() {
    string inputName;
    int firstWhiteSpace;
    int secondWhiteSpace;

    getline(cin, inputName);

    // Find the index of the first and second white space
    firstWhiteSpace = inputName.find(' ');
    secondWhiteSpace = inputName.find(' ', firstWhiteSpace + 1);

    // cout << firstWhiteSpace << " : " <<  secondWhiteSpace << endl;
    // if .find() returns string::npos it means no whitespace was found
    if (secondWhiteSpace == string::npos) {
        // Get the last name that starts at index after the whitespace
        cout << inputName.substr(firstWhiteSpace + 1, inputName.length()) 
             << ", " 
             << inputName.substr(0, 1) + '.' // Get the first char of the first name
             << endl;
    } else {
        cout << inputName.substr(secondWhiteSpace + 1, inputName.length()) 
             << ", " 
             << inputName.substr(0, 1) + '.' + inputName.substr(firstWhiteSpace + 1, 1) + '.' // Get the firt char of first name and first char of middle name
             << endl;        
    }

   return 0;
}