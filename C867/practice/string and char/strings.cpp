#include <iostream>
#include <string>
using namespace std;
 
int main() {
   string sentenceSubject;
   string sentenceVerb;
   string sentenceObject = "an apple";

//    sentenceSubject = "boy";
//    sentenceVerb = "ate";
   cin >> sentenceSubject;
   cin >> sentenceVerb;

//    cout << "A ";
//    cout << sentenceSubject << " ";
//    cout << sentenceVerb << " ";
    cout << sentenceSubject << " " << sentenceVerb << " ";
   cout << sentenceObject << "." << endl;
 
   return 0;
}