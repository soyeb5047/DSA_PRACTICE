#include <iostream>
using namespace std;

void preSum(int *a, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        a[i] = sum;
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    preSum(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}