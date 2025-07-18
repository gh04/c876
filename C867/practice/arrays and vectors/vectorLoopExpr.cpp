#include <iostream>
#include <vector>
using namespace std;

int main() {
   vector<int> valsVctr;     // Empty vector for values
   unsigned int i;           // Loop index

   valsVctr.push_back(30);
   valsVctr.push_back(20);
   valsVctr.push_back(20);
   valsVctr.push_back(15);
   valsVctr.push_back(5);
   valsVctr.push_back(10);

   for( i = 0; i < valsVctr.size(); ++i){
      cout << "valsVctr.at(" << i << ") = " << valsVctr.at(i) << endl;
   }

   return 0;
}