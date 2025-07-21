#include <ctime>
#include "print_result.h"
#include "get_input.h"
#include "rand_n.h"
#include "coin_flip.h"
using namespace std;

int main() {
    srand(time(nullptr)); // Seeding rand
    PrintResult(GetInput()); // GetInput() gets the num of fips. PrintR...() calls CoinFlip()

    return 0;
}

