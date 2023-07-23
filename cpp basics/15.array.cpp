// Like other programming languages, array in C++ is a group of similar types of elements that have contiguous memory location.

// In C++ std::array is a container that encapsulates fixed size arrays. In C++, array index starts from 0. We can store only fixed set of elements in C++ array.


// A collection of related data items stored in adjacent memory places is referred to as an array in the C/C++ programming language or any other programming language for that matter. Elements of an array can be accessed arbitrarily using its indices. They can be used to store a collection of any type of primitive data type, including int, float, double, char, etc. An array in C/C++ can also store derived data types like structures, pointers, and other data types, which is an addition. 


// Advantages of C++ Array:

// Code Optimization (less code)
// Random Access
// Easy to traverse data
// Easy to manipulate data
// Easy to sort data etc.


// Disadvantages of C++ Array:
// Fixed size


// C++ Array Types
// There are 2 types of arrays in C++ programming:
// Single Dimensional Array
// Multidimensional Array



// C++ Single Dimensional Array

#include <iostream>  
using namespace std;  
int main()  
{  
 int arr[5]={10, 0, 20, 0, 30};  //creating and initializing array    
        //traversing array    
        for (int i = 0; i < 5; i++)    
        {    
            cout<<arr[i]<<"\n";    
        }    
}  


// C++ Multidimensional Arrays


// The multidimensional array is also known as rectangular arrays in C++. It can be two dimensional or three dimensional. The data is stored in tabular form (row ∗ column) which is also known as matrix.

// C++ Multidimensional Array Example
// Let's see a simple example of multidimensional array in C++ which declares, initializes and traverse two dimensional arrays.

#include <iostream>  
using namespace std;  
int main()  
{  
  int test[3][3];  //declaration of 2D array   
    test[0][0]=5;  //initialization   
    test[0][1]=10;   
    test[1][1]=15;  
    test[1][2]=20;  
    test[2][0]=30;  
    test[2][2]=10;  
    //traversal    
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< test[i][j]<<" ";  
        }  
        cout<<"\n"; //new line at each row   
    }  
    return 0;  
}  


// example 2)

#include <iostream>  
using namespace std;  
int main()  
{  
  int test[3][3] =  
    {  
        {2, 5, 5},  
        {4, 0, 3},  
        {9, 1, 8}  };  //declaration and initialization    
    //traversal    
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< test[i][j]<<" ";  
        }  
        cout<<"\n"; //new line at each row   
    }  
    return 0;  
}  