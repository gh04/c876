#include <iostream>
#include <vector>
using namespace std;

/*
    Four elements are read into keysList and four 
    elements are read into itemsList. For any element 
    in keysList with a value greater than 100, print 
    the corresponding value in itemsList, followed by 
    a space.

    Ex: If the input is:
    42 105 101 100 10 20 30 40 

    then keysList = {42, 105, 101, 100} 
    and itemsList = {10, 20, 30, 40}. 
    
    The elements at indices 1 and 2 of keysList are greater 
    than 100. So, the elements at the same indices of 
    itemsList are printed. 
    
    Thus, the output is:
    20 30 
*/
int main() {
   const int SIZE_LIST = 4;
   vector<int> keysList;
   vector<int> itemsList;
   unsigned int i;
   int input;

   for (i = 0; i < SIZE_LIST; ++i) {
      cin >> input;
      keysList.push_back(input);
   }

   for (i = 0; i < SIZE_LIST; ++i) {
      cin >> input;
      itemsList.push_back(input);
   }

    for (i = 0; i < SIZE_LIST; ++i) {
      if (keysList.at(i) > 100) {
        cout << itemsList.at(i) << " ";
      }
   }

   cout << endl;

   return 0;
}