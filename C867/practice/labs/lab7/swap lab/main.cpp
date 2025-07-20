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
bool CheckVectorSize(const vector<int>& vectorArr);
void GetInputs(vector<int>& inputValues);
void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4);

int main() { 
    vector<int> inputValues;   
    
    GetInputs(inputValues);
   
    if (CheckVectorSize(inputValues)) {
        SwapValues(inputValues.at(0), 
                   inputValues.at(1), 
                   inputValues.at(2), 
                   inputValues.at(3)
                  );
    }
    return 0;
}

void GetInputs(vector<int>& vectorArr) {
    int inputVal;
    unsigned i;
     for (i = 0; i < VALUE_COUNT; ++i) {
        cin >> inputVal;
        vectorArr.push_back(inputVal);
    }
}

bool CheckVectorSize(const vector<int>& vectorArr) {
    if (vectorArr.size() == VALUE_COUNT) {
        // cout << "TRUE\n"; // DEBUGGING
        return true;
    }

    return false;
}

void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4) {
    int temp1 = userVal1;
    int temp2 = userVal3;
    userVal1 = userVal2;
    userVal2 = temp1;
    userVal3 = userVal4;
    userVal4 = temp2;

    cout << userVal1 
         << " " 
         << userVal2 
         << " " 
         << userVal3 
         << " " 
         << userVal4 << endl;

}
