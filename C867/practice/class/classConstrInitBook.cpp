#include <iostream>
#include <vector>
using namespace std;

class BookClub {
   public:
      BookClub();
      BookClub(string newMemberName, int newInterests);
      void ReadInterests();
      void Print() const;
   private:
      string memberName;
      vector<string> interests; 
};

BookClub::BookClub() : memberName("Unknown"), interests(0) {
}
// Setting the size of the vector by the size of newInterest
BookClub::BookClub(string newMemberName, int newInterests) : memberName(newMemberName), interests(newInterests) {
}

void BookClub::ReadInterests() {
   string interestMemberName;
   int i;
   for (i = 0; i < interests.size(); ++i) {
      cin >> interestMemberName;
		interests.at(i) = interestMemberName;
   }
}

void BookClub::Print() const {
   int i;
  
   cout << "Book Club: " << memberName << ", ";
   if (interests.size() == 0) {
      cout << "No interests" << endl;
   }
   else {
      cout << "Interests: ";
      for (i = 0; i < interests.size() - 1; ++i) {
         cout << interests.at(i) << ", ";
      }
      cout << interests.at(interests.size() - 1) << endl;
   }
}

int main() {
   string memberName;
   int newInterests;
	BookClub myBookClub;

   myBookClub.Print();

   cin >> memberName;
	cin >> newInterests;
	BookClub yourBookClub(memberName, newInterests);
	yourBookClub.ReadInterests();
	yourBookClub.Print();
   
   return 0;
} 