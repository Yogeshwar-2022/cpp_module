// A scope is a region of the program and broadly speaking there are three places, where variables can be declared −

// Inside a function or a block which is called local variables,

// In the definition of function parameters which is called formal parameters.

// Outside of all functions which is called global variables.

#include <iostream>
using namespace std;
 
// Global variable declaration:
int g;
 
int main () {
   // Local variable declaration:
   int a, b;
 
   // actual initialization
   a = 10;
   b = 20;
   g = a + b;
  
   cout << g;
 
   return 0;
}