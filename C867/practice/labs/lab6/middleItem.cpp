#include <iostream>
#include <vector>
using namespace std;

/*
    Given a sorted list of integers, output the middle integer. 
    A negative number indicates the end of the input 
    (the negative number is not a part of the sorted list). 
    Assume the number of integers is always odd.

    Ex: If the input is:
    2 3 4 8 11 -1 
    
    the output is:
    Middle item: 4
    
    The maximum number of list values for any test case should 
    not exceed 9. If exceeded, output "Too many numbers".
*/
int main() {
    vector <int> sortedList;
    int inputValue;
    int numCount = 0;

    cin >> inputValue;

    while (inputValue != -1) {
        sortedList.push_back(inputValue);
        cin >> inputValue;
        ++numCount;
    }
    
    if (numCount > 9 ) {
      cout << "Too many numbers" << endl;
      return 1;
    }

    cout << "Middle item: " 
         << sortedList.at(sortedList.size() / 2) 
         << endl;
    
    return 0;
}