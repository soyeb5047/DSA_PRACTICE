/*
number crown pattern
input : 3
1    1
12  21
123321
*/
#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // for space
        for(int j = 1; j <= 2 * n - 2 * i; j++)
        {
            cout << " ";
        }

        for(int j = i; j >= 1; j--)
        {
            cout << j;
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