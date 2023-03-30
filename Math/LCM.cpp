#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int  b)
{
    if(a == 0)
        return b;

    if(b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    int x = gcd(a, b);

    return (a * b) / x;
}

int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    cout << "The LCM of two number is : " << lcm(a, b) << endl;
}