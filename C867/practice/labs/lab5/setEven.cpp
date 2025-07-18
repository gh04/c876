#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string evenNums = "";
void setEvenNums(){
   /* Write your solution here as if this were the "main()" function. Once you have the correct value saved
   in evenNums, you can submit as the rest has been done for you within main() already. 
   We will talk more about functions later, but entering your code here works the same and is 
   necessary for grading purposes
   */

   for (int i = 0; i <= 100; ++i) {
        if (i % 2 == 0) {
            if (i == 100){
            evenNums += to_string(i) + "\n";
            break;
            }
            evenNums += to_string(i) + ", ";
        } 
   }
      
   }

int main(){
   setEvenNums();
   cout << evenNums;
}
