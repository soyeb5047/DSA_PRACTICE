#include<bits/stdc++.h>
using namespace std;

// void reverseArray(int *a, int n)
// {
//     // we use static because of the changes remains unchanged after the function calling
//     static int l = 0, r = n - 1;
    
//     if(l >= r)
//         return;

//     int temp = a[l];
//     a[l] = a[r];
//     a[r] = temp;
//     l++, r--;

//     reverseArray(a, n);
// }

void reverseArray(int *a, int l, int r)
{
    if(l >= r)
        return;

    swap(a[l], a[r]);
    reverseArray(a, l + 1, r - 1);
}

void reverseArray(int *a, int n)
{
    static int l = 0;
    if(l >= n / 2)
        return;

    swap(a[l], a[n - l - 1]);
    l++;
    reverseArray(a, n);
}

int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    int a[n];
    cout << "Enter the array element : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int left = 0;
    int right = n - 1;
    reverseArray(a, n);
    // reverseArray(a, left, right);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}