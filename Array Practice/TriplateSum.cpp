#include <iostream>
using namespace std;

int tripleSum(int *a,int n,int tar)
{
    int count = 0;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                if(a[i] + a[j] + a[k] == tar)
                {
                    count++;

                }
            }
        }
    }
    return count;
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

    int target;
    cin >> target;

    cout << tripleSum(a,n,target);
}