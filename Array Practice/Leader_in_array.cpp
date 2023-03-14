/*
Adobe question

input : 
16 17 4 3 5 2

output : 
17 5 2

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> leader(vector<int> a, int n)
{
      vector<int> arr;
        for(int i = n - 1; i >= 0; i--)
        {
            if(i == n - 1)
            {
                arr.push_back(a[i]);
                
            }
            
            else
            {
                if(a[i] >= arr[arr.size() - 1])
                {
                    arr.push_back(a[i]);
                }
            }
        }
        
        reverse(arr.begin(),arr.end());
        return arr;
}

int main()
{
    // int n = 6;
    // cin >> n;

    vector<int> a = {16, 17, 4, 3, 5, 2};
    // for(int i = 0; i < n; i++)
    // {
    //     cin >> a[i];

    // }
    
    int n = a.size();

    vector<int> v = leader(a,n);

    for(auto i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

}