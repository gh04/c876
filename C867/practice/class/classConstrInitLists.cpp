
#include <iostream>
using namespace std;

class SampleClass {
   public:
      SampleClass();
      void Print() const;

   private:
      int field1;
      int field2;
};

SampleClass::SampleClass() : field1(100), field2(200) {
}



void SampleClass::Print() const {
   cout << "Field1: " << field1 << endl;
   cout << "Field2: " << field2 << endl;
}

int main() {
   SampleClass myClass;
   myClass.Print();
   return 0;
}