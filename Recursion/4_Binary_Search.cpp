#include<iostream>
#include<string>
using namespace std;

int BinarySearch(int *a, int n, int x, int start, int end)
{
    // base case
    if(start > end) return -1;
    
    int mid = (start + end) / 2;
    
    if(a[mid] == x) return mid;
    
    else if(a[mid] < x) return BinarySearch(a, n, x, mid + 1, end);
    
    else return BinarySearch(a, n, x, start, mid - 1);
}

int main()
{
    int a[] = {4, 5, 6, 7, 8};
    int n = sizeof(a) / sizeof(a[0]);
    
    int x = 9, start = 0, end = n - 1;
    
    cout << BinarySearch(a, n, x, start, end);
    
    
}
