## What is Algorithm
An algorithm is a procedure used for solving a problem or performing a computation. Algorithms act as an exact list of instructions that conduct specified actions step by step in either hardware- or software-based routines

Algorithms are widely used throughout all areas of IT. In mathematics and computer science, an algorithm usually refers to a small procedure that solves a recurrent problem. Algorithms are also used as specifications for performing data processing and play a major role in automated systems.

---
## Sorting 
Sorting refers to ordering data in an increasing or decreasing fashion according to some linear relationship among the data items.
Sorting can be done on names, numbers and records. Sorting reduces the For example, it is relatively easy to look up the phone number of a friend from a telephone dictionary because the names in the phone book have been sorted into alphabetical order.

### Types of Sorting
There several types of Sorting. Here we will discuss some important sorting algoritms -
* Bubble Sort
* Selection Sort
* Insertion Sort
* Merge Sort
* Quick Sort
* Shell Sort
![Bubble Sort](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/tjs0v3b2ds7v5x9e816b.png)

## 1.) Bubble Sort
Bubble sort is a sorting alogrithm that compares two adjacent elements and swaps them until they are in the intended order.

Just like the movement of air bubbles in the water that rise up to the surface, each element of the array move to the end in each iteration. Therefore, it is called a bubble sort.

```c
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


```
## 2.) Selection Sort
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 
The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted portion. This process is repeated for the remaining unsorted portion of the list until the entire list is sorted. 
```c
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
```

## 3.) Insertion sort
Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

Insertion sort works similarly as we sort cards in our hand in a card game.

It can be assumed that the first card is already sorted then, we select an unsorted card. If the unsorted card is greater than the card in hand, it is placed on the right otherwise, to the left. In the same way, other unsorted cards are taken and put in their right place.

```c
#include <iostream>
using namespace std;

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Driver code
int main() {
  int data[] = {9, 5, 1, 4, 3};
  int size = sizeof(data) / sizeof(data[0]);
  insertionSort(data, size);
  cout << "Sorted array in ascending order:\n";
  printArray(data, size);
}
```

In the next blog, we will discuss Merge, Quick and Shell sort.
Thank you for reading.
