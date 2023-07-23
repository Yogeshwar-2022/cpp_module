// C++ Deque

// Deque stands for double ended queue. It generalizes the queue data structure i.e insertion and deletion can be performed from both the ends either front or back.


#include <iostream>  
#include<deque>  
using namespace std;  

int main()  
{  
    deque<int> d={10,20,30,40};  
    deque<int>::iterator itr;  

    d.insert(d.begin(),400);
    
     for(itr=d.begin();itr!=d.end();++itr)  
    {
        cout<<*itr<<" ";  
    }

    cout<<endl; //---------------------------------//
    
    d.push_back(200); 
    d.push_front(100); 
     
     for(itr=d.begin();itr!=d.end();++itr)  
    {
        cout<<*itr<<" ";  
    }

   cout<<endl; //---------------------------------//

     d.pop_back();  
     d.pop_front();

    for(itr=d.begin();itr!=d.end();++itr)  
    {
        cout<<*itr<<" ";  
    }
    
    return 0;  
  }  