#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "Enter the position in which position's number you want : ";
    cin >> n;

    cout << "The number is : " << fib(n) << endl;
}