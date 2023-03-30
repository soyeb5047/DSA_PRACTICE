/*
Input: N = 5, K = 1
Output: 4
5 is represented as 101 in binary
and has its first bit 1, so clearing
it will result in 100 i.e. 4.

*/

#include<bits/stdc++.h>
using namespace std;

int clearBit(int n, int k)
{
    // clear the bit means if the bit is 1 set it 0 but no any bit remains unchanged without this bit
    // we shift the bit and take it's complement and perform and operation with this number
    return n & (~(1 << (k - 1)));
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int k;
    cout << "Enter the position : ";
    cin >> k;

    cout << "The number is : " << clearBit(n, k) << endl;
}