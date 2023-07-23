// C++ While loop
// In C++, while loop is used to iterate a part of the program several times. If the number of iteration is not fixed, it is recommended to use while loop than for loop.

// while(condition){    
// //code to be executed    
// }  

// C++ Nested While Loop Example

// In C++, we can use while loop inside another while loop, it is known as nested while loop. The nested while loop is executed fully when outer loop is executed once.

// Let's see a simple example of nested while loop in C++ programming language.

#include <iostream>  
using namespace std;  
int main () {  
        int i=1;      
          while(i<=3)     
          {    
              int j = 1;    
              while (j <= 3)    
{      
            cout<<i<<" "<<j<<"\n";      
            j++;  
          }     
           i++;  
        }  
    }    
