#include <iostream>
#include <string>
using namespace std;

/*
    Given string workStr on one line and string strSelection on a second line, 
    output the index where strSelection starts within workStr. End with a newline.
    
    Ex: If the input is:
    
    Fuzzy bear
    zy
    
    then the output is: 
    
    3
*/

int main() {
   string workStr;
   string strSelection;

   getline(cin, workStr);
   cin >> strSelection;

   cout << workStr.find(strSelection) << endl;

   return 0;
}