#include "get_inputs.h"
#include <iostream>
using namespace std;

void GetInputs(vector<int>& vectorArr) {
    int inputVal;
    for (int i = 0; i < 4; ++i) {
        cin >> inputVal;
        vectorArr.push_back(inputVal);
    }
}
