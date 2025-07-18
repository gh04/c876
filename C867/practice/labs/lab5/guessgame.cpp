#include <iostream>
#include <string>
using namespace std;

//Generates a random number between 1 and 50 (inclusive)
int generateRandomNumber() {
    return rand() % 50 + 1;
}

int main()
{
   //Sets the userSeed to -1 prior to input
   int userSeed = -1;
   //Sets the userInput to -1 prior to input
   int userInput = -1;
   //Sets the number of guesses to 0
   int guesses = 0;
   //Requests a number to set the seed for the random function. 
   //This makes the random function produce predictible numbers for grading. 
   cin >> userSeed;
   //Sets the random function to use this seed + 10
   srand(10 + userSeed);
   //Generates the random number the user will try to guess
   int randInt = generateRandomNumber();
   

   cout << "Guess:" << endl;
   cin >> userInput;
   ++guesses; // Guess #1

   while ( userInput > -1) {
        
        if (userInput < randInt) {
            cout << "Your number is too low!"
                 << endl;
        } else if (userInput > randInt)  {
            cout << "Your number is to high!"
                 << endl;
        } else {
              cout << "You guessded the correct number\n";
    
              cout << "Total guesses: " 
                   << guesses 
                   << endl;
                  
              cout << "Congratulations! You guessed the number " 
                   << randInt 
                   << " in " 
                   << guesses 
                   << " guesses!\n";
                   return 0;
        }

        cout << "Total guesses: " 
             << guesses
             << endl;
        
        cout << "Guess:" 
             << endl;
        cin >> userInput;
        cout << "userInput W: " << userInput << endl;
        ++guesses; // # of guesses in the while loop
   }
  

 return 1;

}