#include <iostream>
#include <vector>
using namespace std;

/*
    Define a function named SortVector that takes a vector 
    of integers as a parameter. SortVector() modifies the 
    vector parameter by sorting the elements in descending 
    order (highest to lowest). Then write a main program 
    that reads a list of integers from input, stores the 
    integers (starting from the second integer) in a vector, 
    calls SortVector(), and outputs the sorted vector. 
    The first input integer indicates how many numbers are 
    in the list.

    Ex: If the input is:
    5 10 4 39 12 2
    
    the output is:

    39,12,10,4,2,
    
    For coding simplicity, follow every output value by a comma, 
    including the last one.

    
*/
int GetVectorSize();
void PopulateVector(vector<int>& myVec, int size);
void SortVector(vector<int>& myVec);
void PrintSortedList(const vector<int>& myVec);

int main() {
   vector<int> vectList;
   PopulateVector(vectList, GetVectorSize());
   SortVector(vectList);
   PrintSortedList(vectList);
   
   return 0;
}

int GetVectorSize() {
    int inputCount;
    if (!(std::cin >> inputCount)) {
        std::cout << "Invalid input\n";
        exit(1);
    }
    return inputCount;
}

void PopulateVector(vector<int>& myVec, int size) {
    unsigned i;
    int inputVal;
    for(i = 0; i < size; ++i) {
        cin >> inputVal;
        myVec.push_back(inputVal);
   }
}

void SortVector(vector<int>& myVec) {
    unsigned i;
    for (i = 1; i < myVec.size(); ++i) {
        int key = myVec.at(i); // Index value to the right
        int j = i - 1; // Index to the left
        while (j >= 0 && myVec.at(j) < key) {
            myVec.at(j + 1) = myVec.at(j);
            j = j - 1;
            myVec.at(j + 1) = key;
        }
    }
}

void PrintSortedList(const vector<int>& myVec) {
    unsigned i;
    for (i = 0; i < myVec.size(); ++i) {
        cout << myVec.at(i) << ",";
    }
    cout << endl;
}
