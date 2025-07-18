#include <iostream>
using namespace std;

/* Estimates dog's age in equivalent human years.
   Source: www.dogyears.com
*/

int main() {
   int dogAgeYears;

   cout << "Enter dog's age (in years): ";
   cin  >> dogAgeYears;

   switch (dogAgeYears) {
      case 0:
         cout << "That's 0-14 human years." << endl;
         break;

      case 1:
         cout << "That's 15 human years." << endl;
         break;

      case 2:
         cout << "That's 24 human years." << endl;
         break;

      case 3:
         cout << "That's 28 human years." << endl;
         break;

      case 4:
         cout << "That's 32 human years." << endl;
         break;

      case 5:
         cout << "That's 37 human years." << endl;
         break;
      case 6:
         cout << "That's 42 human years." << endl;
         break;
      case 7:
         cout << "That's 47 human years." << endl;
         break;
      case 8:
         cout << "That's 52 human years." << endl;
         break;
      case 9:
         cout << "That's 57 human years." << endl;
         break;
      case 10:
         cout << "That's 62 human years." << endl;
         break;
      default:
         cout << "Human years unknown." << endl;
         break;
   }

   return 0;
}