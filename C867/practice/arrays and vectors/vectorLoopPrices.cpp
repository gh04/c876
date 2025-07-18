#include <iostream>
#include <vector>
using namespace std;

/*
    Integer vecVals is read from input as the 
    number of elements in vector hourlyPrices. 
    Given the integer vector hourlyPrices, 
    write a for loop to output the integers in 
    the first half of hourlyPrices. Output a dash 
    surrounded by spaces (" - ") after each integer 
    except the last.

    Ex: If the input is:
    4
    64 70 76 87
    
    then the output is:
    64 - 70
    
    Note: The vector size is always even.
*/

int main() {
   vector<int> hourlyPrices;
   int vecVals;
   unsigned int i;
   int price;

   cin >> vecVals;

   for (i = 0; i < vecVals; ++i) {
      cin >> price;
      hourlyPrices.push_back(price);
   }
   // Iterate over half the vector
   for (i = 0; i < hourlyPrices.size() / 2; ++i) {
        // if it's the last element, output num w/out "-" and break out of the loop
        if (i == (hourlyPrices.size() / 2) - 1) {
            cout << hourlyPrices.at(i);
            break;
        } 
        cout << hourlyPrices.at(i) << " - ";
   }

   cout << endl;

   return 0;
}