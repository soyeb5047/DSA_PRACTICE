#include<bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if(b == 0) return 1;
    
    return a * power(a, --b);
}

int main()
{
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    
    cout << "The power of " << a << " is : " << power(a, b);   
}