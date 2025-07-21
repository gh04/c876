#include <iostream>
#include <string>
using namespace std;

/*
    In the class definition, initialize the data members, 
    string renter, char weekendPrice, and integer mileage, 
    with the default values "Unknown", 'N', and -1, respectively.

    Ex: If the input is Mel Y 129000, then the output is:

    Renter: Unknown, Weekend price: N, Mileage: -1
    Renter: Mel, Weekend price: Y, Mileage: 129000

    Note: The class's print function is called first after 
    the default constructor, then again after the inputs are 
    passed to the setters.
*/

class RentalCar {
   public:
      void SetRenter(string rentalCarRenter);
		void SetWeekendPrice(char rentalCarWeekendPrice);
		void SetMileage(int rentalCarMileage);
      void Print();

   private:
     string renter;
     char weekendPrice;
     int mileage;

};

RentalCar::RentalCar() {
    renter = "Unkown";
    weekendPrice = 'N';
    mileage = -1;
}

void RentalCar::SetRenter(string rentalCarRenter) {
	renter = rentalCarRenter;
}

void RentalCar::SetWeekendPrice(char rentalCarWeekendPrice) {
	weekendPrice = rentalCarWeekendPrice;
}

void RentalCar::SetMileage(int rentalCarMileage) {
	mileage = rentalCarMileage;
}

void RentalCar::Print() {
   cout << "Renter: " << renter << ", Weekend price: " << weekendPrice << ", Mileage: " << mileage << endl;
}

int main() {
   string newRenter;
	char newWeekendPrice;
	int newMileage;
   RentalCar favoriteRentalCar;

   favoriteRentalCar.Print();

   cin >> newRenter;
	cin >> newWeekendPrice;
	cin >> newMileage;

   favoriteRentalCar.SetRenter(newRenter);
	favoriteRentalCar.SetWeekendPrice(newWeekendPrice);
	favoriteRentalCar.SetMileage(newMileage);

   favoriteRentalCar.Print();

   return 0;
}