#include <iostream>
#include <vector>
using namespace std;

/*
    The program first reads integer memberCount from input, 
    representing the number of pairs of inputs to be read. 
    Each pair has a string and an integer, representing the 
    member's name and age, respectively. One Member object is 
    created for each pair and added to vector memberList. 
    Output "Average member age: ", followed by the average age of 
    all the Member objects as an integer. End with a newline.

    Ex: If the input is:
        
        4
        Noa 66 Guy 50 Fay 45 Avi 75

    then the output is:

        Average member age: 59

    Note: The ArrayList has at least one element.
*/
class Member {
   public:
      void SetNameAndAge(string newName, int newAge);
		int GetAge() const;
        void PrintAvergageAge(const vector<Member>& memberList);
   private:
      string name;
      int age;
      int AverageAge(const vector<Member>& memberList);
};

void Member::SetNameAndAge(string newName, int newAge) {
   name = newName;
   age = newAge;
}

int Member::GetAge() const {
	return age;
}

void Member::PrintAvergageAge(const vector<Member>& memberList) {
    cout << "Average member age: " << AverageAge(memberList) << endl; 
}

int Member::AverageAge(const vector<Member>& memberList) {
    size_t i;
    int ageSum = 0;

    for (i = 0; i < memberList.size(); ++i) {
        ageSum += memberList.at(i).GetAge();
    }

    return ageSum / memberList.size();
}

int main() {
   vector<Member> memberList;
   Member currMember;
   string currName;
   int currAge;
	int sumAge;
   int memberCount;
   unsigned int i;

   cin >> memberCount;
   for (i = 0; i < memberCount; ++i) {
      cin >> currName;
      cin >> currAge;
      
      currMember.SetNameAndAge(currName, currAge);
      memberList.push_back(currMember);
   }
	
	sumAge = 0;



   return 0;
}