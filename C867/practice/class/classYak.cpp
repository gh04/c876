#include <iostream>
using namespace std;

class Yak {
   public:
      string GetName();
      string GetColor();
      void SetName(string customName);
      void SetColor(string customColor);
   private:
     string name;
     string color;
};

void Yak::SetName(string customName) {
   name = customName;
}

void Yak::SetColor(string customColor) {   
   color = customColor;
}

string Yak::GetName() {
   return name;
}

string Yak::GetColor() {
   return color;
}

int main() {
   Yak yak1;
   string inputName;
   string inputColor;

   cin >> inputName;
   cin >> inputColor;

   yak1.SetName(inputName);
   yak1.SetColor(inputColor);
   
   cout << "Name: " << yak1.GetName() << endl;
   cout << "Color: " << yak1.GetColor() << endl;

   return 0;
}