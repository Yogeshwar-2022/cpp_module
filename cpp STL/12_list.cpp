// C++ List

// List is a contiguous container while vector is a non-contiguous container i.e list stores the elements on a contiguous memory and vector stores on a non-contiguous memory.

// Insertion and deletion in the middle of the vector is very costly as it takes lot of time in shifting all the elements. Linklist overcome this problem and it is implemented using list container.

// List supports a bidirectional and provides an efficient way for insertion and deletion operations.

// Traversal is slow in list as list elements are accessed sequentially while vector supports a random access.

#include<iostream>  
#include<list>  
using namespace std;  

int main()  
{  
   list<int> l1 {1,2,3,4};  
   // or
//    list<int> l2={3 , 4, 5, 6, 7}


   list<int>::iterator itr;  

   l1.insert(l1.begin(),5); 

   for(itr=l1.begin();itr!=l1.end();++itr)  
   {
    cout<<*itr<<" ";  
   }

cout<<endl;//------------------------------------//

   l1.push_back(100); 
   l1.push_front(200); 

   for(itr=l1.begin();itr!=l1.end();++itr)  
   {
    cout<<*itr<<" ";  
   }

cout<<endl;//------------------------------------//

   l1.pop_back(); 
   l1.pop_front(); 

   for(itr=l1.begin();itr!=l1.end();++itr)  
   {
    cout<<*itr<<" ";  
   }

   return 0;  
}  