/*
Increasing Letter Triangle Pattern
Input Format: N = 3
Result: 
A
A B
A B C

*/
#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(65 + j - 1) << " ";
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