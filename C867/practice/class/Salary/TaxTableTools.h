#ifndef TAXTABLETOOLS_H
#define TAXTABLETOOLS_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class TaxTableTools {
   public:
      TaxTableTools();
      TaxTableTools(vector<int> newSearch, vector<double> newValue);
      double GetValue(int searchArgument);
      int GetInteger(const string userPompt);
   private:
      vector<int> search;
      vector<double> value;
      int nEntries;
};

#endif
