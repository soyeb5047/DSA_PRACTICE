/*
arr[] = [1, 3, 5, 7, 6, 4, 2]
    ans -> 4
*/

#include<iostream>
using namespace std;

int pos(int *a, int n)
{
    int pos  = -1;
    
    if(n <= 2)
    {
        return -1;
    }
    
    else
    {
        if(a[0] < a[1])
        {
            for(int i = 2; i < n; i++)
            {
                if(a[i] > a[i+1])
                {
                    pos = i;
                    break;
                }
            }
        }
        
        else
        {
          for(int i = 2; i < n; i++)
            {
                if(a[i] < a[i+1])
                {
                    pos = i;
                    break;
                }
            } 
        }
    }
    
    return pos;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i<n ;i++)
    {
        cin >> a[i];
    }
    // cout << a[0] << " " << a[1];
    cout << pos(a,n);
}

