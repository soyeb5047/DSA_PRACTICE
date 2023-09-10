#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &a, int key)
{
    int s = 0, e = a.size() - 1;
    
    while(s <= e)
    {
        int mid = (s + e) / 2;
        
        if(a[mid] == key) return mid;
        
        // left part is sorted
        else if(a[s] <= a[mid])
        {
            // if the key exists between s, mid then we shift the end
            if(a[s] <= key && key <= a[mid])
                e = mid - 1;
                
            else
                s = mid + 1;
        }
        
        // right part is sorted
        else
        {
            // if the key exists between mid and end then we shift start
            if(a[mid] <= key && key <= a[e])
                s = mid + 1;
                
            else
                e = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> a;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    int key;
    cin >> key;
    
    cout << search(a, key);
    
    // using find function
    // vector<int> ::iterator it = find(a.begin(), a.end(), key);
    
    // if(it == a.end()) cout << -1 << endl;
    // else
    // cout << it - a.begin() << endl;
    
    
}