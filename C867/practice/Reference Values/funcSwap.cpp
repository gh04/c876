#include <iostream>
using namespace std;

/*
    Define a function SwapRank() that takes two char 
    parameters passed by reference and swaps the 
    values in the two parameters. The function does 
    not return any value.

    Ex: If input is D B, then output is:

    B D
*/
void SwapRank(char& rank1, char& rank2) {
   char temp = rank1;
   rank1 = rank2;
   rank2 = temp;
}


int main() {
   char rank1;
	char rank2;

	cin >> rank1;
	cin >> rank2;

   SwapRank(rank1, rank2);

   cout << rank1 << " " << rank2 << endl;
   
   return 0;
}