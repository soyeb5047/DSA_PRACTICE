#include<iostream>
#include<climits>
using namespace std;

int sLarge(int *a,int n)
{
    int max = INT_MIN;

    for(int i=0; i<n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }

    int smax = INT_MIN;
    int flag = 0;

    for(int i=0; i<n; i++)
    {
        if(smax < a[i] && a[i]!=max)
        {
            smax = a[i];
            flag = 1;
        }
    }

    if(flag == 1)
    {
        return smax;
    }
    else{
        return -1;
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << sLarge(a,n);
}