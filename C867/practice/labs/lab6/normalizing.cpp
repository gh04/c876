#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

vector<double> floatList;
int inputNumCount; // n of elements in vector
double inputValues; // element values of vector
int i;
unsigned j;

void getNumCount();
void populateList(int nElements);
double getMax(vector<double>& list);
void normalize(vector<double> list, double max);

int main() {

    getNumCount(); // Ask for n of elements
    populateList(inputNumCount); // Populate vector with n elements
    normalize(floatList, getMax(floatList)); // divide each element value by max and ouput the result

    cout << endl;

    return 0;
}

void getNumCount() {
    do {
        cin >> inputNumCount;
    } while (inputNumCount <= 0);
}

void populateList(int nElements) {
    for (i = 0; i < nElements; ++i) {
        cin >> inputValues;
        floatList.push_back(inputValues);
    }
}

double getMax(const vector<double>& list) {
    double maxValue = list[0];

    for (j = 0; j < list.size(); ++j) {
        if (list.at(j) > maxValue) {
            maxValue = list.at(j);
        }
    }
    return maxValue;
}

void normalize(vector<double> list, double max) {
    for (j = 0; j < list.size(); ++j) {
        cout << fixed 
             << setprecision(2) 
             << list.at(j) / max
             << " ";
    }
} 