#include<bits/stdc++.h>
using namespace std;

int ncr(int n)
{
    if(n == 0)
    {
        return 1;
    }

    return n * ncr(n - 1);
}

void pascalTriangle(int n)
{
    for(int i = 0; i < n; i++)
    {
        int space = n - i - 1;
        while(space--)
        {
            cout << " ";
        }

        // for(int m = 0; m <= n - i - 1; m++)
        // {
        //     cout << "  ";
        // }

        for(int j = 0; j <= i; j++)
        {
            cout << ncr(i) / (ncr(j) * ncr(i - j)) << " ";
        }
        cout << "" <<endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    pascalTriangle(n);
}