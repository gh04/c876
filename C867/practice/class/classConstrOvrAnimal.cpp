#include <iostream>
#include <string>
using namespace std;

/*
    The Animal class has a default constructor with no 
    parameters. Define an overloaded constructor that 
    takes one string parameter and initializes the animal's 
    type with the string.

    Ex: If the input is cheetah, then the output is:

    Animal: Undefined
    Animal: cheetah
*/

class Animal {
   public:
      Animal();
      Animal(string animalType);
      void Print();
   
   private:
      string type;
};

// Default constructor
Animal::Animal() {
   type = "Undefined";
}

/* Your code goes here */
Animal::Animal(string animalType) {
    this->type = animalType;
}

void Animal::Print() {
   cout << "Animal: " << type << endl;
}

int main() {
   string animalType;
   
   cin >> animalType;
   
   Animal emptyAnimal;
   Animal animal1(animalType);
   
   emptyAnimal.Print();
   animal1.Print();

   return 0;
}