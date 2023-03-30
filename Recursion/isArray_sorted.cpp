#include<bits/stdc++.h>
using namespace std;

int isSorted(int *a, int n)
{
    if(n == 1)
        return 1;
    return a[n - 1] < a[n - 2] ? 0 : isSorted(a, n - 1);
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

    if(isSorted(a, n))
        cout << "This array is sorted.\n";

    else
        cout << "This array is not sorted.\n";
}