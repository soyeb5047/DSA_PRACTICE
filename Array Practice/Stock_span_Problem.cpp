#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    // int count = 0;
    
    for(int i = 0; i < n; i++)
    {
        // int x = i;
        int count = 0;
        int temp = a[i];
        
        for(int x = i; x >= 0; x--)
        {
            // count++;
            if(temp > a[x])
            {
                count++;
            }
            if(x == i )
            {
                count++;
            }
        }
        
        cout << count << " ";
    }
}
