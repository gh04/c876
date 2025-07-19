#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
    Write a program that reads a list of words. 
    Then, the program outputs those words and 
    their frequencies. The input begins with an 
    integer indicating the number of words that 
    follow. Assume that the list will always 
    contain fewer than 20 words.

    Ex: If the input is:
    5 hey hi Mark hi mark
    the output is:

    hey - 1
    hi - 2
    Mark - 1
    hi - 2
    mark - 1
*/
vector<string> strList;
vector<int> strMatchCount;
string strValue;
int inputStrCount;
int i;
unsigned j;
unsigned k;

void getNumCount();
void populateStrList(int nElements);
void matchStr(vector<string> strList);

int main() {
  
    getNumCount();
    populateStrList(inputStrCount);
    matchStr(strList);



    return 0;
}

void getNumCount() {
    do {
        cin >> inputStrCount;
    } while (inputStrCount <= 0);
}

void populateStrList(int nElements) {
    for (i = 0; i < nElements; ++i) {
        cin >> strValue;
        strList.push_back(strValue);
    }
}

void matchStr(vector<string> strList) {
    int strSize = strList.size();
    strMatchCount.resize(strList.size());
    for (j = 0; j < strSize; ++j) {
       
    }
}
