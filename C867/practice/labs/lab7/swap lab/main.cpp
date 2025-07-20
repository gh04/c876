#include <iostream>
#include <vector>
#include "swap_values.h"
#include "get_inputs.h"
#include "check_vector_size.h"
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

int main() { 
    vector<int> inputValues;   
    
    GetInputs(inputValues);
   
    if (CheckVectorSize(inputValues, VALUE_COUNT)) {
        SwapValues(inputValues.at(0), 
                   inputValues.at(1), 
                   inputValues.at(2), 
                   inputValues.at(3)
                  );
    }

        cout << inputValues.at(0) << " "
             << inputValues.at(1) << " "
             << inputValues.at(2) << " "
             << inputValues.at(3) << endl;

    return 0;
}