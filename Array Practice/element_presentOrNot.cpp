#include<iostream>
using namespace std;

bool isPreasent(int *a, int n, int ele)
{
    for(int i=0; i<n; i++)
    {
        if(a[i] == ele)
        {
            return true;
            break;
        }
    }
    return false;
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

    int value;
    cin >> value;

    cout << isPreasent(a,n,value);
}