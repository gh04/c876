#include <iostream>
#include <string>
using namespace std;

/*
    program has two functions with the same name but differing 
    in the number or types of parameters, known as function 
    name overloading or just function overloading. The following 
    two functions print a date given the day, month, and year. 
    The first function has parameters of type int, int, and int, 
    while the second has parameters of type int, string, and int.
*/

void PrintDate(int currDay, int currMonth, int currYear) {
   cout << currMonth << "/" << currDay << "/" << currYear;
}

void PrintDate(int currDay, string currMonth, int currYear) {
   cout << currMonth << " " << currDay << ", " << currYear;
}

int main() {
   
   PrintDate(30, 7, 2012);
   cout << endl;
   
   PrintDate(30, "July", 2012);
   cout << endl;
   
   return 0;
}