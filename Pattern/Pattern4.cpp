/*

For n = 5 : 
1
212
32123
4321234
543212345

*/

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int temp = i;
        for(int j = 1; j <= i + (i - 1); j++)
        {
            if(j < i)
            {
                // while(temp <= 1)
                cout << temp--;
            }
            if(j == i)
                cout << temp++ ;
            if(j > i)
            {
                cout << temp++ ;
            }
        }
        cout << endl;
    }

    /*
    for(int i = 1; i <= n; i++)
  {
    for(int j = i; j >= 1; j--)
    {
      cout << j ;
    }
    for(int j = 2; j <= i; j++)
    {
      cout << j;
    }
    cout << endl;
  }
    */
}