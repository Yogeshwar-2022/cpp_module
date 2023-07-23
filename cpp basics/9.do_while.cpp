// C++ Do-While Loop
// The C++ do-while loop is used to iterate a part of the program several times. If the number of iteration is not fixed and you must have to execute the loop at least once, it is recommended to use do-while loop.

// The C++ do-while loop is executed at least once because condition is checked after loop body.

// do{    
// //code to be executed    
// }while(condition); 


// C++ Nested do-while Loop
// In C++, if you use do-while loop inside another do-while loop, it is known as nested do-while loop. The nested do-while loop is executed fully for each outer do-while loop.

// Let's see a simple example of nested do-while loop in C++.

#include <iostream>  
using namespace std;  
int main() {  
     int i = 1;    
         do{    
              int j = 1;          
              do{    
                cout<<i<<"\n";        
                  j++;    
              } while (j <= 3) ;    
              i++;    
          } while (i <= 3) ;     
}  