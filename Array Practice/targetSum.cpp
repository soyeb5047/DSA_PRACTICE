#include<iostream>
using namespace std;

int count(int *a,int n,int tar)
{
    int count = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] + a[j] == tar)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin>> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int target;
    cin >> target;

    cout << count(a,n,target);
}