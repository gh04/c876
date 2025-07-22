#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
    The Person class has a default constructor, a 
    constructor with two parameters, and a constructor 
    with three parameters. Declare the following objects:

    person1 with no arguments
    person2 with personName and personAge as arguments
    person3 with personName, personAge, and personHeight as arguments
    
    Ex: If the input is Fay 10 5.00, then the output is:

    Person: None, 0, 0.00
    Person: Fay, 10, 0.00
    Person: Fay, 10, 5.00
*/

class Person {
   public:
      Person();
      Person(string personName, int personAge);
      Person(string personName, int personAge, double personHeight);
      void Print();
   
   private:
      string name;
      int age;
      double height;
};

// Default constructor
Person::Person() {
   name = "None";
   age = 0;
   height = 0.0;
}

Person::Person(string personName, int personAge) {  
   name = personName;
   age = personAge;
   height = 0.0;
}

Person::Person(string personName, int personAge, double personHeight) {  
   name = personName;
   age = personAge;
   height = personHeight;
}

void Person::Print() {
   cout << fixed << setprecision(2) << "Person: " << name << ", " << age << ", " << height << endl;
}

int main() {
   string personName;
   int personAge;
   double personHeight;
   
   cin >> personName;
   cin >> personAge;
   cin >> personHeight;

   /* Your code goes here */
   Person person1;
   Person person2(personName, personAge);
   Person person3(personName, personAge, personHeight);

   person1.Print();
   person2.Print();
   person3.Print();
   
   return 0;
}