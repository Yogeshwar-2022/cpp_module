// C++ Recursion
// When function is called within the same function, it is known as recursion in C++. The function which calls the same function, is known as recursive function.

// A function that calls itself, and doesn't perform any task after function call, is known as tail recursion. In tail recursion, we generally call the same function with return statement.

// Let's see a simple example of recursion.

// recursionfunction(){    
// recursionfunction(); //calling self function    
// }    
// C++ Recursion Example
// Let's see an example to print factorial number using recursion in C++ language.


#include<iostream>  
using namespace std;    
int main()  
{  
int factorial(int);  
int fact,value;  
cout<<"Enter any number: ";  
cin>>value;  
fact=factorial(value);  
cout<<"Factorial of a number is: "<<fact<<endl;  
return 0;  
}  
int factorial(int n)  
{  
if(n<0)  
return(-1); /*Wrong value*/    
if(n==0)  
return(1);  /*Terminating condition*/  
else  
{  
return(n*factorial(n-1));      
}  
}  