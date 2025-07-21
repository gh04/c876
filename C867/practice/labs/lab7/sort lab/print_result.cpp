#include <iostream>
#include "print_result.h"
#include "coin_flip.h"


void PrintResult(int nTimes) {
    for (int i = 0; i < nTimes; ++i) {
        std::cout << CoinFlip() << std::endl;
    }
}