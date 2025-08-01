#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

// Default Constructor
Artist::Artist() : artistName("unknown"), birthYear(-1), deathYear(-1) {};

// Overloaded Constructor
Artist::Artist(string artistName, int birthYear, int deathYear) {
this->artistName = artistName;
this->birthYear = birthYear;
this->deathYear = deathYear;
}

string Artist::GetName() const { return artistName; }

int Artist::GetBirthYear() const { return birthYear; }

int Artist::GetDeathYear() const { return deathYear; }

void Artist::PrintInfo() const {
    cout << "Artist: " << artistName << " ";
    if (birthYear > -1 && deathYear > -1) {
        cout << "(" << birthYear << " to " << deathYear << ")";
    } else if (birthYear > -1 && deathYear < 0) {
        cout << "(" << birthYear << " to present)";
    } else {
        cout << "(unknown)";
    }
    cout << endl;
}
