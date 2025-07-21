#include <iostream>
#include <vector>
using namespace std;

/*
    The program first reads integer licenseCount from input, representing the number of 
    pairs of inputs to be read. Each pair has a string and an integer, representing the 
    license's state and fee, respectively. One License object is created for each pair 
    and added to vector licenseList. Write the PrintLicenses() function in the Database 
    class to call each License object's Print() function.

    Ex: If the input is:
    
        3
        NV 405 LA 375 AL 360
    
    then the output is:
    
        License: NV, Fee: 405
        License: LA, Fee: 375
        License: AL, Fee: 360
*/
class License {
   public:
      void SetDetails(string newState, int newFee);
		void Print() const;
   private:
      string state;
      int fee;
};

void License::SetDetails(string newState, int newFee) {
   state = newState;
   fee = newFee;
}

void License::Print() const {
	cout << "License: " << state << ", Fee: " << fee << endl;
}

class Database {
   public:
      void InputLicenses();
      void PrintLicenses();
   private:
      vector<License> licenseList;
};

void Database::InputLicenses() {
   License currLicense;
   string currState;
   int currFee;
   int licenseCount;
   unsigned int i;
  
   cin >> licenseCount;
   for (i = 0; i < licenseCount; ++i) {
      cin >> currState;
      cin >> currFee;
      
      currLicense.SetDetails(currState, currFee);
      licenseList.push_back(currLicense);
   }     
}

void Database::PrintLicenses() {
    size_t i;
    for(i = 0; i < licenseList.size(); ++i) {
        licenseList.at(i).Print();
    }
}

int main() {
   Database database;
  
   database.InputLicenses();
   database.PrintLicenses();
   
   return 0;
}