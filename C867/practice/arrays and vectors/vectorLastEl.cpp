#include <iostream>
#include <vector>
using namespace std;

/*
    Write a statement to output "Last mpg reading: " 
    followed by the value of mpgTracker's last element. 
    End with newline.

    Ex: If the input is:
    17 19 20, 
    
    then the output is:
    Last mpg reading: 20

*/

int main() {
   vector<int> mpgTracker;
   const int NUM_READINGS = 3;
   int mpgReading;
   int i;

   for (i = 0; i < NUM_READINGS; ++i) {
      cin >> mpgReading;
      mpgTracker.push_back(mpgReading);
   }

   cout << "Last mpg reading: " << mpgTracker.back() << endl;

   return 0;
}