#include <iostream>
using namespace std;

int main() {
   char   userChar;

   cout << "Char: ";
   cin  >> userChar;

   cout << userChar << " " << userChar << endl;
   cout << " " << userChar << endl;
   cout << userChar << userChar << userChar << endl;

    cout << "char decimal: " << static_cast<int>(userChar) << endl;

   return 0;
}