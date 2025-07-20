#include "check_vector_size.h"

bool CheckVectorSize(const vector<int>& vectorArr, int expectedSize) {
    if (vectorArr.size() == expectedSize) {
        // cout << "TRUE\n"; // DEBUGGING
        return true;
    }

    return false;
}