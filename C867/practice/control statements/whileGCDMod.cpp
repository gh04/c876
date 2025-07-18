#include <iostream>
using namespace std;

// Returns the greatest common divisor of a and b
int gcd(int a, int b) {
    // Make sure a, b ≥ 0
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Euclid’s modulo-based algorithm
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int numA, numB;
    cout << "Enter first positive integer: ";
    cin  >> numA;
    cout << "Enter second positive integer: ";
    cin  >> numB;

    int answer = gcd(numA, numB);
    cout << "GCD is: " << answer << endl;
    return 0;
}