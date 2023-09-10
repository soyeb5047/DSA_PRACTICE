/*
Increasing Number Triangle Pattern
input:3
1
2 3
4 5 6
*/
#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            count++;
            cout << count << " ";
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