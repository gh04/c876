#include <iostream>
#include <vector>
using namespace std;

/*
    Write a program that reads a list of integers 
    and outputs those integers in reverse. The input 
    begins with an integer indicating the number of 
    integers that follow. For coding simplicity, 
    follow each output integer by a comma, including 
    the last one.

    Ex: If the input is:
    5
    2 4 6 8 10
    
    the output is:
    10,8,6,4,2,
*/
int main() {
    vector <int> userInts;
    int numValues;
    unsigned numCount;
    int temp;
    unsigned i;

    cin >> numCount;
    
    for(i = 0; i < numCount; ++i) {
        cin >> numValues;
        userInts.push_back(numValues);
    }

    for (i = 0; i < userInts.size() / 2; ++i) {
        temp = userInts.at(i);
        userInts.at(i) = userInts.at(userInts.size() - 1 - i);
        userInts.at(userInts.size() - 1 - i) = temp;
    }

    for (i = 0; i < userInts.size(); ++i) {
        cout << userInts.at(i) << ",";
    }

    cout << endl;

    return 0;
}