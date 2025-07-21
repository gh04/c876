#include <iostream>
using namespace std;

class FishermanLicense {
   public:
      void SetYear(int customYear);
      void SetFee(int customFee);
      int GetYear() const;
      int GetFee() const;
   private:
      int year;
      int fee;
};

void FishermanLicense::SetYear(int customYear) {
   year = customYear;
}

void FishermanLicense::SetFee(int customFee) {   
   fee = customFee;
}

int FishermanLicense::GetYear() const {
   return year;
}

int FishermanLicense::GetFee() const {
   return fee;
}

int main() {
   FishermanLicense fisherman1;
   int userYear;
   int userFee;

   cin >> userYear;
   cin >> userFee;

   fisherman1.SetYear(userYear);
   fisherman1.SetFee(userFee);
   
   cout << "License year: " << fisherman1.GetYear() << endl;
   cout << "License fee: " << fisherman1.GetFee() << endl;

   return 0;
}