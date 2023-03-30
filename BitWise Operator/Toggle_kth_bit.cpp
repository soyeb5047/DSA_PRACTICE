/*
Input : n = 5, k = 1
Output : 4
5 is represented as 101 in binary
and has its first bit 1, so toggling 
it will result in 100 i.e. 4.
*/

#include<bits/stdc++.h>
using namespace std;

int toggle(int n, int k)
{
    // toggle means complement of this bit
    return n ^ (1 << (k - 1));
}

int main()
{
    int n;
    cout << "Enter the number  : ";
    cin >> n;

    int k;
    cout << "Enter the position : ";
    cin >> k;

    cout << "The number is : " << toggle(n, k) << endl;
}