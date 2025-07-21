#include <iostream>
#include <vector>
using namespace std;

/*
    Write the InputPatients() function in the Appointments 
    class. Within InputPatients(), use cin to read pairs of 
    input, character currGroup and string currName, until 'X'
     is read from input. Create each Patient object with 
     currGroup and currName as arguments and append each object 
     to vector patientList.

    Ex: If the input is B Dan B Aya A Del X, then the output is:

    Patient group: B, Name: Dan
    Patient group: B, Name: Aya
    Patient group: A, Name: Del
*/

class Patient {
   public:
      void SetGroupAndName(char newGroup, string newName);
      void Print() const;
   private:
      char group;
      string name;
};

void Patient::SetGroupAndName(char newGroup, string newName) {
	group = newGroup;
	name = newName;
}

void Patient::Print() const {
   cout << "Patient group: " << group << ", Name: " << name << endl;
}

class Appointments {
   public:
      void InputPatients();
      void PrintPatients();
   private:
      vector<Patient> patientList;
};

void Appointments::InputPatients() {
    Patient currPatient;
    char currGroup;
    string currName;

    cin >> currGroup;
    
    while(currGroup != 'X') {
        cin >> currName;
        currPatient.SetGroupAndName(currGroup, currName);
        patientList.push_back(currPatient);
    }

}

void Appointments::PrintPatients() {
   Patient currPatient;
   unsigned int i;

   for (i = 0; i < patientList.size(); ++i) {
      currPatient = patientList.at(i);
      currPatient.Print();
   }
}

int main() {
   Appointments appointments;

   appointments.InputPatients();
   appointments.PrintPatients();
 
   return 0;
}