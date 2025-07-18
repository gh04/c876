#include <iostream>
#include <vector>
using namespace std;

/*
    Integer inputSize is read from input. Then, 
    strings and integers are read and stored into 
    string vector foodList and integer vector 
    labelList, respectively. Lastly, string foodAsked 
    is read from input. Find foodAsked in foodList 
    and output the following:

    "Index "
    the index of foodAsked in foodList
    ": food "
    the value of foodAsked
    " is matched with label "
    the element in labelList at the index of foodAsked in foodList
    End with a newline.

    Click here for example
    Ex: If the input is:
    3
    coconut 41 tomato 74 potato 89
    potato
    Then the output is:

    Index 2: food potato is matched with label 89
    Note: foodAsked is an element in foodList.


*/
int main() {
   vector<string> foodList;
   vector<int> labelList;
   int inputSize;
   string foodAsked;
   unsigned int i;
   string stringVal;
   int intVal;

   cin >> inputSize;

   for (i = 0; i < inputSize; ++i) {
      cin >> stringVal;
      cin >> intVal;

      foodList.push_back(stringVal);
      labelList.push_back(intVal);
   }

   cin >> foodAsked;

   for (i = 0; i < inputSize; ++i) {
    if (foodList.at(i) == foodAsked) {
        cout << "Index " 
             << i 
             << ": food " 
             << foodList.at(i) 
             << " is matched with label " 
             << labelList.at(i)
             << endl;
    }
   }

   return 0;
}