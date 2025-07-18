#include <iostream>
using namespace std;

/*
    In Ani's mailbox service, each mailbox is labeled with an integer 
    followed by a letter. Given integers numRows and numColumns, output 
    the label for each mailbox, followed by a space. End each row with a newline.

    Ex: If the input is 3 5, then the output is:
    1A 1B 1C 1D 1E 
    2A 2B 2C 2D 2E 
    3A 3B 3C 3D 3E 
*/
int main() {
   int numRows;
   int numColumns;
   int currentRow;
   int currentRowInteger;
   int currentColumn;
   char currentColumnLetter;
   
   cin >> numRows;
   cin >> numColumns;
    
   currentRowInteger = 1; // Set the first row to one
    // Outer loop sets the height of rows
   for (currentRow = 0; currentRow < numRows; ++currentRow) {
        currentColumnLetter = 'A'; // Set the first column to be A
        for (currentColumn = 0; currentColumn < numColumns; ++currentColumn) { // inner loop sets the size of columns
            cout << currentRowInteger << currentColumnLetter << " ";
            ++currentColumnLetter; // Increment the char for each column
        }
        cout << "\n"; // output a new line after the inner loop
        ++currentRowInteger; // Increment the rows 
   }

   return 0;
}