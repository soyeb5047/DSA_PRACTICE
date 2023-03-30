#include<bits/stdc++.h>
using namespace std;

bool isSet(int n, int k)
{
    // if any bit is 1 so 1 & 1 = 1 it means set and any bit is 0 so, 0 & 1 = 0 it means not set
    // that's why we shift the 1 to it corresponding position and perform and operation with n
    return n & (1 << (k - 1));

}

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int k;
    cout << "Enter the pos : ";
    cin >> k;

    if(isSet(n, k))
        cout << k << "th bit is set.\n";
    else
        cout << k << "th bit is not set.\n";
}