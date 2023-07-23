// Call by reference in C++
// In call by reference, original value is modified because we pass reference (address).

// Here, address of the value is passed in the function, so actual and formal arguments share the same address space. Hence, value changed inside the function, is reflected inside as well as outside the function.

// Note: To understand the call by reference, you must have the basic knowledge of pointers.

// Let's try to understand the concept of call by reference in C++ language by the example given below:

#include<iostream>  
using namespace std;    
void swap(int *x, int *y)  
{  
 int swap;  
 swap=*x;  
 *x=*y;  
 *y=swap;  
}  
int main()   
{    
 int x=500, y=100;    
 swap(&x, &y);  // passing value to function  
 cout<<"Value of x is: "<<x<<endl;  
 cout<<"Value of y is: "<<y<<endl;  
 return 0;  
}    



// Difference between call by value and call by reference in C++


// No.	               Call by value	                                      |                                  Call by reference
// 1 A copy of value is passed to the function	                              |                An address of value is passed to the function
// 2 Changes made inside the function is not reflected on other functions	  | Changes made inside the function is reflected outside func      
// 3 Actual and formal arguments will be created in different memory location | Actual and formal arguments will be created in same memory location