/*
Input:  12 (00...01100)
Output: 8 (00...01000)

input : 6
it means the binary form is 110 
right most 1 bit toggle means 100
output : 4
*/

#include<bits/stdc++.h>
using namespace std;

int toggleRight(int n)
{
    int x = n - 1;

    return n  & x;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    cout << "The number after toggling right most one bit is : " << toggleRight(n) << endl;
}