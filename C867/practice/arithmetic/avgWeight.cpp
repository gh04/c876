#include <iostream>
using namespace std;

int main() {
   int duckWeight = 6;
	int storkWeight = 2;
	int rabbitWeight = 4;
	int numDucks;
	int numStorks;
	int numRabbits;
	int averageWeight;
	int sumWeight;

	cin >> numDucks;
	cin >> numStorks;
	cin >> numRabbits;

   sumWeight = (duckWeight * numDucks) + (storkWeight * numStorks) + (rabbitWeight * numRabbits);
   averageWeight = sumWeight / (numDucks + numStorks + numRabbits);

   cout << "Average weight: " << averageWeight << endl;

   return 0;
}