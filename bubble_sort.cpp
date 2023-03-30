#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size)
{
    for (auto i = 0; i < size-1; i++)
    {
        int swapped = 0;
        for (auto j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
                swapped = 1;
            }
            
        }

        if(swapped==0){
            break;
        }
    }
       
}

void print_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<", ";
    }
    
}

int main()
{
    int arr[] = {4,-1,0,11,20};
    bubble_sort(arr, 5);

    print_array(arr, 5);
    
    return 0;
}

