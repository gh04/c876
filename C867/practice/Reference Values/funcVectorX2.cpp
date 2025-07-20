#include <iostream>
#include <vector>
using namespace std;

/*
    Define a function IsTwice() that takes two integer vector 
    parameters. The function returns true if the two vectors 
    have the same size, and every element in the first vector 
    is twice the element at the same index in the second vector. 
    The function returns false otherwise.

    Ex: If the input is:
    3
    -16 3 -11
    2
    -11 22
    
    then the first vector has 3 elements {-16, 3, -11} and the second 
    vector has 2 elements {-11, 22}. The output is:

    False, the first vector is not twice the second vector.
*/

// Function prototype
bool IsTwice(const vector<int>& inputVector1, const vector<int>& inputVector2);

int main() {
   int i;
	vector<int> inputVector1;
	vector<int> inputVector2;
	int size;
	int input;
	bool checkProperty;

	cin >> size;
	for (i = 0; i < size; ++i) {
		cin >> input;
		inputVector1.push_back(input);
	}

	cin >> size;
	for (i = 0; i < size; ++i) {
		cin >> input;
		inputVector2.push_back(input);
	}

   checkProperty = IsTwice(inputVector1, inputVector2);

	if (checkProperty) {
		cout << "True, the first vector is twice the second vector." << endl;
	}
	else {
		cout << "False, the first vector is not twice the second vector." << endl;
	}

   return 0;
}

bool IsTwice(const vector<int>& inputVector1, const vector<int>& inputVector2) {
   unsigned i;
   if (inputVector1.size() != inputVector2.size()) {
      return false;
   }
   for (i = 0; i < inputVector1.size(); ++i) {
      if (inputVector1.at(i) / 2 != inputVector2.at(i)) {
            return false;
         }
      }

   return true;
}