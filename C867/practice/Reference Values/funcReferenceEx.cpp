
#include <iostream>
using namespace std;

/*

    This function would not affect the global variables:
    
    void ConvHrMin(int timeVal, int hrVal, int minVal) {
            hrVal  = timeVal / 60;  
            minVal = timeVal % 60;
    }

    Pass-by-reference parameter allows a function to 
    update an argument variable, like below:
*/

void ConvHrMin(int timeVal, int& hrVal, int& minVal) {
   hrVal = timeVal / 60;
   minVal = timeVal % 60;
}

int main() {
   int totTime;
   int usrHr;
   int usrMin;

   totTime = 0;
   usrHr = 0;
   usrMin = 0;

   cout << "Enter total minutes: ";
   cin >> totTime;
 
   ConvHrMin(totTime, usrHr, usrMin);
 
   cout << "Equals: ";
   cout << usrHr << " hrs ";
   cout << usrMin << " min" << endl;

   return 0;
}