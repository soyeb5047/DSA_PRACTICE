// Array sum and pair product puzzle star_border

// ans : 
#include<iostream>
#include<algorithm>
using namespace std;

int isHere(int *a,int n, int sum)
{
    sort(a,a+n);
    
    int x = a[n-1] * a[n-2];
    
    if(x >= sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int sum = 0;
    
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    
    sum *= 2;
    
    if(isHere(a,n, sum))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}