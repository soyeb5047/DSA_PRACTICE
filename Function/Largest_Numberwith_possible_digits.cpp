
/*
largest no with possoble digits =>
	input ->  no of digits = 4
		sum = 30
	output -> largest number = 9993
*/
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;
    
    int i = 9, k = 0;
    int a[n] = {0};
    
    while(sum >= i)
    {
        
            sum -= i;
            
            a[k++] = i;
        
        
    }
    if(sum < i)
        a[k++] = sum;
    
    if(k > n)
    {
        cout << "-1\n";
    }
    else
    {
    
        for(int i = 0; i < n; i++)
        {
            cout << a[i];
        }
    
    }
    
}