#include <iostream>
using namespace std;

class Rectangle {
   public:
      Rectangle(int length = 0, int width = 0);
      void Print() const;
      Rectangle operator-(Rectangle rhs);
   private:
      int numLength;
      int numWidth;
};

Rectangle::Rectangle(int length, int width) {
   numLength = length;
   numWidth = width;
}

// No need to accommodate for overflow or negative values

Rectangle Rectangle::operator-(Rectangle rhs) {
   Rectangle recDiff;
   
   recDiff.numLength = numLength - rhs.numLength;
   recDiff.numWidth = numWidth - rhs.numWidth;
   
   return recDiff;
}

void Rectangle::Print() const {
   cout << "Length: " << numLength << " units, width: " << numWidth << " units";
}

int main() {
   int length1;
	int width1;
	int length2;
	int width2;
   
   cin >> length1;
	cin >> width1;
	cin >> length2;
	cin >> width2;
   
   Rectangle rectangle1(length1, width1);
	Rectangle rectangle2(length2, width2);
   
   Rectangle difference = rectangle1 - rectangle2;
   
   rectangle1.Print();
	cout << endl;
	rectangle2.Print();
	cout << endl;
	cout << "Difference: ";
	difference.Print();
	cout << endl;
   
   return 0;
}