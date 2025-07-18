#include <iostream>
#include <vector>
using namespace std;

/*
    Integer dataSize is read from input. The remaining 
    input consists of dataSize strings followed by dataSize 
    integers. Declare string vector userList and integer 
    vector idList. Then:

    Read dataSize strings from input and use push_back() to 
    store each string into userList.

    Read dataSize integers from input and use push_back() to 
    store each integer into idList.

    Ex: If the input is:
    4
    Dan Kim Sue Eli
    63 42 10 67
    Then the output is:

    User: Dan, Id: 63
    User: Kim, Id: 42
    User: Sue, Id: 10
    User: Eli, Id: 67
*/
int main() {
   vector <string> userList;
   vector <int> idList;
   int dataSize;
   unsigned int i;
   string stringVal;
   int intVal;

   cin >> dataSize;
   
   for (i = 0; i < dataSize; ++i) {
    cin >> stringVal;
    cin >> intVal;
    userList.push_back(stringVal);
    idList.push_back(intVal);
   }
   
   for (i = 0; i < userList.size(); ++i) {
      cout << "User: " << userList.at(i) << ", ";
      cout << "Id: " << idList.at(i) << endl;
   }

   return 0;
}