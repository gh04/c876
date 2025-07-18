#include <iostream>
#include <string>     // Supports use of "string" data type
using namespace std;

/* A game inspired by "Mad Libs" where user enters nouns,
 * verbs, etc., and then a story using those words is output.
 */

int main() {
   string wordRelative;
   string wordFood;
   string wordAdjective;
   string wordTimePeriod;
   string allSequence;

/* 
 *   This technique will only get the sequence of characters before 
 *   the first whitespace.
 *   
 *   cout << "Type input without spaces." << endl;
 *   cout << "Enter a kind of relative: " << endl;
 *   cin  >> wordRelative;
 *   cout << "Enter a kind of food: " << endl;
 *   cin  >> wordFood;
 *   cout << "Enter an adjective: "   << endl;
 *   cin  >> wordAdjective;
 *   cout << "Enter a time period: "  << endl;
 *   cin  >> wordTimePeriod;
 */  

   // Get user's words
   cout << "Type input without spaces." << endl;
   
   cout << "Enter a kind of relative: " << endl;
   getline(cin, wordRelative); // Gets entire line up to ENTER

   cout << "Enter a kind of food: " << endl;
   getline(cin, wordFood); // Gets entire line up to ENTER

   cout << "Enter an adjective: "   << endl;
   getline(cin, wordAdjective); // Gets entire line up to ENTER

   cout << "Enter a time period: "  << endl;
   getline(cin, wordTimePeriod); // Gets entire line up to ENTER

   // Tell the story
   cout << endl;
   cout << "My " << wordRelative << " says eating " << wordFood << endl;
   cout << "will make me more " << wordAdjective << "," << endl;
   cout << "so now I eat it every " << wordTimePeriod << "." << endl;

  

   return 0;
}