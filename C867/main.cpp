//
//  main.cpp
//  C867
//
//  Created by Gerardo Hernandez on 7/18/25.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    while (argc < 2) {
        cout << "incorrect argument\n";
        return 1;
    }
    
    cout << argv[1] << " " << argv[2] << endl;
    
    
//    std::cout << "Hello, World!\n";
    return 0;
}
