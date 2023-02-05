
/*
reverse an array in groups
	[1, 2, 3, 4, 5, 6,  7, 8, 9]
	k = 3 (group size)
	[3, 2, 1, 6, 5, 4, 9, 8, 7]

*/

#include<bits/stdc++.h>
using namespace std;

void reverse_Array(int *a,int start, int end)
{
    while(start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;end--;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int pos;
    cin >> pos;

    int rem = n % pos;

    for(int i = 0; i < n-rem; i += pos)
    {
        reverse_Array(a, i, i+pos-1);
    }

    for(int i = 0; i <n; i++)
    {
        cout << a[i] << " ";
    }
}