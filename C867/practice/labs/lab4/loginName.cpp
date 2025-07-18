#include <iostream>
#include <string>
using namespace std;

/*
    Write a program that creates a login name for a user, 
    given the user's first name, last name, and a four-digit 
    number string as input. Output the login name, which is 
    made up of the first six letters of the first name, followed 
    by the first letter of the last name, an underscore (_), and 
    then the last digit of the number string. If the first name 
    has less than six letters, then use all letters of the first name.

    Ex:
    If the input is: 
    Michael Jordan 1991

    the output is: 
    Your login name: MichaeJ_1

    If the input is:
    Nicole Smith 2024

    the output is:
    Your login name: NicoleS_4


*/
int main() {
    string login;
    string first;
    string last;
    string number;

    cin >> first; cin >> last; cin >> number;

    cout << "Your login name: " 
         << first.substr(0, 6) 
         << last.substr(0,1) 
         << '_'
         << number.substr(number.length() - 1, 1) 
         << endl;

    return 0;
}