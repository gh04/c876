#include <iostream>
#include <string>
using namespace std;

int main() {
   string inputWord;
   int furnitureStock;

   cin >> inputWord;
	cin >> furnitureStock;

   while (furnitureStock > 20 && furnitureStock < 45) {
      cin >> inputWord;
      cin >> furnitureStock;
   }

	cout << inputWord << ": is flagged!" << endl;

   return 0;
}