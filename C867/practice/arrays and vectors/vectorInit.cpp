#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare and initialize vector size
    // Each element is initalized with default zero
    vector<int> itemCounts(3);
    // Declare and initialize vector values at n index. 
    // Vector size not required
    vector<int> carSales = {5, 7, 11};

    itemCounts.at(2) = 17;

    cout << itemCounts.at(0) << endl;
    cout << itemCounts.at(1) << endl;
    cout << itemCounts.at(2) << endl;

    return 0;
}