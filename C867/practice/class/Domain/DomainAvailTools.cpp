#include <iostream>
#include <cctype>
#include <vector>
#include <string>
#include "DomainAvailabilityTools.h"
using namespace std;

// **********************************************************************

// Default constructor: sets all domains to lowercase
DomainAvailabilityTools::DomainAvailabilityTools() {
   validGtld.push_back(".com");
   validGtld.push_back(".net");
   validGtld.push_back(".org");
   validGtld.push_back(".info");
   validGtld.push_back(".biz");
   noSimilarNamesPermitted.push_back(".org");
   noSimilarNamesPermitted.push_back(".biz");
   registeredDomain.push_back("apple.com");
   registeredDomain.push_back("oracle.com");
   registeredDomain.push_back("comcast.com");
   registeredDomain.push_back("comcast.net");
   registeredDomain.push_back("comcast.info");
   registeredDomain.push_back("comcast.org");
   registeredDomain.push_back("comcast.biz");
   registeredDomain.push_back("nonprofit.org");
   registeredDomain.push_back("home.biz");
   registeredDomain.push_back("intel.com");
   registeredDomain.push_back("information.info");
   registeredDomain.push_back("RunningYourOwn.net");
   ChangeStringsToLowerCase(registeredDomain);
   numRegisteredDomains = registeredDomain.size();
}

// **********************************************************************

// Changes all characters in string to lowercase
void DomainAvailabilityTools::ChangeStringsToLowerCase(vector<string> array) {
   unsigned int i;
   unsigned int j;

   for (i = 0; i < array.size(); ++i) {
      for (j = 0; j < array.at(i).size(); ++j) {
         array.at(i)[j] = tolower(array.at(i)[j]);
      }
   }
}

// **********************************************************************

// Checks is the domain name is valid
int DomainAvailabilityTools::CheckIfDomainNameIsValid(string domainName) {
   const char PERIOD   = '.';
   string searchName;          // The domain name in lower case
   string secondLevel;         // The aaa in aaa.bbb
   string theTld;              // The bbb in aaa.bbb
   int periodPosition;
         
   bool isDomainValid;
   bool isPeriodPositionValid;
   unsigned int i;
          
   searchName = domainName;
   for (i = 0; i < searchName.size(); ++i) {
      searchName[i] = tolower(searchName[i]);
   }
   periodPosition = GetPeriodPosition(searchName);

   // The domain name might be valid if there is exactly one period in the
   // domain name (at location periodPosition) and the domain name does
   // not start or end with a period. Note that a period position of 0 means
   // the first character is a period, rendering the domain name invalid
   if (periodPosition <= 0) {
      return -1;
   }

   // At this point, there is exactly one period in the string, so
   // the string is not the empty string
   if ((searchName[0] == PERIOD) || (searchName[(searchName.size() - 1)] == PERIOD)) {
      return -2;
   }
 
   // Extract the second-level domain and the top-level domain to
   // check for domain name validity
   secondLevel = searchName.substr(0, periodPosition);
   if (!HasValidSecondLevel(secondLevel)) {
      return -3;
   }
   theTld = searchName.substr(periodPosition);
   if (!CheckIfTldIsValid(theTld)) {
      return -4;
   }
      
   return 0;
}
   
// **********************************************************************

// Get the position of period in string
int DomainAvailabilityTools::GetPeriodPosition(string stringToSearch) {
   int stringLength;
   int periodCounter;
   int periodPosition;
   int i;

   stringLength   = stringToSearch.size();
   periodCounter  =  0;
      
   for (i = 0; i < stringLength; ++i) {
      if (stringToSearch[i] == '.') {
         ++periodCounter;
         periodPosition = i;
      }
   }

   // If there is more than one period or the domain name ends with
   // a period, indicate an incorrect domain name by setting variable
   // periodPosition to -1
   if (periodCounter != 1) {
      periodPosition = -1;
   }

   return periodPosition;
}

// ***********************************************************************

