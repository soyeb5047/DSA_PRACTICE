/*
n = 4
ans : 

   1
  2 1 2
 3 2 1 2 3
4 3 2 1 2 3 4

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of row to get this pyramid shape : ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        for(int m = 0; m < n - i; m++)
        {
            cout << "  ";
        }
        for(int j = i; j>= 1; j--)
        {
            cout << j << " ";
        }

        for(int k = 2; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}