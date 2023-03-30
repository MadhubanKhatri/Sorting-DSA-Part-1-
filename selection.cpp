#include<iostream>
using namespace std;

void insertion_sort(int arr[], int size)
{
    for (int i = 0; i<size-1; i++)
    {
        int min_index = i;

        // to check minmum index of the given array
        for(int j = i+1; j<size; j++)
        {
            if(arr[j]<arr[min_index])
                min_index = j;
        }
        swap(arr[min_index], arr[i]);
    }
}

int main()
{
    int arr[] = {5,10,-5,1,20};
    insertion_sort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<", ";
    }
    
    return 0;
}