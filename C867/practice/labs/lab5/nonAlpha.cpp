#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
    Write a program that removes all non alpha 
    characters from the given input.

    Ex: If the input is:
    -Hello, 1 world$!
    
    the output is:
    Helloworld
*/

int main() {
   string inputVal;
   string newStr;


   getline(cin,inputVal);
   
    for (int i = 0; i < inputVal.length(); ++i) {
        if (isalpha(inputVal.at(i))) {
            newStr.push_back(inputVal.at(i));
        }
    }

    cout << newStr << endl;
   return 0;
}