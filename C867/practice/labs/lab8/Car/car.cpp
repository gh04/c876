#include "car.h"

using namespace std;

Car::Car() {
   this->make = "unknown";
   this->model = "unknown";
   this->year = -1;
}

Car::Car(string carMake, string carModel, int carYear) {
   this->make = carMake;
   this->model = carModel;
   this->year = carYear;

}

// Accessor Methods
string Car::getMake() const {
   return make;
}

string Car::getModel() const {
   return model;
}

int Car::getYear() const {
   return year;
}
   
// Method to display car information
void Car::displayInfo() {
   // TODO: Define get function: displayInfo()
   cout << "Car Make: " << make << endl;
   cout << "Car Model: " << model << endl;
   cout << "Car Year: " << year << endl;
}