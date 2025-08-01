#include <iostream>
using namespace std;

/* Direct driving distances between cities, in miles */
/* 0: Boston  1: Chicago  2: Los Angeles */

int main() {
   int cityA;                  // Starting city
   int cityB;                  // Destination city
   int drivingDistances[3][3]; // Driving distances

   // Initialize distances array
   drivingDistances[0][0] = 0;
   drivingDistances[0][1] = 960;  // Boston-Chicago
   drivingDistances[0][2] = 2960; // Boston-Los Angeles
   drivingDistances[1][0] = 960;  // Chicago-Boston
   drivingDistances[1][1] = 0;
   drivingDistances[1][2] = 2011; // Chicago-Los Angeles
   drivingDistances[2][0] = 2960; // Los Angeles-Boston
   drivingDistances[2][1] = 2011; // Los Angeles-Chicago
   drivingDistances[2][2] = 0;

   cout << "0: Boston  1: Chicago  2: Los Angeles" << endl;

   cout << "Enter city pair (Ex: 1 2) -- ";
   cin >> cityA;
   cin >> cityB;

   if ((cityA >= 0) && (cityA <= 2) && (cityB >= 0) && (cityB <= 2)) {
      cout << "Distance: " << drivingDistances[cityA][cityB];
      cout << " miles." << endl;
   }

   return 0;
}

/*
 *   0: Boston  1: Chicago  2: Los Angeles
 *   Enter city pair (Ex: 1 2) -- 1 2
 *   Distance: 2011 miles.
 *
 *   ...
 *
 *   0: Boston  1: Chicago  2: Los Angeles
 *   Enter city pair (Ex: 1 2) -- 2 0
 *   Distance: 2960 miles.
 *
 *   ...
 *
 *   0: Boston  1: Chicago  2: Los Angeles
 *   Enter city pair (Ex: 1 2) -- 1 1
 *   Distance: 0 miles.
*/