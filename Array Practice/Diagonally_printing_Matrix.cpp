/*
input : 
1 2 3
4 5 6
7 8 9

output : 

1 2 4 3 5 7 6 8 9
*/

#include<bits/stdc++.h>
using namespace std;

#define size 5

void Diagonal(int a[size][size],int n)
{
    // at the first i print 1 2 4 3 5 7 
    for(int col = 0; col < n; col++)
    {
        int i = 0, j = col;
        while(j >= 0)
        {
            cout << a[i][j] << " "; // for 3 5 7 when i = 0, j = 2  & i = 1, j = 1 & i = 2, j = 0
            i++;
            j--;
        }
    }

    for(int row = 1; row < n; row++) // we start from row 1 because row 0 is already printed
    {
        int i = row, j = n - 1;
        while(i < n)
        {
            cout << a[i][j] << " ";
            i++;
            j--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[size][size];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    Diagonal(a,n);
}