#include <iostream>
#include <string>
#include <cctype>
#include "DomainAvailabilityTools.h"
using namespace std;                      

// ***********************************************************************

// Prompts user for input string and returns the string 
string GetString(string prompt) {
   string userInput;
      
   cout << prompt << endl;
   cin >> userInput;

   return userInput;
} 
// ***********************************************************************

int main() {
   const string PROMPT_DOMAIN_NAME = 
            "\nEnter a domain name to check availability (Enter to exit): ";
   DomainAvailabilityTools dvTools;

   string inputName;
   string similarDomainNames;        // Alternatives to a registered domain name
   bool isDomainNameValid;
   bool isDomainNameAvailable;

   // Get the first domain name to process
   inputName = GetString(PROMPT_DOMAIN_NAME);

   while(inputName.size() > 0) {

      isDomainNameValid = (dvTools.CheckIfDomainNameIsValid(inputName) == 0);

      // Display the results
      cout << "\"" << inputName << "\" ";
      if (isDomainNameValid) {
         cout << "is ";
         // If the domain name is available, say so. If not, say so but
         // include similar domain names, if any.
         isDomainNameAvailable = dvTools.HasAvailableDomainName(inputName);
         if (isDomainNameAvailable) {
            cout << "available." << endl;
         }
         else {
            cout << "not available." << endl;
            similarDomainNames = dvTools.GetSimilarDomainNames(inputName);
            if (similarDomainNames.size() > 0) {
               cout << "The following similar names are available: " << endl;
               cout << similarDomainNames << endl;
            }
            else {
               cout << "No available similar domain names were found." << endl;
            }
         }
      }
      else {
         cout << "is not a valid domain name." << endl;
      }

      // Get the next domain to process
      inputName = GetString(PROMPT_DOMAIN_NAME);
   }

   return 0;
}
