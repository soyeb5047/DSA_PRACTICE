/*
here in 2D array is sorted in rowwise and colwise

input:
1 4 7 11 15
2 5 8 12 19
3 6 9 16 22

if element = 7 then output : Yes
if element = 80 the output : No

*/

#include<bits/stdc++.h>
using namespace std;

#define size 9

int search2(int a[size][size], int m, int n, int k)
{
    int i = 0, j = n - 1;
    while(i < m && j >= 0)
    {
        int element = a[i][j];
        if(element == k)
            return 1;
        else if(element > k)
            j--;
        else
            i++;
    }
    return 0;
}

int main()
{
    int m;
    cout << "Enter the row number : ";
    cin >> m;

    int n;
    cout << "Enter the col number : ";
    cin >> n;

    int a[size][size];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int ele;
    cout << "Enter the element which you want to find in 2D Array : ";
    cin >> ele;

    if(search2(a, m, n, ele))
        cout << "The element is present\n";
    else
        cout << "The element is not present\n";
}