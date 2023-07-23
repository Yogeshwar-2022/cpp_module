// Data Abstraction in C++

// Data Abstraction is a process of providing only the essential details to the outside world and hiding the internal details, i.e., representing only the essential details in the program.
// Data Abstraction is a programming technique that depends on the seperation of the interface and implementation details of the program.

// C++ provides a great level of abstraction. For example, pow() function is used to calculate the power of a number without knowing the algorithm the function follows

// In C++ program if we implement class with private and public members then it is an example of data abstraction.

// Data Abstraction can be achieved in two ways:

// Abstraction using classes
// Abstraction in header files.

// Abstraction using classes: 

// An abstraction can be achieved using classes. A class is used to group all the data members and member functions into a single unit by using the access specifiers. A class has the responsibility to determine which data member is to be visible outside and which is not.

// simple example of data abstraction using classes.

#include <iostream>    
using namespace std;    
 class Sum    
{    
private: int x, y, z; // private variables  
public:    
void add()    
{    
cout<<"Enter two numbers: ";    
cin>>x>>y;    
z= x+y;    
cout<<"Sum of two number is: "<<z<<endl;    
}    
};    
int main()    
{    
Sum sm;    
sm.add();    
return 0;    
} 

// Abstraction in header files: 

// An another type of abstraction is header file. For example, pow() function available is used to calculate the power of a number without actually knowing which algorithm function uses to calculate the power. Thus, we can say that header files hides all the implementation details from the user.

// program to calculate the power of a number.

#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{    
 int n = 4;  
   int power = 3;  
   int result = pow(n,power);         // pow(n,power) is the  power function  
   std::cout << "Cube of n is : " <<result<< std::endl;  
   return 0;  
}  