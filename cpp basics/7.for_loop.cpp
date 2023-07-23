// C++ For Loop

// The C++ for loop is used to iterate a part of the program several times. If the number of iteration is fixed, it is recommended to use for loop than while or do-while loops.

// The C++ for loop is same as C/C#. We can initialize variable, check condition and increment/decrement value.

// C++ Nested For Loop Example
// Let's see a simple example of nested for loop in C++.

#include <iostream>  
using namespace std;  
   
int main () {  
        for(int i=1;i<=3;i++){      
             for(int j=1;j<=3;j++){      
            cout<<i<<" "<<j<<"\n";      
          }     
        }  
    }    