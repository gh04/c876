#include <iostream>
#include <vector>
using namespace std;

int SumSelected(const vector<int>& inVector, int x) {
   unsigned i;
   int sum = 0;
   for (i = 0; i < inVector.size(); ++i) {
      if (inVector.at(i) < x) {
         sum += inVector.at(i);
      }
   }
   return sum;
}

int main() {
   vector<int> inVector;
   int size;
   int input;
   int i;
   int x;
   int result;

   // Read the vector's size, and then the vector's elements
   cin >> size;
   for (i = 0; i < size; ++i) {
      cin >> input;
      inVector.push_back(input);
   }

   cin >> x;

   result = SumSelected(inVector, x);

   cout << result << endl;

   return 0;
}