#include <iostream>
using namespace std;

/*
    Write a program that takes a student's score as input 
    and calculates their grade based on the following criteria:

    If the score is greater than or equal to 90, the grade is 'A'.
    If the score is between 80 and 89 (inclusive), the grade is 'B'.
    If the score is between 70 and 79 (inclusive), the grade is 'C'.
    If the score is between 60 and 69 (inclusive), the grade is 'D'.
    If the score is less than 60, the grade is 'F'.
*/

char calculateGrade(int score) {

    if (score >= 90) {
        return 'A';
    } else if (score >= 80) {
        return 'B';
    } else if (score >= 70) {
        return 'C';
    } else if (score >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int inputScore;
    cin >> inputScore;

    cout << "The student's grade is: "
         << calculateGrade(inputScore) 
         << endl;
    

    return 0;
}