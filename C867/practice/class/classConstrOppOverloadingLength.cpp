#include <iostream>
using namespace std;

class Length {
   public:
      Length(int ft = 0, int in = 0);
      void Print() const;
      Length operator-(Length rhs);
   private:
      int feet;
      int inches;
};

Length::Length(int ft, int in) {
   feet = ft;
   inches = in;
}

// No need to accommodate for overflow or negative values
Length Length::operator-(Length rhs) {
   Length totalDiff;
   
   totalDiff.feet = feet - rhs.feet;
   totalDiff.inches = inches - rhs.inches;
   // if inches is greater than a foot carry 1 to feet
   if (totalDiff.inches > 12) {
      totalDiff.feet += 1;
      totalDiff.inches -= 12;
   }
   
   return totalDiff;
   

}

void Length::Print() const {
   cout << feet << " feet, " << inches << " inches";
}

int main() {
   int ft1;
	int in1;
	int ft2;
	int in2;
   
   cin >> ft1;
	cin >> in1;
	cin >> ft2;
	cin >> in2;
   
   Length length1(ft1, in1);
	Length length2(ft2, in2);
   
   Length difference = length1 - length2;
   
   length1.Print();
	cout << endl;
	length2.Print();
	cout << endl;
	cout << "Difference: ";
	difference.Print();
	cout << endl;
   
   return 0;
}