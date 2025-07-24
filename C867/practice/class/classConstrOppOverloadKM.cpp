#include <iostream>
using namespace std;

class Distance {
   public:
      Distance(int km = 0, int m = 0);
      void Print() const;
      Distance operator-(Distance rhs);
      Distance operator-(int rhs);
   private:
      int kilometers;
      int meters;
};

Distance::Distance(int km, int m) {
   kilometers = km;
   meters = m;
}

// No need to accommodate for overflow or negative values
// Operands: Distance, Distance. Call this "A"
Distance Distance::operator-(Distance rhs) {
 Distance disDiff;
 
 disDiff.kilometers = kilometers - rhs.kilometers;
 disDiff.meters = meters - rhs.meters;
 
 return disDiff;
}
// Operands: Distance, int. Call this "B"
Distance Distance::operator-(int rhsKm) {
 Distance disDiff;
 
 disDiff.kilometers = kilometers - rhsKm;
 disDiff.meters = meters; // Stays the same;
 
 return disDiff;
}

void Distance::Print() const {
   cout << kilometers << " kilometers, " << meters << " meters";
}

int main() {
   int km1;
	int m1;
	int km2;
	int m2;
   
   cin >> km1;
	cin >> m1;
	cin >> km2;
	cin >> m2;
   
   Distance distance1(km1, m1);
   Distance distance2(km2, m2);
   
   Distance difference1 = distance1 - distance2;
   Distance difference2 = distance1 - km2;
   
   distance1.Print();
	cout << endl;
	distance2.Print();
	cout << endl;
	cout << "Difference: ";
	difference1.Print();
	cout << endl;
   
   cout << endl;
   
   distance1.Print();
	cout << endl;
	cout << km2 << " kilometers" << endl;
	cout << "Difference: ";
	difference2.Print();
	cout << endl;
   
   return 0;
}