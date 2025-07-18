#include <iostream>
#include <vector>
using namespace std;

/*
    Integer dataSize is read from input. Then, dataSize 
    pairs of strings and integers are read and stored 
    into string vector personList and integer vector 
    ageList, respectively. Lastly, integer ageThreshold 
    is read from input. 
    
    Complete the following tasks:

    Initialize lastFound with -1.
    
    Use a loop to find the last element pair with an age 
    not equal to ageThreshold. If the element pair is found, 
    assign lastFound with the index of the element pair and 
    output the person and age, separated by a space. 
    
    End with a newline.
    
    
    Ex: If the input is:
    3
    Avi 48 Taj 25 Kim 58
    48
    
    Then the output is:

    Kim 58
    last match found at # 2
*/

int main() {
   vector<string> personList;
   vector<int> ageList;
   int dataSize;
   int ageThreshold;
   int lastFound;
   int i;
   string stringVal;
   int intVal;

   cin >> dataSize;

   for (i = 0; i < dataSize; ++i) {
      cin >> stringVal;
      cin >> intVal;

      personList.push_back(stringVal);
      ageList.push_back(intVal);
   }

   cin >> ageThreshold;

   lastFound = -1;
   bool found = false;

   for (i = dataSize - 1; i >= 0 && found != true; --i) {
    if (ageList.at(i) != ageThreshold) {
        lastFound = i;
        found = true;
        cout << personList.at(i) << " " << ageList.at(i) << endl;
    }
   }

   if (lastFound == -1) {
		cout << "Search unsuccessful" << endl;
	}
	else {
		cout << "last match found at # " << lastFound << endl;
	}

   return 0;
}