#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int GetInput();
string CoinFlip();
int RandN();
void PrintResult(int nTimes);


int main() {
    srand(2); // Setting the seed requirement that is provided
    PrintResult(GetInput());

    return 0;
}

int GetInput() {
    int i;
    if (!(cin >> i)) {
        cerr << "Invalid input.\n";
        exit(1);
    }
    return i;
}

string CoinFlip() {
   return (RandN() == 0) ? "Tails" : "Heads";
}

int RandN() {
    return rand() % 2;
}

void PrintResult(int nTimes) {
    for (int i = 0; i < nTimes; ++i) {
        cout << CoinFlip() << endl;
    }
}

