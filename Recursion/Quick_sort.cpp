/*
quick sort is divide and conqure algo.
why conqure => we find pivot and take it own place

1. take the pivot
    a/ take pivot as the first element
    b/ take pivot as last element
    c/ take mid element as pivot
    d/ take any random value as pivot

2. take smaller elements at left side of pivot and greater elements on right size of pivot
3. after taking its correct place this position is called as partition and this partition index is already sorted
*/

#include<bits/stdc++.h>
using namespace std;

int quick(int *a, int low, int high)
{
    // at the first we take the first element as pivot
    int pivot = a[low];

    int i = low, j = high;

    // now take pivot to its own place
    while(i < j)
    {
        // if any greater element in ith position and smaller element find in jth place then stop and swap them
        // if here i > j it means we get the correct place of pivot then swap a[j], a[low] or pivot

        while(a[i] <= pivot && i <= high - 1)
            i++;
        
        while(a[j] > pivot && j >= low + 1)
            j--;

        if(i < j)
            swap(a[i], a[j]);


    }
    swap(a[low], a[j]);
    // j is the partition index
    return j;
}

void quickSort(int *a, int low, int high)
{
    // if there is more than one element then perform sort
    if(low < high)
    {
        // we take pivot element on its correct place
        int partition = quick(a, low, high);

        // after taking correct place this index is the partition and we perform same with left part and right part
        quickSort(a, low, partition - 1);
        quickSort(a, partition + 1, high);
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    quickSort(a, 0, n - 1);

    cout << "Now the array elements after sorting : ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    cout << endl;
    
}