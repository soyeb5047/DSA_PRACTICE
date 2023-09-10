/*
Alpha-Hill Pattern

Input Format: N = 3
Result: 
  A  
 ABA 
ABCBA

*/

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // for space
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        int x;
        for(int j = 1; j <= 2*i - 1; j++)
        {
            if(j <= i)
            {
                cout << (char)(65 + j - 1);
                x = j;
            }
            else
            {
                x--;
                cout << (char)(65 + x-1);
            }
        }

        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    pattern(n);
}