#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*

    The SetGreeting() mutator sets data member greeting 
    to "Please leave a message for ", followed by 
    messageGreeting, and the SetAreaCode() mutator sets 
    data member areaCode to messageAreaCode. In main(), 
    call SetGreeting() and SetAreaCode(), passing arguments 
    inputGreeting and inputAreaCode, respectively.

    Ex: If the input is Ken 449, then the output is:
    Voicemail: Please leave a message for Ken at area code 449
*/
class Message {
   public:
      void SetGreeting(string messageGreeting); 
      void SetAreaCode(int messageAreaCode);      
      string GetGreeting() const;                        
      int GetAreaCode() const;                        
      void Print() const;              
   private:
      string greeting;
      int areaCode;
};

void Message::SetGreeting(string messageGreeting) {
   greeting = "Please leave a message for " + messageGreeting;
}

void Message::SetAreaCode(int messageAreaCode) {
   areaCode = messageAreaCode;
}

string Message::GetGreeting() const {
   return greeting;
}

int Message::GetAreaCode() const {
   return areaCode;
}

int main() {
   Message voicemail;
   string inputGreeting;
   int inputAreaCode;

   cin >> inputGreeting;
   cin >> inputAreaCode;
   
   voicemail.SetGreeting(inputGreeting);
   voicemail.SetAreaCode(inputAreaCode);
 
   cout << "Voicemail: " << voicemail.GetGreeting();
   cout << " at area code " << voicemail.GetAreaCode() << endl;

   return 0;
}