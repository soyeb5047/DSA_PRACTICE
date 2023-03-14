/*
arr[] = [2, 3, 5, 7, 4]
    -> [-1, -2, -2, 3]
    -> [1, 0, -5]
    -> [1, 5]
    -> [-4]
    ans : -4
*/

#include<bits/stdc++.h>
using namespace std;

int substract(int *a, int n)
{
    if(n == 1)
    {
        return a[0];
    }

    for(int i = 0; i < n - 1; i++)
    {
        a[i] = a[i] - a[i + 1];
    }

    substract(a, n - 1);
}

/*
int substract(int *a, int n)
{
    while(n > 0)
    {
        for(int i = 0; i < n - 1; i++)  // O(n^2)
        {
            a[i] = a[i] - a[i+1];
        }
        n--;
    }
    return a[0];
}
*/

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i <  n; i++)
    {
        cin >> a[i];
    }

    cout << substract(a,n);
}