#include <iostream>
#include <string>
using namespace std;

class FoodType {
   public:
      FoodType(string foodType);
      static int nextId;
      void Print();
   private:
      string type = "None";
      int id = 0;                
};

FoodType::FoodType(string foodType) {
   type = foodType;
   id = nextId;

   nextId += 3; // increments subsquent calls 
}

void FoodType::Print() {
   cout << id << ": " << type << endl;
}

int FoodType::nextId = 10;

int main() {
   FoodType order1("Sushi"); // id: 10
   FoodType order2("Noodles"); // id: 13
   FoodType order3("Muffins"); // id: 16

   order3.Print(); // 16: Muffins

   return 0;

}