#include <iostream>
using namespace std;

/*
    The first and second integers in the input are read into variables previousNum 
    and currentNum, respectively. Write a loop that iterates while currentNum is 5 
    plus previousNum. In each iteration:

    Output currentNum, followed by " is 5 plus ", previousNum, and ". Sequence is 
    increasing arithmetically." End with a newline.
    
    Assign previousNum with currentNum.
    
    Read the next integer from input and assign currentNum with the integer read.
    
    After the loop, output the last integer read followed by " breaks the sequence." and a newlin
*/

int main() {
   int currentNum;
   int previousNum;
   
   cin >> previousNum;
   cin >> currentNum;
   cout << "Sequence starts at " << previousNum << "." << endl;

   while (currentNum == 5 + previousNum) {
      cout << currentNum << " is 5 plus " << previousNum << ". Sequence is increasing arithmetically.\n";
      previousNum = currentNum;
      cin >> currentNum;
      currentNum = currentNum;
   }
   
   cout << currentNum << " breaks the sequence.\n";

   return 0;
}