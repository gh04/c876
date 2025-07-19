#include <iostream>
using namespace std;

/*
 *    Write a program that declares an integer array 
 *    with a size of 6. Populate each element of this 
 *    array with user input. Using this populated integer 
 *    array, compute and print to console the sum of the 
 *    even indexes, and the product of the odd indexes
 *
 *    When printing to the console, place a new line between 
 *    each output.
 *
 *    Example Input:
 *    0
 *    1
 *    2
 *    3
 *    4
 *    5
 *    
 *    Output:
 *    6
 *    15
*/

int main() {
   int arr[6];
   int inputValue;
   int sum = 0;
   int product = 1;
   int i;

   for (i = 0; i < 6; ++i) {
    cin >> inputValue;
    arr[i] = inputValue;
   }

   for (i = 0; i < 6; ++i) {
    if (i % 2 == 0) {
        sum += arr[i];
    } else {
        product = product * arr[i];
    }
   }

   cout << sum << endl;
   cout << product;

   return 0;
}