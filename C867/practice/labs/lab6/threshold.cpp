#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> intList;
    int inputCount;
    int inputVales;
    int i;
    int threshold;
    unsigned j;

    do 
    {
        cin >> inputCount;
    } while (inputCount < 1);

   for (i = 0; i < inputCount; ++i) {
        cin >> inputVales;
        intList.push_back(inputVales);
   }

   cin >> threshold;

   for (j = 0; j < intList.size(); ++j) {
        if (intList.at(j) <= threshold ) {
            cout << intList.at(j) << ",";
        }
   }

   cout << endl;

   return 0;
}