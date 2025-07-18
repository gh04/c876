#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    string fileName;

    // Get the name of the input file
    cout << "File: ";
    cin >> fileName;

    // Open the input file
    ifstream file(fileName);

    // Print contents of input file
    if(file.is_open()) {
        cout << file.rdbuf() << endl;
    }

    // Close the input file
    file.close();

    return 0;
}
