/*
input : 
2 0 2 1 1 0
output : 
0 0 1 1 2 2
*/

#include<bits/stdc++.h>
using namespace std;

void color(int a[], int n)
{
    // int count0 = 0, count1 = 0, count2 = 0;
    // for(int i = 0; i < n; i++)
    // {
    //     if(a[i] == 0)
    //     {
    //         count0++;
    //     }
    //     else if(a[i] == 1)
    //     {
    //         count1++;
    //     }
    //     else{
    //         count2++;
    //     }
    // }
    // int i = 0;
    // while(count0 != 0)
    // {
    //     a[i++] = 0;
    //     count0--;
    // }

    // while(count1 != 0)
    // {
    //     a[i++] = 1;
    //     count1--;
    // }

    // while(count2 >= 0)
    // {
    //     a[i++] = 2;
    //     count2--;
    // }

    int high = n - 1, low = 0, mid = 0;
    while(mid <= high)
    {
        if(a[mid] == 0)
        {
            swap(a[mid], a[low]);
            low++,mid++;
        }
        else if(a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
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

    color(a,n);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}