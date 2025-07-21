#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
    Write code to assign name and density properties to currMaterial, 
    and store currMaterial in approvedMaterials. Input first receives a 
    name value, then a density value. 
    
    Input example: Water 993 Tar 1153 quit -1

*/

class Material {
   public:
      void SetNameAndDensity(string materialName, int materialDensity) {
         name = materialName;
         density = materialDensity;
      }
      void PrintMaterial() const {
         cout << name << " - " << density << endl;
      }
      string GetName() const { return name; }
      int GetDensity() const { return density; }

   private:
      string name;
      int density;
};

int main() {
   vector<Material> approvedMaterials;
   Material currMaterial;
   string currName;
   int currDensity;
   unsigned int i;

   cin >> currName;
   cin >> currDensity;
   while ((currName != "quit") && (currDensity > 0)) {
    currMaterial.SetNameAndDensity(currName, currDensity);
     approvedMaterials.push_back(currMaterial);

      cin >> currName;
      cin >> currDensity;
   }

   for (i = 0; i < approvedMaterials.size(); ++i) {
      currMaterial = approvedMaterials.at(i);
      currMaterial.PrintMaterial();
   }

   return 0;
}