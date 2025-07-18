#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {
   double sphereVolume;
   double sphereRadius;
   
   cout << "Enter sphereRadius ";
   cin >> sphereRadius;

    // Volume of sphere = (4.0 / 3.0) π r3
   sphereVolume = (4.0 / 3.0) * M_PI * pow(sphereRadius, 3.0); 

   cout << "sphereVolume: " << fixed << setprecision(2) << sphereVolume << endl;

   /*
        Scientific Notation 
        * 1.0e-3 is 0.001 and 1 x 10^-3
   */
   
   double avogadrosNumber = 6.02e23; // Approximation of atoms per mole 6.02 x 10^23
   double gramsPerMoleGold = 196.9665;
   double gramsGold;
   double atomsGold;
   
   cout << "Enter grams of gold: ";
   cin  >> gramsGold;
   
   atomsGold = gramsGold / gramsPerMoleGold * avogadrosNumber;
   
   cout << gramsGold << " grams of gold contains ";
   cout << atomsGold << " atoms" << endl;

   /*
    Compute the acceleration of gravity for a given distance from the 
    earth's center, distCenter, assigning the result to accelGravity. 
    The expression for the acceleration of gravity is: (G * M) / (d^2), 
    where G is the gravitational constant 6.673 x 10^11, M is the mass 
    of the earth 5.98 x 1024 (in kg) and d is the distance in meters 
    from the earth's center (stored in variable distCenter). 
    Note: Assume distance is at least the radius of the earth.

   */
   double G = 6.673e-11;
   double M = 5.98e24;
   double accelGravity;
   double distCenter;

   cin >> distCenter;

   /* Instead of using pow() you can times it */
   accelGravity = (G * M) / (distCenter * distCenter);

   cout << "Enter distCenter: ";
   cout << "accelGravity: " <<accelGravity << endl;

   return 0;
}