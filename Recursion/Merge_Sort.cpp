/*

merge sort is the divide and merge algorithm
input : [3,2,8,5,1,4,23]
output : [1,2,3,4,5,8,23]

*/
#include <bits/stdc++.h>
using namespace std;

void merge(int *a, int start, int mid, int end)
{
    // we made a temporary to merge left array and right array
    vector<int> temp;

    // our left array is [start.....mid]
    int left = start;

    // our rigth array is [mid + 1.........end]
    int right = mid + 1;

    // we have to compare them berfore inserting in new array
    while (left <= mid && right <= end)
    {
        if (a[left] > a[right])
        {
            temp.push_back(a[right]);
            right++;
        }
        else if (a[left] < a[right])
        {
            temp.push_back(a[left]);
            left++;
        }

        else if (a[left] == a[right])
        {
            temp.push_back(a[left]);
            temp.push_back(a[right]);
            left++, right++;
        }
    }

    // if there is extra element in left array or right array
    while (left <= mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while (right <= end)
    {
        temp.push_back(a[right]);
        right++;
    }


    // after sort those elements we insert those elements in original array
    for(int i = start; i <= end; i++)
    {
        a[i] = temp[i - start];
    }
}

void mergeArray(int *a, int n, int start, int end)
{
    // we stop this divide method in this base condition
    if (start >= end)
        return;

    // as we know merge sort is a divide and merge algo so we divide this array
    int mid = (start + end) / 2;

    // we divide left and right array so use recursion
    mergeArray(a, n, start, mid);
    mergeArray(a, n, mid + 1, end);

    // after divide we compare and merge this subArrays
    merge(a, start, mid, end);
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int start = 0, end = n - 1;

    mergeArray(a, n, start, end);

    cout << "After sorting the array elements are : ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    
    cout << endl;
}