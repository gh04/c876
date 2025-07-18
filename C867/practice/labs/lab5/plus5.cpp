#include <iostream>
using namespace std;
/*
    Write a program whose input is two integers, 
    and whose output is the first integer and 
    subsequent increments of 5 as long as the 
    value is less than or equal to the second integer.
*/
int main() {
    int inputVal1;
    int inputVal2;

    cin >> inputVal1;
    cin >> inputVal2;
    
    if (inputVal2 < inputVal1) {
    cout << "Second integer can't be less than the first.\n";
    return 1;
    }

    for (int i = inputVal1; i <= inputVal2; i += 5) {
        cout << i << " ";
    }
    cout << endl;
    return 0;   
}
