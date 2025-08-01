#include <iostream>
using namespace std;


/*
    The Fibonacci sequence begins with 0 and then 1 
    follows. All subsequent values are the sum of 
    the previous two, for example: 0, 1, 1, 2, 3, 5, 8, 13.
    Complete the Fibonacci() function, which has an index, 
    n (starting at 0), as a parameter and returns the nth 
    value in the sequence. Any negative index values 
    should return -1.

Ex: If the input is:

7
the output is:

Fibonacci(7) is 13
Note: Use a for loop and DO NOT use recursion.
*/
int Fibonacci(int n) {
    int first = 0;
    int second = 1;
    int next;

    if (n < 0) {
        return -1;
    } else if (n < 2) {
        return n;
    }

    for (int i = 0; i < n; ++i) {
        next = first + second;
        first = second;
        second = next;
    }

    return first;
    

}

int main() {
   int startNum;
      
   cin >> startNum;
   cout << "Fibonacci(" << startNum << ") is " << Fibonacci(startNum) << endl;

   return 0;
}