#include<bits/stdc++.h>
using namespace std;

void sortArray(int *a, int n)
{
    // using brute force approach
    // time complexity O(n)

    // count 0, 1, 2
    // int count0 = 0, count1 = 0, count2 = 0;
    // for(int i = 0; i < n; i++)
    // {
    //     if(a[i] == 0)   count0++;
    //     else if(a[i] == 1)  count1++;
    //     else if(a[i] == 2)  count2++;
    // }
    // // for update the array 
    // int i = 0;

    // // store 0 at the first
    // while(count0 > 0)
    // {
    //     a[i++] = 0;
    //     count0--;
    // }

    // // store 1 
    // while(count1 > 0)
    // {
    //     a[i++] = 1;
    //     count1--;
    // }

    // // store 2
    // while(count2 > 0)
    // {
    //     a[i++] = 2;
    //     count2--;
    // }


    

    // using Dutch National flag algorithm(DNF)
    // time complexity O(logn)

    // we take 3 pointers
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high)
    {
        // if mid is 0 that means 0's position is at the low position
        if(a[mid] == 0)
            swap(a[mid++], a[low++]);

        // if mid is 1 we know in this sorted array 1's poition middle in array so we take only mid++
        else if(a[mid] == 1)
            mid++;

        // if mid is 2 then we swap with high
        else if(a[mid] == 2)
            swap(a[mid], a[high--]);
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
        cin >> a[i];
    
    sortArray(a, n);

    cout << "Now the array is : ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}