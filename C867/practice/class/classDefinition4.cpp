#include <iostream>
using namespace std;

class Horse {
   public:
      int GetAge() const;
	 string GetColor() const;
      string GetName() const;
      void SetAge(int customAge);
      void SetColor(string customColor);
      void SetName(string customName);
   private:
      int age;
      string color;
      string name;
      
};

void Horse::SetAge(int customAge) {
   age = customAge;
}

void Horse::SetColor(string customColor) {
	color = customColor;
}

void Horse::SetName(string customName) {   
   name = customName;
}

int Horse::GetAge() const {
   return age;
}

string Horse::GetColor() const {
	return color;
}

string Horse::GetName() const {
   return name;
}

int main() {
   Horse horse1;
   int inputAge;
	string inputColor;
   string inputName;

   cin >> inputAge;
	cin >> inputColor;
   cin >> inputName;

   horse1.SetAge(inputAge);
	horse1.SetColor(inputColor);
   horse1.SetName(inputName);
   
   cout << "Age: " << horse1.GetAge() << endl;
	cout << "Color: " << horse1.GetColor() << endl;
   cout << "Name: " << horse1.GetName() << endl;

   return 0;
}