#include <iostream>
#include <cstdlib>
#include "get_input.h"

int GetInput() {
    int i;
    if (!(std::cin >> i)) {
        std::cerr << "Invalid input.\n";
        exit(1);
    }
    return i;
}