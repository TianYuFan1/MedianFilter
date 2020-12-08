#include "MedianFilter.h"

int MedianFilter::Filter(int measurement)
{
    for (int i = 51; i > 0; i--) {array[i] = array[i-1];}
    array[0] = measurement;

    for (int i = 0; i < 51; i++) {
        sortedArray[i] = array[i];
    }

    int n = sizeof(sortedArray) / sizeof(sortedArray[0]);

    selectionSort(sortedArray, n);
    return sortedArray[25];
}

void MedianFilter::selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
  
    // One by one move boundary of unsorted subarray 
    for (i = 0; i < n-1; i++) 
    { 
        // Find the minimum element in unsorted array 
        min_idx = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min_idx = j; 
  
        // Swap the found minimum element with the first element 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 

void MedianFilter::swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  