/*
set means if the position bit is 0 then we set it to 1
it means we perform or operation here

*/

#include<bits/stdc++.h>
using namespace std;

void SetBit(int &n, int k)
{
    // we shift 1 to this position and perform or operation
    n = n | (1 << (k - 1));

}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    int k;
    cout << "Enter the position to set the bit : ";
    cin >> k;

    SetBit(n, k);

    cout << "Now the number is : " << n;
}