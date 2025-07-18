#include <iostream>
#include <vector>
using namespace std;

/*
    Given the integer vector listVals with seven elements 
    and the input integer numDeleted, resize listVals to 
    remove numDeleted elements from the vector.

    Ex: If the input is 2, then the output is:

    Start 14 10 13 11 12 9 15 End
    Start 14 10 13 11 12 End

    Note: Assume that numDeleted is a non-negative integer less 
    than or equal to the vector's size.
*/
int main() {
   vector<int> listVals(7);
   int listValsSize = listVals.size();
   int numDeleted;
   int i;
   
   listVals.at(0) = 14;
	listVals.at(1) = 10;
	listVals.at(2) = 13;
	listVals.at(3) = 11;
	listVals.at(4) = 12;
	listVals.at(5) = 9;
	listVals.at(6) = 15;
   
   cin >> numDeleted;
   
   cout << "Start ";
	for (i = 0; i < listVals.size(); ++i) {
      cout << listVals.at(i) << " ";
   }
	cout << "End" << endl;

   listVals.resize(listValsSize - numDeleted);

   cout << "Start ";
	for (i = 0; i < listVals.size(); ++i) {
      cout << listVals.at(i) << " ";
   }
	cout << "End" << endl;

   return 0;
}