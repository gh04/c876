#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Time {
   public:
      void SetHours(int timeHours);      
      int GetHours() const;                        
      void PrintInMinutes();
   private:
      int hours;
      int ConvertToMinutes();                
};

void Time::SetHours(int timeHours) {
   hours = timeHours;
}

int Time::GetHours() const {
   return hours;
}

int Time::ConvertToMinutes() {
    return hours * 60;
}

void Time::PrintInMinutes() {
   cout << fixed << setprecision(1) << ConvertToMinutes() << " minutes" << endl;
}

int main() {
   Time time1;
   int inputHours;

   cin >> inputHours;
   time1.SetHours(inputHours);

   time1.PrintInMinutes();

   return 0;
}