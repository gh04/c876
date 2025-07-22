#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Tutor {
   public:
      Tutor(string, int);
      void Print() const;

   private:
      string name;
      vector<string> students;
};

Tutor::Tutor(string tutorName, int numStudents) : name(tutorName), students(numStudents) {}

void Tutor::Print() const {
   if (students.size() == 0){
      cout << name << " is alone" << endl;
   }
   else {
      cout << name << " tutors " << students.size() << " students" << endl;
   }
}

int main() {
   Tutor myTutor("May", 3);
   Tutor yourTutor("Aya", 0);

   yourTutor.Print();
   myTutor.Print();

   return 0;
}