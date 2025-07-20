#include "swap_values.h"

void SwapValues(int& userVal1, int& userVal2, int& userVal3, int& userVal4) {
    int temp1 = userVal1;
    int temp2 = userVal3;
    userVal1 = userVal2;
    userVal2 = temp1;
    userVal3 = userVal4;
    userVal4 = temp2;

}