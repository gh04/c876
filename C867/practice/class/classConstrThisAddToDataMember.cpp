#include <iostream>
using namespace std;

class Airplane {
   public:
      Airplane();
      void AddPassengers(int passengers);
      int GetAvailableSeats() const;
   private:
      int totalSeats;
      int passengers;
};

Airplane::Airplane() {
   totalSeats = 200;
   passengers = 0;
}

void Airplane::AddPassengers(int passengers) {
    // adds the parameter numYears to the existing value of data member
   this->passengers = this->passengers + passengers;
}

int Airplane::GetAvailableSeats() const {
   return totalSeats - passengers;
}

int main() {
   Airplane airbus330;

   airbus330.AddPassengers(3);
   airbus330.AddPassengers(8);

   cout << airbus330.GetAvailableSeats() << " seats" << endl;

   return 0;
}