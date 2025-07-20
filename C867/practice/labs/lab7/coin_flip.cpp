#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int GetInput();
string CoinFlip();
int RandN();
void PrintResult(int nTimes);


int main() {
    srand(2);
    PrintResult(GetInput());

    return 0;
}

int GetInput() {
    int i;
    cin >> i;
    return i;
}

string CoinFlip() {
   return (RandN == 0) ? "Tails" : "Heads";
}

int RandN() {
    return rand() % 2;
}

void PrintResult(int nTimes) {
    int i;

    for (i = 0; i < nTimes; ++i) {
        cout << CoinFlip() << endl;
    }
}

