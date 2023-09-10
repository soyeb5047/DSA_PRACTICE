/*
Alpha-Triangle Pattern

Input Format: N = 6
Result:   
F
E F
D E F
C D E F
B C D E F
A B C D E F

*/
#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        
            for(int j = 1; j <= i; j++)
            {
                cout << (char)(65 + n - j) << " ";
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