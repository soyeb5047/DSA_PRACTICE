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
    cout << "Enter the number of row to get this diamond shape : ";
    cin >> n;

    for(int i = 1; i <= 2 * n - 1; i++)     // if n = 4 then row is 7 formula 2 * 4 - 1
    {
        int colNo = (i > n) ? (2 * n - i) : i;

        // now for space
        /*
        for row 1, n = 4 there has space 3, has col 1  -------->> formula for space n - col
        for row 2, n = 4 there has space 2 , has col 2
        for row 3, n = 4 there has space 1 , has col 3
        for row 4, n = 4 there has space 0, has col 4
        for row 5, n = 4 there has space 1, has col 3
        for row 6, n = 4 there has space 2, has col 2
        for row 7, n = 4 there has space 3, has col 1
        */

       for(int space = 1; space <= n - colNo; space++)
       {
        cout << " ";
       }

        for(int j = 1; j <= colNo; j++)     // if row no 7 it is also greater than 4 and there has 1 star so formula is 2 * 4 - 7
        {
            cout << "* ";
        } 
        cout << endl;
    }
}