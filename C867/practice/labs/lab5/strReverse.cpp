#include <iostream>
// #include <cctype>
// #include <string>
using namespace std;

int main () {
    string str;
    string newStr;
    char const NEW_LINE = '\n';
    getline(cin, str);
    
    while(!(str == "done" || str == "Done" || str == "d")) {

        for (unsigned i = 0; i < str.length(); ++i) {
            newStr += str.at(str.length() - 1 - i); // len is always index + 1 so we subtract 1 - i to stay inbounds.
        }
        // Add a line break to each str
        newStr += NEW_LINE;
        getline(cin, str);
    }

    cout << newStr;

   return 0; 
}