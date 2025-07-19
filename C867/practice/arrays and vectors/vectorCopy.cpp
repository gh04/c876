#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> origPrices; // Source vector
   vector<int> salePrices; // Target vector
   unsigned int i; // Loop index

   // Add prices to original prices vector
   origPrices.push_back(10);
   origPrices.push_back(20);
   origPrices.push_back(30);
   origPrices.push_back(40);

   /*
    * vector copy operation. The operation 
    * vectorB = vectorA resizes vectorB to 
    * vectorA's size, appending or deleting 
    * elements as needed. vectorB commonly 
    * has a size of 0 before the operation.
    */
   // Copy original prices to sales prices
   salePrices = origPrices;

   // Update sale prices. This does not affect original prices.
   salePrices.at(2) = 27;
   salePrices.at(3) = 35;

   // Output original and sale prices
   cout << "Original prices: ";
   for (i = 0; i < origPrices.size(); ++i) {
      cout << " " << origPrices.at(i);
   }
   cout << endl;

   cout << "Sale prices: ";
   for (i = 0; i < salePrices.size(); ++i) {
      cout << " " << salePrices.at(i);
   }
   cout << endl;

   return 0;
}