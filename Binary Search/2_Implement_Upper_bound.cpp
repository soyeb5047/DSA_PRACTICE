/*
1. it also returns an iterator which points greater than the value otherwise it return the size of the array
2. in this array must be sorted or partitioned
*/
#include<bits/stdc++.h>
using namespace std;

int UpperBound(vector<int> &a, int key)
{
    // using linear serach
    // for(int i = 0; i < a.size(); i++)
    // {
    //     if(a[i] > key)
    //         return i;
    // }
    // return a.size();



    // using binary search
    int s = 0, e = a.size() - 1, pos = a.size();
    while(s < e)
    {
        int mid = (s + e) / 2;

        if(a[mid] > key)
        {
            pos = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return pos;

}

int main()
{
    vector<int> a{10, 20, 20, 30, 60};
    int key = 60;

    // using in built function
    // vector<int> ::iterator it = upper_bound(a.begin(), a.end(), key);
    // cout << "value: " << *it << " " << "position : " << it - a.begin() << endl; 

    cout << "Upper Bound is : " << UpperBound(a, key);
}