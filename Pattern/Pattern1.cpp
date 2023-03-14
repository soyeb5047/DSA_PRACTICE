/*
n = 4
ans : 

*
* *
* * *
* * * *
* * *
* *
*

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= 2 * n - 1; i++)         // if n = 4 so row no 7 the formula is 2 * 4 - 1
    {
        int colNo = (n < i) ? 2 * n - i : i ;       // if row no 7 it is also greater than 4 and there has 1 star so formula is 2 * 4 - 7

        for(int j = 1; j <= colNo; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}