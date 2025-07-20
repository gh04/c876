#include <iostream>
using namespace std;

void PrintGatheringSize(string gatheringSize) {
   cout << "The gathering needs food for " << gatheringSize << "." << endl;
}

void PrintGatheringSize(int gatheringSize) {
   cout << "Number of people coming: " << gatheringSize << endl;
}

int main() {
   string sizeInWord;
   int sizeOfGathering;

   cin >> sizeInWord;
   cin >> sizeOfGathering;

   PrintGatheringSize(sizeInWord);
   PrintGatheringSize(sizeOfGathering);

   return 0;
}