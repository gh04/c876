#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    /*
    Every call to rand() pulls the next value out of a deterministic sequence 
    that lives in a hidden internal state. That state must be initialized (“seeded”) 
    before you start drawing numbers:
    
    Without calling srand(...), the library uses a fixed default seed (often 1) every 
    time your program starts.
    
    That means the sequence of values from rand() is exactly the same on each run—even 
    if you recompile—because you never changed the starting state.
    
    When you call srand(someSeed) once at the beginning, you overwrite that default with 
    your own seed.

    RAND_MAX is a machine-dependent value, but is at least 32,767. Locally, 
    RAND_MAX is about 2 billion.
    */
    srand(time(nullptr));
    cout << rand() % 10 << endl; // 0 - 9
    cout << (rand() % 21) - 10 << endl; // -10 - 10
    cout << (rand() % 50) + 1 << endl; // 0 - 50
    cout << (rand() % 6) + 10 << endl; // 10 - 15
    cout << (rand() % 10) + 16 << endl; // 16 - 25
    cout << (rand() % 41) - 20 << endl; // -20 - 20
    cout << (rand() % (30 - 18 + 1)) + 18 << endl; // 18 - 30

    cout << "(RAND_MAX: " << RAND_MAX << ")" << endl;


    // Switch a student
    // from a random seat on the left  (cols  1 to 15)
    // to a random seat on the right (cols 16 to 30)
    // Seat rows are 1 to 20
    int rowNumL;
   int colNumL;
   int rowNumR;
   int colNumR;

   rowNumL = (rand() % 20) + 1;  // 1 to 20
   colNumL = (rand() % 15) + 1;  // 1 to 15

   rowNumR = (rand() % 20) + 1;  // 1 to 20
   colNumR = (rand() % 15) + 16; // 16 to 30

   cout << "Move from ";
   cout << "row " << rowNumL << " col " << colNumL;
   cout << " to " ;
   cout << "row " << rowNumR << " col " << colNumR;
   cout << endl;

    return 0;
}