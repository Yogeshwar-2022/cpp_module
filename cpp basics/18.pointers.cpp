// Pointer Example
// Let's see the simple example of using pointers printing the address and value.

#include <iostream>  
using namespace std;  
int main()  
{  
int number=30;    
int ∗   p;      
p=&number;//stores the address of number variable    
cout<<"Address of number variable is:"<<&number<<endl;    
cout<<"Address of p variable is:"<<p<<endl;    
cout<<"Value of p variable is:"<<*p<<endl;    
   return 0;  
}  


// What are references and pointers?

// Call-By-Value
// Call-By-Reference with a Pointer Argument
// Call-By-Reference with a Reference Argument

#include   
using namespace std;  
// Pass-by-Value  
int square1(int n)  
{cout << "address of n1 in square1(): " << &n << "\n";  
n *= n;  
return n;  
}  
// Pass-by-Reference with Pointer Arguments  
void square2(int* n)  
{  
cout << "address of n2 in square2(): " << n << "\n";  
*n *= *n;  
}  
// Pass-by-Reference with Reference Arguments  
void square3(int& n)  
{  
      
cout << "address of n3 in square3(): " << &n << "\n";  
n *= n;  
}  
void example()  
{  
    // Call-by-Value  
    int n1 = 8;  
    cout << "address of n1 in main(): " << &n1 << "\n";  
    cout << "Square of n1: " << square1(n1) << "\n";  
    cout << "No change in n1: " << n1 << "\n";  
  
    // Call-by-Reference with Pointer Arguments  
    int n2 = 8;  
    cout << "address of n2 in main(): " << &n2 << "\n";  
    square2(&n2);  
    cout << "Square of n2: " << n2 << "\n";  
    cout << "Change reflected in n2: " << n2 << "\n";  
  
    // Call-by-Reference with Reference Arguments  
    int n3 = 8;  
    cout << "address of n3 in main(): " << &n3 << "\n";  
    square3(n3);  
    cout << "Square of n3: " << n3 << "\n";  
    cout << "Change reflected in n3: " << n3 << "\n";  
}  
// Driver program  
int main() { example(); }  