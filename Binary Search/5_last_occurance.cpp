#include<bits/stdc++.h>
using namespace std;

int occurance(vector<int> &a, int key)
{
    // using linear search
    // int pos = -1;
    // for(int i = 0; i < a.size(); i++)
    // {
    //     if(a[i] == key)
    //     {
    //         pos = i;
    //     }
    // }
    // return pos;
    
    // using binary search
    int s = 0, e = a.size() - 1, pos = -1;
    while(s <= e)
    {
        int mid = (s + e) / 2;
        if(a[mid] == key)
        {
            pos = mid;
            s = mid + 1;
        }
        else if(a[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        
    }
    return pos;
}

int main()
{
    int n; 
    cout << "Enter the size of the array : ";
    cin >> n;
    
    
    vector<int> a;
    
    cout << "Enter the value of array : ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    int key;
    cout << "Enter the key : ";
    cin >> key;
    
    cout << "Last occurance is : " << occurance(a, key);
}