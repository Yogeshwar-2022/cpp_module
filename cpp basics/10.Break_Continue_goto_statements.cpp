// C++ Break Statement Example

// Let's see a simple example of C++ break statement which is used inside the loop.

#include <iostream>  
using namespace std;  
int main() {  
      for (int i = 1; i <= 10; i++)    
          {    
              if (i == 5)    
              {    
                  break;    
              }    
        cout<<i<<"\n";    
          }    
}  

// C++ Continue Statement

// The C++ continue statement is used to continue loop. It continues the current flow of the program and skips the remaining code at specified condition. In case of inner loop, it continues only inner loop.

#include <iostream>  
using namespace std;  
int main()  
{  
     for(int i=1;i<=10;i++){      
            if(i==5){      
                continue;      
            }      
            cout<<i<<"\n";      
        }        
} 

// C++ Goto Statement

// The C++ goto statement is also known as jump statement. It is used to transfer control to the other part of the program. It unconditionally jumps to the specified label.

// It can be used to transfer control from deeply nested loop or switch case label.

// C++ Goto Statement Example
// Let's see the simple example of goto statement in C++.

#include <iostream>  
using namespace std;  
int main()  
{  
ineligible:    
         cout<<"You are not eligible to vote!\n";    
      cout<<"Enter your age:\n";    
      int age;  
      cin>>age;  
      if (age < 18){    
              goto ineligible;    
      }    
      else    
      {    
              cout<<"You are eligible to vote!";     
      }         
}  