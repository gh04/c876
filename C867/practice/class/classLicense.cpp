#include <iostream>
#include <vector>
using namespace std;

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

int main() {
   vector<License> licenseList;
   License currLicense;
   string currState;
	int currFee;
   unsigned int i;

   cin >> currState;
   
   while (currState != "done") {
      cin >> currFee;
      currLicense.SetDetails(currState, currFee);
      licenseList.push_back(currLicense);
      cin >> currState;
}

   for (i = 0; i < licenseList.size(); ++i) {
      currLicense = licenseList.at(i);
      currLicense.Print();
   }
   
   return 0;
}