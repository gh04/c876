#include <iostream>
#include <iomanip>
#include <cmath>
#include "Car.h"
using namespace std;

void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

// TODO: Implement SetPurchasePrice() function
void Car::SetPurchasePrice(int newPurchasePrice) {
     this->purchasePrice = newPurchasePrice;
}

// TODO: Implement GetPurchasePrice() function
int Car::GetPurchasePrice() const {
    return this->purchasePrice;
}

void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
   // Car depreciation formula
   currentValue = purchasePrice * pow((1 - depreciationRate), carAge);
}

// TODO: Implement PrintInfo() function to output modelYear, purchasePrice, and 
// currentValue
void Car::PrintInfo() const {
    cout << fixed << setprecision(0)
         << "Car's information:\n"
         << "  Model year: " << GetModelYear()
         << "\n  Purchase price: $" << GetPurchasePrice()
         << "\n  Current value: $" << currentValue << endl;

}