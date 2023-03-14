/*
input : 
1 2 3 
4 5 6
7 8 9
 output:

 1 2 4 7 5 3 6 8 9

 when we print 2 4 it means downword column--, row++;
 Edge Case : 
if 4 5 6 is the last row then we have to take column++;

when we print 7 5 3 it means upward row--,column++;
Edge Case:
in this case 3 is in the last column so we need to row++;

*/

#include<bits/stdc++.h>
using namespace std;

#define size 10

void Traverse(int a[size][size], int n,int m)
{
    int row = 0, col = 0;

    bool up = true;

    while(row < n && col < m)
    {
        if(up)  // when upward is true
        {
            while(col < m - 1 && row > 0)       // we do m - 1 because here end after this loop column is 3
            {
                cout << a[row][col] << " ";
                row--;
                col++;
            }
            cout << a[row][col] << " ";
            if(col == m - 1)
            {
                row++;
            }
            else
                col++;
        }
        else
        {           // for downward is true
            while(row < n - 1 && col > 0)       // we do n - 1 because here end after this loop row is 3
            {
                cout << a[row][col] << " ";
                row++;
                col--;
            }
            cout << a[row][col] << " ";
            if(row == n - 1)
            {
                col++;
            }
            else
                row++;
        }

        up = !up;       // true converts to false
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    int a[size][size];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    Traverse(a,n,m);
}