#include<bits/stdc++.h>
using namespace std;

int gcd(int m, int n)
{
    if(m == 0)
    {
        return n;

    }
    else if(n == 0)
    {
        return m;
    }
    return gcd(n, m%n); // it returns greatest common divisor between two numbers
}

void divisor(int m, int n)
{
    int count = 0;

    // for(int i = 1; i <= min(m,n); i++)       it takes more time 
    // {
    //     if(m % i == 0 && n % i == 0)
    //     {
    //         count++;
    //         cout << i << " ";
    //     }
    // }
    // cout << endl << count;

    int x = gcd(m, n);

    for(int i = 1; i <= x; i++)      // it is more optimal sol of it 
    {
        if(m % i == 0 && n % i == 0)
        {
            count++;
            cout << i << " ";
        }
    }
    cout << endl << count;
}

int main()
{
    int m, n;
    cout << "Enter the two Numbers : ";
    cin >> m >> n;

    divisor(m,n);

}