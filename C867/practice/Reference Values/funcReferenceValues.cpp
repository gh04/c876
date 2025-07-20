// passing parameters by reference
#include <iostream>
using namespace std;

/*
    From: https://cplusplus.com/doc/tutorial/functions/

    In certain cases, though, it may be useful to access 
    an external variable from within a function. To do that, 
    arguments can be passed by reference, instead of by value. 
    For example, the function duplicate in this code duplicates 
    the value of its three arguments, causing the variables used 
    as arguments to actually be modified by the call.

    In C++, references are indicated with an ampersand (&) 
    following the parameter type.

    any modification on their corresponding local variables within 
    the function are reflected in the variables passed as arguments 
    in the call.

*/
void duplicate (int& a, int& b, int& c)
{
  a*=2;
  b*=2;
  c*=2;
}

int main ()
{
  int x=1, y=3, z=7;
  duplicate (x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z;
  return 0;
}

/*
    The solution is for the function to guarantee that 
    its reference parameters are not going to be modified 
    by this function. This can be done by qualifying the 
    parameters as constant:
*/

string concatenate (const string& a, const string& b)
{
  return a+b;
}

/*
    By qualifying them as const, the function is forbidden 
    to modify the values of neither a nor b, but can actually 
    access their values as references (aliases of the arguments), 
    without having to make actual copies of the strings.

    Therefore, const references provide functionality similar to 
    passing arguments by value, but with an increased efficiency 
    for parameters of large types. That is why they are extremely 
    popular in C++ for arguments of compound types. Note though, 
    that for most fundamental types, there is no noticeable 
    difference in efficiency, and in some cases, const references 
    may even be less efficient!
*/