#include "Triangle.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Triangle::SetBase(double userBase) {
   this->base = userBase;
}

void Triangle::SetHeight(double userHeight) {
   this->height = userHeight;
}

double Triangle::GetArea() const {
   return 0.5 * this->base * this->height;
}

void Triangle::PrintInfo() const {
   cout << fixed << setprecision(2);
   cout << "Base: " << this->base << endl;
   cout << "Height: " << this->height << endl;
   cout << "Area: " << GetArea() << endl;
}