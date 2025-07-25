#include <iostream>
#include <string>
#include "Car.h"
using namespace std;

int main() {
    int userYear;
    int userPrice;
    int userCurrentYear;
    string status;
    Car newCar;
    cout << "Enter your model year: ";
    cin >> userYear;
    cout << "Enter the car's price: ";
    cin >> userPrice;
    cout << "Enter the current year: ";
    cin >> userCurrentYear;
    cout << "Enter \"y\" if under recall: ";
    cin >> status;
    if (status.compare("y") == 0 ) {
        newCar.SetRecall(true);
    }

    newCar.SetModelYear(userYear);
    newCar.SetPurchasePrice(userPrice);
    newCar.CalcCurrentValue(userCurrentYear);

    newCar.PrintInfo();
    
    
    return 0;
}