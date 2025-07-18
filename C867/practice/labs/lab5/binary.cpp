#include <iostream>
using namespace std;

/*
    Write a program that takes in a positive 
    integer as input, and outputs a string of 
    1's and 0's representing the integer in 
    reverse binary. For an integer x, the 
    algorithm is:

    As long as x is greater than 0
    Output x % 2 (remainder is either 0 or 1)
    x = x / 2
*/
int main() {
    int inputVal;

    cin >> inputVal;

    while (inputVal > 0) {
        cout << inputVal % 2;
        inputVal /= 2;
    }
        cout << endl;

    return 0;
}
