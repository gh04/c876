#include <iostream>
using namespace std;

int main() {
    int highwayNumber;
    cin >> highwayNumber;

    if (highwayNumber == 0) {
        cout << highwayNumber
             << " is not a valid interstate highway number.\n";
    }
    else if (highwayNumber <= 99) {
        // Primary interstate
        // Inner loop
        if (highwayNumber % 2 == 0) {
            cout << "I-" << highwayNumber
                 << " is primary, going east/west.\n";
        }
        else {
            cout << "I-" << highwayNumber
                 << " is primary, going north/south.\n";
        }
    }
    else if (highwayNumber % 100 == 00) {
        // Ends in 00 is invalid
        cout << highwayNumber
             << " is not a valid interstate highway number.\n";
    }
    else {
        // Auxiliary interstate
        int parent = highwayNumber % 100;
        if (highwayNumber % 2 == 0) {
            cout << "I-" << highwayNumber
                 << " is auxiliary, serving I-"
                 << parent
                 << ", going east/west.\n";
        }
        else {
            cout << "I-" << highwayNumber
                 << " is auxiliary, serving I-"
                 << parent
                 << ", going north/south.\n";
        }
    }

    return 0;
}


// int main() {
//     int hwy;
//     cin >> hwy;

//     // 1) Invalid if zero/negative OR exactly divisible by 100
//     if (hwy <= 0 || hwy % 100 == 0) {
//         cout << hwy
//              << " is not a valid interstate highway number.\n";
//     }
//     // 2) Primary: 1–99
//     else if (hwy < 100) {
//         cout << "I-" << hwy
//              << " is primary, going "
//              << ((hwy % 2 == 0) ? "east/west.\n"
//                                 : "north/south.\n");
//     }
//     // 3) Auxiliary: 100+ and not a multiple of 100
//     else {
//         int parent = hwy % 100;  // last two digits: 90 from 290, 0 from 300
//         cout << "I-" << hwy
//              << " is auxiliary, serving I-"
//              << parent
//              << ", going "
//              << ((hwy % 2 == 0) ? "east/west.\n"
//                                 : "north/south.\n");
//     }

//     return 0;
// }
