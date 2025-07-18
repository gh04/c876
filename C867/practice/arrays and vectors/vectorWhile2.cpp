#include <iostream>
#include <vector>
using namespace std;

/*
 * Integers are read from input and stored into a vector until
 * 0 is read. For each vector element E before the last element, 
 * output the result of subtracting the vector's last element 
 * from E. End each number with a newline.
 * 
 * Ex: If the input is -11 -3 -6 8 0, the vector's 
 * last element is 8. Thus, the output is:
 * 
 * -19
 * -11
 * -14
 * 
 * Note: The input has at least three integers
 */
int main() {
   vector<int> vect1;
   int value;
   int i;

   cin >> value;
   while (value != 0) {
      vect1.push_back(value);
      cin >> value;
   }
   for (i = 0; i < vect1.size(); ++i) {
    //    cout << vect1.at(i) << " ";
        if (i == vect1.size() - 1) {
            break;
        }
        // cout << vect1.back();
     cout << vect1.at(i) - vect1.back() << endl;
   }
   

   return 0;
}