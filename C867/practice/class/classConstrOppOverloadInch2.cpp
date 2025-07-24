// "New" means new compared to previous level
#include <iostream>
using namespace std;

class InchSize {
   public:
      InchSize(int wholeInches = 0, int sixteenths = 0);
      void Print() const;
      InchSize operator+(InchSize rhs);
      InchSize operator-(InchSize rhs);
   private:
      int inches;
      int sixteenths;
};

InchSize InchSize::operator+(InchSize rhs) {
   InchSize totalSize;

   totalSize.inches = inches + rhs.inches;
   totalSize.sixteenths = sixteenths + rhs.sixteenths;

   // If sixteenths is greater than an inch, carry 1 to inches.
   if (totalSize.sixteenths >= 16) {
      totalSize.inches += 1;
      totalSize.sixteenths -= 16;
   }

   return totalSize;
}

// New: Overloaded - operator.
InchSize InchSize::operator-(InchSize rhs) {
   InchSize totalSize;

   totalSize.inches = inches - rhs.inches;
   totalSize.sixteenths = sixteenths - rhs.sixteenths;

   // If sixteenths is negative, and we have at least 1 inch, carry 1 from inches.
   if (totalSize.sixteenths < 0 && totalSize.inches > 0) {
      totalSize.inches -= 1;
      totalSize.sixteenths += 16;
   }

   return totalSize;
}

InchSize::InchSize(int wholeInches, int sixteenthsOfInch) {
   inches = wholeInches;
   sixteenths = sixteenthsOfInch;
}

void InchSize::Print() const {
   cout << inches << " " << sixteenths << "/16 inches" << endl;
}

int main() {
   InchSize size1(1, 12);
   InchSize size2(3, 11);
   InchSize spaceAvailable(8, 1);
   InchSize sumSize;
   InchSize remainingSpace;

   sumSize = size1 + size2;
   remainingSpace = spaceAvailable - sumSize;

   remainingSpace.Print();

   return 0;
}