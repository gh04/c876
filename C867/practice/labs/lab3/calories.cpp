#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double AGE_FACTOR = 0.2757;
    const double WEIGHT_FACTOR = 0.03295;
    const double HEART_FACTOR1 = 1.0781;
    const double HEART_FACTOR2 = 75.4991;
    const double DENOMINATOR = 8.368;

    int age;
    double weight;
    int heartRate;
    int time;
    double averageCaloriesBurned;

    cin >> age;
    cin >> weight;
    cin >> heartRate;
    cin >> time;

    averageCaloriesBurned = ((age * AGE_FACTOR + weight * WEIGHT_FACTOR + heartRate * HEART_FACTOR1 - HEART_FACTOR2) * time) / DENOMINATOR;
    cout << fixed << setprecision(2) << "Calories: " << averageCaloriesBurned << " calories.\n";

   return 0;
}
