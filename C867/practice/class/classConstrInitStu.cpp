#include <iostream>
#include <string>
using namespace std;

class Students {
   public:
      Students(int);
      int GetTotal() const { return  numStudents; }

   private:
      int numStudents;
};

Students::Students(int num) : numStudents(num) {}

class Tutor {
   public:
      Tutor(string);
      Tutor(string, int);
      void Print() const;

   private:
      string name;
      Students students;
};

Tutor::Tutor(string tutorName) : name(tutorName), students(0) {}
Tutor::Tutor(string tutorName, int numStudents) : name(tutorName), students(numStudents) {}

void Tutor::Print() const {
   if (students.GetTotal() == 0){
      cout << name << " is alone" << endl;
   }
   else {
      cout << name << " teaches " << students.GetTotal() << " students" << endl;
   }
}

int main() {
   Tutor myTutor("Leo");
   Tutor yourTutor("Ian", 3);

   yourTutor.Print();
   myTutor.Print();

   return 0;
}