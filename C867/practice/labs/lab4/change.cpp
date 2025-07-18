#include <iostream>
using namespace std;

int main() {
    // The cent equivalent that each value holds
    int const PENNY_VALUE = 1;
    int const NICKELS_VALUE = 5;
    int const DIMES_VALUE = 10;
    int const QUARTER_VALUE = 25;
    int const DOLLARS_VALUE = 100;
    
    // Declare and initialize count to ensure they are zero if no change occurred
    int penniesCount = 0;
    int nickelsCount = 0;
    int dimesCount = 0;
    int quartersCount = 0;
    int dollarsCount = 0;
    
    // Str will only be set if the respective count is greater than 0
    string pennyStr;
    string nickelStr;
    string dimeStr;
    string quarterStr;
    string dollarStr;
    
    int input; // Asking for user input
    
    // If the user entered 0 or a negative value break out.
    if (input <= 0) {
        cout << "No change\n";
        return 1;
    }

    /*
     *  The <value>Count variables will truncate any 
     *  remainders by using int division
     */

    dollarsCount = input / DOLLARS_VALUE;
    input -= dollarsCount * DOLLARS_VALUE; // Subtract the dollar value from the input. If count is 0 there is nothing to subtract.

    if (dollarsCount != 0) {
        // Initialize the string with singular or plural
        dollarStr = (dollarsCount > 1) ? " Dollars" : " Dollar";
        // Convert int to str and insert the dollarsCount at the beginning of the str
        cout << dollarStr.insert(0, to_string(dollarsCount)) << endl;
    }
    
    // cout << "Dollars Count: " << dollarsCount << endl;
    // cout << "Input after Dollars: " << input << endl;
    
    quartersCount = input / QUARTER_VALUE;
    input -= quartersCount * QUARTER_VALUE;
    
    if (quartersCount != 0) {
        quarterStr = (quartersCount > 1) ? " Quarters" : " Quarter";  
        cout << quarterStr.insert(0, to_string(quartersCount)) << endl;
    }

    // cout << "Quarters Count: " << quartersCount << endl;
    // cout << "Input after Quarters: " << input << endl;

    dimesCount = input / DIMES_VALUE;
    input -= dimesCount * DIMES_VALUE;

    if (dimesCount != 0) {
        dimeStr = (dimesCount > 1) ? " Dimes" : " Dime";
        cout << dimeStr.insert(0, to_string(dimesCount)) << endl;
    }

    // cout << "Dimes Count: " << quartersCount << endl;
    // cout << "Input after Dimes: " << input << endl;

    nickelsCount = input / NICKELS_VALUE;
    input -= nickelsCount * NICKELS_VALUE;
    
    if (nickelsCount != 0) {
        nickelStr = (nickelsCount > 1) ? " Nickels" : " Nickel";
        cout << nickelStr.insert(0, to_string(nickelsCount)) << endl;
    }
    
    // cout << "Nickels Count: " << nickelsCount << endl;
    // cout << "Input after nickels: " << input << endl;

    penniesCount = input / PENNY_VALUE;
    input -= penniesCount * PENNY_VALUE;
    
    if (penniesCount != 0) {
        pennyStr = (penniesCount > 1) ? " Pennies" : " Penny";
        cout << pennyStr.insert(0, to_string(penniesCount)) << endl;  
    }

    // cout << "Pennies Count: " << penniesCount << endl;
    // cout << "Input after pennies: " << input << endl;
   
   return 0;
}