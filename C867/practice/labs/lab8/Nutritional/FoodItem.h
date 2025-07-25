#ifndef FOODITEM_H
#define FOODITEM_H

#include <string>
using namespace std;

class FoodItem {
    public:
        FoodItem();
        FoodItem(string name, double fat, double carbs, double protein);

        // Getters
        string GetName() const;
        double GetFat() const;
        double GetCarbs() const;
        double GetProtein() const;
        double GetCalories(double numServings) const;
        
        // Other
        void PrintInfo();
    private:
        string name;
        double fat;
        double carbs;
        double protein;
};

#endif