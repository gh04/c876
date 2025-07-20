#include <iostream>
using namespace std;

bool AdjustGrade(int total, char& grade) {
   if (total >= 58 && total < 70) {
      grade = 'D';
      return true;
   }
   return false;
}

int main() {
   int studentTotal;
	char studentGrade;
   bool isChanged;

   cin >> studentTotal;
   cin >> studentGrade;

   isChanged = AdjustGrade(studentTotal, studentGrade);

   if (isChanged) {
      cout << "Grade is " << studentGrade << " after curving." << endl;
   }
   else {
      cout << "Grade " << studentGrade << " is not changed." << endl;
   }

   return 0;
}