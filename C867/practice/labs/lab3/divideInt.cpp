#include <iostream>
using namespace std;

/*
Write a program that reads integers userNum and divNum as input, 
and outputs userNum divided by divNum three times. Note: End with a newline.

Ex: If the input is:
2000 2

the output is:
1000 500 250

Note: In C++, integer division discards fractions. Ex: 6 / 4 is 1 (the 0.5 is discarded).
*/
int main() {
    int userNum;
    int divNum;

    cin >> userNum;
    cin >> divNum;

    userNum = userNum / divNum;
    cout << userNum << " ";
    userNum = userNum / divNum;
    cout << userNum << " ";
    userNum = userNum / divNum;
    cout << userNum << "\n";


   return 0;
}
