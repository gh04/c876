#ifndef DOMAINAVAILABILITYTOOLS_H
#define DOMAINAVAILABILITYTOOLS_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class DomainAvailabilityTools {
   public:
      void ChangeStringsToLowerCase(vector<string> array);
      int CheckIfDomainNameIsValid(string domainName);
      int GetPeriodPosition(string stringToSearch);
      bool HasValidSecondLevel(string secondLevel);
      bool CheckIfTldIsValid(string theTld);
      bool HasAvailableDomainName(string domainName);
      string GetSimilarDomainNames(string domainName);
      DomainAvailabilityTools();
      
   private:
      vector<string> validGtld;
      vector<string> noSimilarNamesPermitted;
      vector<string> registeredDomain;
      int numRegisteredDomains;
};

#endif
