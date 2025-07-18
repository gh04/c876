#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
    The program below maintains a list of country names, 
    and another list indicating the annual GDP for each 
    corresponding country.

    The statement if (ctryNames.at(i) == userCountry) 
    compares the current ctryNames element with the 
    user-entered country name. If the names match, the 
    program prints the ctryGDPs element at the same index.

    The loop's expression (i < ctryNames.size()) && (!foundCountry) 
    depends on the value of the variable foundCountry. This 
    expression prevents the loop from iterating through the 
    entire vector once the correct country is found.

*/
int main() {
   // Source: The World Bank, 2022
   vector<string> ctryNames; // Country names
   vector<int> ctryGDPs; // Country annual GDPs (trillions)
   string userCountry; // User-entered country
   bool foundCountry = false; // Country-match flag
   unsigned int i; // Loop index

   ctryNames.push_back("UK");
   ctryGDPs.push_back(3);

   ctryNames.push_back("India");
   ctryGDPs.push_back(3);

   ctryNames.push_back("Canada");
   ctryGDPs.push_back(2);

   ctryNames.push_back("Italy");
   ctryGDPs.push_back(2);

   ctryNames.push_back("Japan");
   ctryGDPs.push_back(4);

   cout << "Enter case-sensitive country to search for: ";
   cin >> userCountry;

   foundCountry = false;
   for (i = 0; i < ctryNames.size() && !foundCountry; ++i) {
      if (ctryNames.at(i) == userCountry) {
         foundCountry = true;
         cout << userCountry << " has an annual GDP of ";
         cout << "$" << ctryGDPs.at(i) << "T." << endl;
      }
   }

   if (!foundCountry) {
      cout << "Avilable countries are:" << endl;
      for (i = 0; i < ctryNames.size(); ++i){
        cout << "**" << ctryNames.at(i) << "**" << endl;
      }
   }

   return 0;
}