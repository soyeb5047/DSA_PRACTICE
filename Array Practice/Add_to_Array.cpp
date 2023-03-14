#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std;

vector<int> arrayadd(vector<int> &num, int k)
{
     for(int i=num.size()-1;i>=0;i--){
            num[i] += k;
            k = num[i]/10;
            num[i] %= 10;
        }
        while(k > 0){
            num.insert(num.begin(), k%10);
            k /= 10;
        }
        return num;
}

int main()
{
    
    
    int n;
    cin >> n;
    
    vector<int>a;
    
    for(int i = 0; i < n; i++)
    {
        // cin >> a[i];
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    int k;
    cin >> k;
    
    vector<int> v;
    v = arrayadd(a,k);
    
    
    for(int i = 0;i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
