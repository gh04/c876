#include <iostream>
using namespace std;

int main() {
   int dogYears;
   int humanYears;
   
   cout << "How old is your dog?: ";
   cin  >> dogYears;   
   humanYears = 7 * dogYears;

   cout << dogYears;
   cout << " dog years is about " << humanYears << " human years." << endl;
   
   return 0;
}