#include <iostream>
using namespace std;

/*
    Write a program whose inputs are three integers, and whose output
    is the smallest of the three values.

    Ex: If the input is:
    7 15 3
    
    the output is:
    3
*/
int main() {
   int input1;
   int input2;
   int input3;

   cin >> input1; cin >> input2; cin >> input3;

   if (input1 < input2 && input1 <= input3) {
        cout << input1 << endl;
   } 
   else if (input2 < input3 && input2 <= input1 ) {
        cout << input2 << endl;
   } 
   else {
        cout << input3 << endl;
   } 

   return 0;
}