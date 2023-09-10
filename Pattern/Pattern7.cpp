/*
Diamond Star Pattern

Input Format: N = 6
Result:   
     *
    ***
   ***** 
  *******
 *********
***********  
***********
 *********
  *******
   ***** 
    ***    
     *

*/
#include <bits/stdc++.h>
using namespace std;

void pattern5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // for first space
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for *
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        // for space 
        for(int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // for first space
        for(int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        // for *
        for (int j = 1; j <= 2 * n - 2  * i + 1; j++)
        {
            cout << "*";
        }
        // for space 
        for(int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}


int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;

    pattern5(n);
    pattern6(n);
}