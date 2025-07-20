#include <iostream>
#include <string>
using namespace std;

/*
    Complete the function to replace any period with an 
    exclamation point. Ex: "Hello. I'm Miley. Nice to meet you." becomes:
    
    "Hello! I'm Miley! Nice to meet you!"
*/

void MakeSentenceExcited(string& sentenceText) {

   for (int i = 0; i < sentenceText.size(); ++i) {
      if (sentenceText.at(i) == '.') {
         sentenceText.at(i) = '!';
      }
   }

}

int main() {
   string testStr;

   getline(cin, testStr);
   MakeSentenceExcited(testStr);
   cout << testStr;

   return 0;
}