// Checks if the domain level has a valid second level
bool DomainAvailabilityTools::HasValidSecondLevel(string secondLevel) {
   const int MAX_SECONDLEVEL_LENGTH = 63;
   const char DASH = '-';
     
   bool isValidSecondLevel;         
   int secondLevelLength;
   char nextChar;
   int i;

   isValidSecondLevel = true;                       // Assume valid second-level domain
   secondLevelLength = secondLevel.size();
   nextChar = '?';
      
   // Disqualify the second-level domain if it is too short or too long, or
   // if it begins or ends with a dash
   if ((secondLevelLength >= 1) &&
       (secondLevelLength <= MAX_SECONDLEVEL_LENGTH)) {
      if ((secondLevel[0] == DASH) ||
          (secondLevel[secondLevelLength - 1] == DASH)) {
         isValidSecondLevel = false;
      }
   }
   else {
      isValidSecondLevel = false;
   }
      
   // Disqualify the second-level domain if any character is not a letter, 
   // digit, or a dash
   i = 0;
   while ((i < secondLevelLength) && (isValidSecondLevel)) {
      nextChar = secondLevel[i];
      if ((!isalnum(nextChar)) &&
          (nextChar != DASH)) {
         isValidSecondLevel = false;
      }
      ++i;
   }
      
   return isValidSecondLevel;
}

// ***********************************************************************

// Checks if the domain's tld is valid   
bool DomainAvailabilityTools::CheckIfTldIsValid(string theTld) {
   bool isValidTopLevel;            
   int topLevelLength;
   char nextChar;
   int i;

   isValidTopLevel = true;              // Assume valid top-level domain
   topLevelLength = theTld.size();
   nextChar = '?';
      
   // Disqualify the top-level domain if it is the empty string or
   // the first character is not a period

   if ((topLevelLength <= 0) ||
       (theTld[0] != '.')) {
      isValidTopLevel = false;
   }

   // Disqualify the top-level domain if any character is not a letter
   // or a digit
   i = 1;
   while ((i < topLevelLength) && (isValidTopLevel)) {
      nextChar = theTld[i];
      if (!isalnum(nextChar)) {
         isValidTopLevel = false;
      }
      ++i;
   }
    
   return isValidTopLevel;
}

// ***********************************************************************

// Checks if the domain name is available
bool DomainAvailabilityTools::HasAvailableDomainName(string domainName) {
   string checkDomainName;
   bool isAvailable;
   int i;

   isAvailable = true;
     
   checkDomainName = domainName;
   for (i = 0; i < (int) checkDomainName.size(); ++i) {
      checkDomainName[i] = tolower(checkDomainName[i]);
   }
   i = 0;
   while ((i < numRegisteredDomains) && (isAvailable)) {
      if (checkDomainName == registeredDomain.at(i)) {
         isAvailable = false;
      }
      else {
         ++i;
      }
   }
      
   return isAvailable;
}
   
// ***********************************************************************

// Returns similar domain names

string DomainAvailabilityTools::GetSimilarDomainNames(string domainName) {
   string secondLevel;           // The aaa in an aaa.bbb domain name
   string theTld;                // The bbb in an aaa.bbb domain name
   string similarDomainNames;
   string candidateDomainName;
   int periodPosition;

   bool isAvailable;
   bool isSimilarPermitted;
   unsigned int i;

   isAvailable = true;
   isSimilarPermitted = true;
      
   // Extract the second level name. Because the domain name is assumed 
   // to be valid, there will definitely be one and only one period in 
   // the domain name.
   periodPosition = GetPeriodPosition(domainName);
   secondLevel    = domainName.substr(0, periodPosition);
   theTld         = domainName.substr(periodPosition);

   // If the TLD is one for which no similar domain names are permitted,
   // do not check for similar domain names.

   i = 0;
   while ((i < noSimilarNamesPermitted.size()) && (isSimilarPermitted)) {
      if (theTld == noSimilarNamesPermitted.at(i)) {
         isSimilarPermitted = false;
      }
      else {
         ++i;
      }
   }
      
   if (isSimilarPermitted) {
      for (i = 0; i < validGtld.size(); ++i) {
         candidateDomainName = secondLevel + validGtld.at(i);
         if (HasAvailableDomainName(candidateDomainName)) {
            if (similarDomainNames.size() > 0) {
               similarDomainNames += ", ";
            }
            similarDomainNames += candidateDomainName;
         }
      }
   }

   return similarDomainNames;
}
