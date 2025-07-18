#include <iostream>
using namespace std;

int main() {
    int hourlyWage;

    cout << "Enter hourly wage: ";
    cin >> hourlyWage;

    
    cout << "Salary is $";
    cout << hourlyWage * 40 * 52;
    cout << endl;
}