#include <iostream>
using namespace std;

class Member {
   public:
      Member();
      Member(string newShortName, int newAge, char newGroup);
      void Print() const;
   private:
      string shortName;
      int age;
      char group;
};

Member::Member() : shortName("Unavailable"), age(-1), group('-') {
}

Member::Member(string newShortName, int newAge, char newGroup) : shortName(newShortName), age(newAge), group(newGroup) {
}

Member::Member(string newShortName, int newAge, char newGroup)  {
    this->shortName = newShortName;
    this->age = newAge;
    this->group = newGroup;
}

void Member::Print() const {
   cout << "Member: " << shortName << ", Age: " << age << ", Group: " << group << endl;
}

int main() {
   Member myMember;
   string newShortName;
   int newAge;
   char newGroup;
  
   cin >> newShortName;
   cin >> newAge;
   cin >> newGroup;
   Member yourMember(newShortName, newAge, newGroup);

   myMember.Print();
   yourMember.Print();
  
   return 0;
} 