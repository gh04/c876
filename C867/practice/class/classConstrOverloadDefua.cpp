#include <iostream>
#include <string>
using namespace std;
/*
    Like any function, a constructor's parameters may be 
    assigned default values.

    If those default values allow the constructor to be 
    called without arguments, then that constructor can 
    serve as the default constructor.

    The default values could be in the function definition, 
    but are clearer to class users in the declaration.
*/

class Restaurant {
   public:
      Restaurant(string initName = "NoName", int initRating = -1);
      void Print();

   private:
      string name;
      int rating;
};

Restaurant::Restaurant(string initName, int initRating) {
   name = initName;
   rating = initRating;
}

// Prints name and rating on one line
void Restaurant::Print() {
   cout << name << " -- " << rating << endl;
}

int main() {
   Restaurant foodPlace;
   Restaurant coffeePlace("Joes", 5);

   foodPlace.Print();
   coffeePlace.Print();

   return 0;
}