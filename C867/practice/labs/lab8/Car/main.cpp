#include <iostream>
#include <string>
#include "car.h"

using namespace std;

int main() {

   string carMake, carModel;
   int year;
   
   cin >> carMake;
   cin >> carModel;
   cin >> year;
   
   // Create instances (objects) of the Car class
   Car car(carMake, carModel, year);

   // Call the displayInfo method on each car object
   cout << "Car Information:" << endl;
   car.displayInfo();

   return 0;
}
