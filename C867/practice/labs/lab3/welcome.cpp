#include <iostream>
#include <string>
using namespace std;

// Write a program that takes a first name as the input, and outputs a welcome message to that name.
int main() {
   string userName;
   
   cin >> userName;
   
   cout << "Hey " << userName << "!\n" << "Welcome to zyBooks!\n";

   return 0;
}