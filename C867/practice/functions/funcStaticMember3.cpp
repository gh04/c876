#include <iostream>
#include <string>
using namespace std;

class FoodOrder {
   public:
      FoodOrder(string foodType);
      static int GetNextId();
   private:
      string type = "None";
      int id = 0;        
      static int nextId;
};

FoodOrder::FoodOrder(string foodType) {
   type = foodType;
   id = nextId;

   nextId += 1;  
}

int FoodOrder::GetNextId() {
   return nextId;
}

int FoodOrder::nextId = 70;

int main() {
   FoodOrder order1("Soup");
   FoodOrder order2("Noodles");
   FoodOrder order3("Muffins");

   cout << "Next ID: " << FoodOrder::GetNextId() << endl;

   return 0;
}