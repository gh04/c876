#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "You entered " << s.size() << " characters:\n";

    // Old-style index loop
    for (size_t i = 0; i < s.size(); ++i) {
        cout << s[i] << '\n';
    }

    return 0;
}
