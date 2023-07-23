// BUBBLE SORT 

// Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are in the intended order 

// Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. Therefore, it is called a bubble sort.

// working of Bubble sort based on compare and sort


# include<iostream>
#include<algorithm>
using namespace std;

void bubbleSort(int arr[],int n)
{
    int temp;

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(arr[i]<arr[j])
            {
                // swap
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

void print_arr(int arr[] , int n)
{
    for(int i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]={4,9,1,5,2,0};

    int n=sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);
    
    cout<<"the sorted array is :\n";
    print_arr(arr,n);

    return 0;
}