#include <iostream>
#include <vector>
using namespace std;

/*
    Define a function named SwapValues that takes four 
    integers as parameters and swaps the first with the 
    second, and the third with the fourth values. Then 
    write a main program that reads four integers from 
    input and calls function SwapValues() to swap the
    input values. The main program then prints the swapped 
    values on a single line separated with spaces and ending
    with a newline.

    Ex: If the input is:
    3 8 2 4

    The main program then outputs:

    8 3 4 2
*/
int const VALUE_COUNT = 4;
void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4);
void getInputs(vector<int>& inputValues);

int main() { 
    vector<int> inputValues;   
    
    getInputs(inputValues);
   

    return 0;
}

void getInputs(vector<int>& vectorArr) {
    int inputVal;
    unsigned i;
     for (i = 0; i < VALUE_COUNT; ++i) {
        cin >> inputVal;
        vectorArr.push_back(inputVal);
    }
}



void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4) {

}
