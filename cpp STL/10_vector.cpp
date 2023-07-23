// C++ Vector

// A vector is a sequence container class that implements dynamic array, means size automatically changes when appending elements. A vector stores the elements in contiguous memory locations and allocates the memory as needed at run time.

// Difference between vector and array

// An array follows static approach, means its size cannot be changed during run time while vector implements dynamic array means it automatically resizes itself when appending elements.

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>v1;
    
    for(int i=1 ; i<=5;i++)
    {
        v1.push_back(i);
    }
    
    for(auto i=v1.begin(); i!=v1.end(); ++i)
    {
        cout<<*i<<" ";
    }

cout<<endl;

   vector<string>v2;

    v2.push_back("welcome");
    v2.push_back(" in our cpp tutorial !");

    vector<string>::iterator i2;
    for(i2=v2.begin(); i2 != v2.end() ; ++i2)
    {
        cout<<*i2;
    }
    return 0;
}

// operations on vector 

// 1. one by one entering values

#include <iostream>  
#include <vector>  
using namespace std;  
int main()   
{  
  vector<int> vec;    
  vec.push_back(1);   
  vec.push_back(2);   
  vec.push_back(3);  
  vec.push_back(4);

  for (int i = 0; i < vec.size(); i++)  
  {  
    cout << vec[i] << " ";   
  }  
  return 0;   
}  

// 2. By the help of arrays 

#include <iostream>  
#include <vector>  
using namespace std;  
int main()   
{  
  vector<int> vectr{9,8,7,6,5,4,3,2,1,0};   

  for (int i = 0; i < vectr.size(); i++)  
  {  
    cout << vectr[i] << " \n";   
  }  
  return 0;  
}  

// 3. Using another initialized vector -

#include <iostream>  
#include <vector>  
using namespace std;  
int main()   
{  
  vector<int> vec_1{1,2,3,4,5,6,7,8};  

  vector<int> vec_2(vec_1.begin(), vec_1.end()); 

  for (int i = 0; i < vec_2.size(); i++)  
  {  
    cout << vec_2[i] << " \n";   
  }  
  return 0;   
}  