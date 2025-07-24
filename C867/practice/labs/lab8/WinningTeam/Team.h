#ifndef TEAMH
#define TEAMH

#include <string>

using namespace std;

class Team {
   private:
    string name;
    int wins;
    int losses;
   
   // Setters
   public:
    void SetName(string name);
    void SetWins(int wins);
    void SetLosses(int losses);
   // Getters
    string GetName() const;
    int GetWins() const;
    int GetLosses() const;
    double GetWinPercentage() const;
   
    // Other
    void PrintStanding() const;
};

#endif