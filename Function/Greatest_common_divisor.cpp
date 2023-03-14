#include<bits/stdc++.h>
using namespace std;

int gcd(int n, int m)
{
    while(n != m)
    {
        if(n < m)
        {
            m -= n;
        }
        if(m < n)
        {
            n -= m;
        }
    }
    return n;
}

/*
// using recursion
// Euclidean Algorithm 
int gcd(int n, int m)
{
    if(n ==0 )
    {
        return m;
    }
    if(m == 0)
    {
        return n;
    }
    return gcd(m, n % m);
}
*/

/*
int gcd(int n, int m)
{
    int x = min(n ,m);
    while(x > 0)
    {
        if(n % x == 0 && m % x == 0)
        {
            // return x;
            break;
        }
        x--;
    }
    return x;
}
*/

int main()
{
    int n, m;
    cout << "Enter two Numbers : ";
    cin >> n >> m;

    cout << gcd(n, m);
}