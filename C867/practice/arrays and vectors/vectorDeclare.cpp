#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> itemCounts;

    itemCounts.push_back(76);
    itemCounts.push_back(121);

    cout << itemCounts.at(0) << endl;
    cout << itemCounts.at(1) << endl;

    return 0;
}