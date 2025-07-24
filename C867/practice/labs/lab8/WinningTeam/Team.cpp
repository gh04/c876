#include <iostream>
#include <iomanip> 
#include "Team.h"
using namespace std;

    void Team::SetName(string name) {
        this->name = name;
    }
    void Team::SetWins(int wins) {
        this->wins = wins;
    }
    void Team::SetLosses(int losses) {
        this->losses = losses;
    }
   // Getters
    string Team::GetName() const { return name; }
    int Team::GetWins() const { return wins; }
    int Team::GetLosses() const { return losses; }
    double Team::GetWinPercentage() const {
        if (wins + losses == 0) {
            return 0.0; // avoid division by zero
        }
        return static_cast<double>(wins) / (wins + losses); // second operand sums the num of games played
    }
   
    // Other
    void Team::PrintStanding() const {
        double winPer = GetWinPercentage();
        cout << "Win percentage: " << fixed << setprecision(2) << winPer << endl;;
        if (winPer < 0.50) {
            cout << "Team " << name << " has a losing average.";
        } else {
            cout << "Congratulations, Team " << name << " has a winning average!";
        }
        cout << endl;
    }