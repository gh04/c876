#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
    Define the Eatery class's GetName() accessor 
    that gets data member name and the GetCity() 
    accessor that gets data member city.

    Ex: If the input is:

    Mai
    Hartford

    then the output is:

    Eatery: Mai's Deli
    City: Hartford
*/
class Eatery {
   public:
      void SetName(string eateryName);      
      void SetCity(string eateryCity);      
      string GetName() const;     
      string GetCity() const;        
   private:
      string name;
      string city;
};

void Eatery::SetName(string eateryName) {
   name = eateryName + "'s Deli";
}

void Eatery::SetCity(string eateryCity) {
   city = eateryCity;
}

string Eatery::GetName() const {
    return name;
}

string Eatery::GetCity() const {
    return city;
}

int main() {
   Eatery restaurant;
   string inputName;
   string inputCity;

   cin >> inputName;
   cin >> inputCity;
   restaurant.SetName(inputName);
   restaurant.SetCity(inputCity);

   cout << "Eatery: " << restaurant.GetName() << endl;
   cout << "City: " << restaurant.GetCity() << endl;

   return 0;
}