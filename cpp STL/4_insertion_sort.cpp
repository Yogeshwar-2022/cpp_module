// Insertion Sort Algorithm

// Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

// Algorithm
// The simple steps of achieving the insertion sort are listed as follows -

// Step 1 - If the element is the first element, assume that it is already sorted. Return 1.

// Step2 - Pick the next element, and store it separately in a key.

// Step3 - Now, compare the key with all elements in the sorted array.

// Step 4 - If the element in the sorted array is smaller than the current element, then move to the next element. Else, shift greater elements in the array towards the right.

// Step 5 - Insert the value.

// Step 6 - Repeat until the array is sorted.

// question :         12 11 13 5 6 

// first iteration:   11 12 13 5 6

// second iteration:  11 12 13 5 6

// third iteration:   5 11 12 13 6 

// fourth iteration:  5 6 11 12 13



# include<iostream>
#include<algorithm>
using namespace std;

void insertionSort(int arr[],int n)
{
    int i , key , j;

    for(int i=0; i<n ; i++)
    {
        int key=arr[i];
        
        j=i-1;

        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }

        arr[j+1]=key;
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
    int arr[]={12 ,11 ,13 ,5 ,6 };

    int n=sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
    
    cout<<"the sorted array is :\n";
    print_arr(arr,n);

    return 0;
}





