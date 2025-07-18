#include <iostream>
#include <cctype>
#include <cmath>
#include <limits>
#include <iomanip>
using namespace std;

enum class CompoundFreq : int { Monthly=12, Quarterly=4, Yearly=1 };

double promptPositiveDouble(const string& prompt) {
    double x;
    while (true) {
        cout << prompt;
        if (cin >> x && x > 0) break;
        cout << "  ↳ Please enter a positive number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return x;
}

int promptPositiveInt(const string& prompt) {
    int n;
    while (true) {
        cout << prompt;
        if (cin >> n && n > 0) break;
        cout << "  ↳ Please enter a positive integer.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return n;
}

CompoundFreq promptCompoundFreq() {
    char ch;
    while (true) {
        cout << "Compound cycle (M/Q/Y): ";
        cin >> ch;
        ch = tolower(static_cast<unsigned char>(ch));
        switch (ch) {
            case 'm': return CompoundFreq::Monthly;
            case 'q': return CompoundFreq::Quarterly;
            case 'y': return CompoundFreq::Yearly;
        }
        cout << "  ↳ Must be M, Q or Y.\n";
    }
}

int main() {
    double initial   = promptPositiveDouble("Enter initial savings: ");
    double ratePct   = promptPositiveDouble("Enter annual rate (%): ");
    CompoundFreq f   = promptCompoundFreq();
    int years        = promptPositiveInt("Enter number of years: ");

    double rate      = ratePct / 100.0;
    int    freq      = static_cast<int>(f);
    double curr      = initial;

    cout << "\nBalance over " << years << " years:\n"
         << fixed << setprecision(2);

    for (int y = 0; y <= years; ++y) {
        cout << "Year " << setw(2) << y << ": $"
             << setw(10) << curr << "\n";
        curr *= pow(1 + rate/freq, freq);
    }
    return 0;
}
