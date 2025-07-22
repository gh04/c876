#include <iostream>
using namespace std;

class Appointment {
   public:
      Appointment();
      void SetFields(string newMonth, int newDate, char newWeekday);
      void Print() const;
   private:
      string month;
      int date;
      char weekday;
};

Appointment::Appointment() : month("Unavailable"), date(-100), weekday('?'){
}

void Appointment::SetFields(string newMonth, int newDate, char newWeekday) {
   month = newMonth;
   date = newDate;
   weekday = newWeekday;
}

void Appointment::Print() const {
   cout << "Appointment: " << month << ", Date: " << date << ", Weekday: " << weekday << endl;
}

int main() {
   string newMonth;
   int newDate;
   char newWeekday;
   Appointment myAppointment;
  
   myAppointment.Print();
  
   cin >> newMonth;
   cin >> newDate;
   cin >> newWeekday;
   myAppointment.SetFields(newMonth, newDate, newWeekday);
   myAppointment.Print();
  
   return 0;
} 