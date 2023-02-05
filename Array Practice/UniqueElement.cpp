#include<iostream>
using namespace std;

int unique(int *a,int n)
{
    int element = 0;

    for(int i=0; i<n ;i++)
    {
        element ^= a[i];
    }

    return element;
}

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >>a[i];
    }

    cout << unique(a,n);
}