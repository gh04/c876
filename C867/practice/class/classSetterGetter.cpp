#include <iostream>
using namespace std;

class Dog {
   public:
      void SetAge(int monthsToSet);
      string GetStage() const;
   private:
      int months;
};

void Dog::SetAge(int monthsToSet) {
   months = monthsToSet;
}

string Dog::GetStage() const {
   string stage;
   if (months < 11) {
      stage = "Puppy";
   }
   else if (months < 25) {
      stage = "Adolescence";
   }
   else if (months < 50) {
      stage = "Adulthood";
   }
   else {
      stage = "Senior";
   }
    
   return stage;
}

int main() {
   Dog buddy;

   buddy.SetAge(27);

   cout << buddy.GetStage();
   return 0;
}