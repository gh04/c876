#include <iostream>
#include <iomanip>
using namespace std;
/*
    Statistics are often calculated with varying amounts of 
    input data. Write a program that takes any number of 
    non-negative integers as input, and outputs the max and 
    average. A negative integer ends the input and is not 
    included in the statistics. Assume the input contains at 
    least one non-negative integer.
*/
int main() {
    int inputVal   = 0;
    int inputSum   = 0;
    int count      = 0;
    int max        = 0;
    double average = 0;

    cin >> inputVal;

    while (inputVal >= 0) {
        inputSum += inputVal;
        ++count;
        if (inputVal > max) {
            max = inputVal;
        }
        cin >> inputVal;
    }

    if (count > 0) {
        average = static_cast<double>(inputSum) / count;
    }

    cout << fixed 
         << setprecision(2) 
         << max 
         << " " 
         << average 
         << endl;

   return 0;
}
