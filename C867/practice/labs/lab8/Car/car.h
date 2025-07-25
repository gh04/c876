#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

// Define the Car class
class Car {
public:
   // Constructor to initialize object attributes
   Car();
   Car(string carMake, string carModel, int carYear);

   // Accessor Methods
   string getMake() const;
   string getModel() const;
   int getYear() const;
   
   // Method to display car information
   void displayInfo();

private:
   string make;
   string model;
   int year;
};

#endif