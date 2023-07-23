// Selection Sort Algorithm

// Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.


# include<iostream>
#include<algorithm>
using namespace std;

void SelectionSort(int arr[],int n)
{
    int temp;

    for(int i=0 ; i<n ; i++)
    {
        int min=i;
        
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[min])
            {
                // swap
                temp=arr[min];
                arr[min]=arr[j];
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

    SelectionSort(arr,n);
    
    cout<<"the sorted array is :\n";
    print_arr(arr,n);

    return 0;
}