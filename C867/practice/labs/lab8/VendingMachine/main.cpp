#include <iostream>

#include "VendingMachine.h"
using namespace std;

int main() {
	int numBuy;
    int numRestock;
    VendingMachine mach;

    cin >> numBuy;
    cin >> numRestock;

    mach.Purchase(numBuy);
    mach.Restock(numRestock);

    mach.Report();


}