#include <iostream>
#include <vector>
using namespace std;
/*
    Integer numIn is read from input as the number of 
    elements in vector hourlyMiles. Given the integer 
    vector hourlyMiles, write a for loop to output the 
    integers in hourlyMiles in reverse order. Output 
    each integer followed by an asterisk surrounded by 
    spaces (" * ").

    Ex: If the input is:
    8
    67 74 85 101 114 131 150 168
    
    then the output is:
    168 * 150 * 131 * 114 * 101 * 85 * 74 * 67 * 
*/
int main() {
   vector<int> hourlyMiles;
   int numIn;
   int i;
   unsigned j;
   unsigned k;
   int mile;
   int tempNum;

   cin >> numIn;

   for (i = 0; i < numIn; ++i) {
      cin >> mile;
      hourlyMiles.push_back(mile);
   }
   // Stop the swap at the middle of the vector size. All swaps have occured
   for (j = 0; j < hourlyMiles.size() / 2; ++j) {
    tempNum = hourlyMiles.at(j); // Temp store the original element value
    hourlyMiles.at(j) = hourlyMiles.at(hourlyMiles.size() - 1 - j); // Assign element n - 1 - j to j
    hourlyMiles.at(hourlyMiles.size() - 1 - j) = tempNum; // Assign original element value j to n - 1 - j
   }
   // Out the reverse order vector
   for (k = 0; k < hourlyMiles.size(); ++k) {
    cout << hourlyMiles.at(k) << " * ";
   }

   cout << endl;

   return 0;
}