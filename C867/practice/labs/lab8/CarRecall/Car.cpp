//
//  Car.cpp
//  C++ Various
//

#include <iostream>
#include <math.h>
#include "Car.h"
using namespace std;

Car::Car() : recallStatus(false) {}
// modelYear setter and getter
void Car::SetModelYear(int userYear){
   modelYear = userYear;
}

int Car::GetModelYear() const {
   return modelYear;
}

// purchasePrice setter and getter
void Car::SetPurchasePrice(int userPrice){
   purchasePrice = userPrice;
}

int Car::GetPurchasePrice() const {
   return purchasePrice;
}

// currentValue setter
void Car::CalcCurrentValue(int currentYear) {
   double depreciationRate = 0.15;
   int carAge = currentYear - modelYear;
      
// Car depreciation formula
   currentValue = (int)
      round(purchasePrice * pow((1 - depreciationRate), carAge));
}

// TO DO write setter for recall status
void Car::SetRecall(bool status) {
    this->recallStatus = status;
}
// TO DO write getter for recall status
bool Car::GetRecall() const { return recallStatus; }
void Car::PrintInfo(){
   cout << "Car's information:" << endl;
   cout << "Model year: " << modelYear << endl;
   cout << "Purchase price: $" << purchasePrice << endl;
   cout << "Current value: $" << currentValue << endl;
   cout << (!recallStatus ? "No known recalls exist for this model year." : "This car is under recall!");
}
