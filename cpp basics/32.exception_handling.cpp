// C++ Exception Handling Keywords
// In C++, we use 3 keywords to perform exception handling:

// try
// catch, and
// throw

// C++ try/catch

// In C++ programming, exception handling is performed using try/catch statement. The C++ try block is used to place the code that may occur exception. The catch block is used to handle the exception.

// C++ example without try/catch

#include <iostream>  
using namespace std;  
float division(int x, int y) {  
   return (x/y);  
}  
int main () {  
   int i = 50;  
   int j = 0;  
   float k = 0;  
      k = division(i, j);  
      cout << k << endl;  
   return 0;  
}  