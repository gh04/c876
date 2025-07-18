#include <iostream>
#include <vector>
using namespace std;

/*
 *    Remove the last element from vector ticketList.
 *
 *    Ex: If the input is 5 100 12, then the output is:
 *    5 100 
 *
 */
int main() {
   vector<int> ticketList;
   const int NUM_TICKETS = 3;
   int ticketIn;
   unsigned int i;

   for (i = 0; i < NUM_TICKETS; ++i) {
      cin >> ticketIn;
      ticketList.push_back(ticketIn);
   }

   ticketList.pop_back();

   for (i = 0; i < ticketList.size(); ++i) {
      cout << ticketList.at(i) << " ";
   }
   cout << endl;

   return 0;
}