#include <iostream>
using namespace std;

int sum(int *a, int n, int fpos, int lpos)
{
    int sum = 0;

    for (int i = fpos; i <= lpos; i++)
    {
        sum += a[i];
    }
    return sum;
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

    int fpos, lpos;
    cin >> fpos >> lpos;

    cout << sum(a, n, fpos, lpos) << endl;
}
