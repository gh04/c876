#include <iostream>
using namespace std;

double ConvertToKilograms(int numPounds) {
   const double LBS_TO_KG = 0.453592;

   return numPounds * LBS_TO_KG;

}

int main() {
   int userPounds;

   cin >> userPounds;

   cout << "Result: " << ConvertToKilograms(userPounds);
	cout << " kilograms" << endl;

   return 0;
}