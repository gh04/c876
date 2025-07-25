#ifndef CARH
#define CARH

#include <vector>
using namespace std;

class Car {
   private:
      int modelYear;
      int purchasePrice;
      int currentValue;
      bool recallStatus;

   
   public:
    Car();
      void SetModelYear(int userYear);
      int GetModelYear() const;
      void SetPurchasePrice(int userPrice);
      int GetPurchasePrice() const;
      void CalcCurrentValue(int currentYear);
      void PrintInfo();
      // TO DO add setter and getter for recall status
      void SetRecall(bool status);
      bool GetRecall() const;
}; 

#endif