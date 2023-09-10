/*
1. it also works on the sorted array
2. lower_bound function also returns an iterator which point on the same value at the lower index or ( if this key is not exists )just greater than this value
*/

#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &v, int n)
{
    // using naive / brute force approach
    // for(int i = 0; i < v.size(); i++)
    // {
    //     if(v.at(i) >= n)
    //         return i;
    // }
    // return v.size();


    // using binary search
    int s = 0, e = v.size() - 1;
    int ans = v.size();
    while(s < e)
    {
        int mid = (s + e) / 2;

        if(v[mid] >= n)
        {
            ans = mid;
            e = mid - 1;
        }
        else if(v[mid] < n)
        {
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> v{1, 2, 5, 6, 8, 9};
    
    int key = 4;
    
    // using inbuilt function
    
    // vector<int>:: iterator it = lower_bound(v.begin(), v.end(), key);
    // cout << "Value : " << *it << " " << "Position : " << it - v.begin() << endl;
    
    // int key1 =  10;
    // if the key is greater than all of values in array then it gives the position of the key is equal to size
    // vector<int>:: iterator it1 = lower_bound(v.begin(), v.end(), key1);
    // cout << "Value : " << *it1 << " " << "Position : " << it1 - v.begin() << endl;

    cout << lowerBound(v, key) << endl;
}