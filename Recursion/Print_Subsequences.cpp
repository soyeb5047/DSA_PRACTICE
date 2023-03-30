/*
arr = {3 1 2}
subsequences : 
3 2 1
3 1
3 2
3 
1 2
1
2
{}
*/
#include<iostream>
#include<vector>
using namespace std;

void printSubsequence(int ind, vector<int> &v, int *a, int n)
{
    if(ind == n)
    {
        for(auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }

        // also empty array is a subsequence
        if(v.size() == 0)
        {
            cout << "{}" << " ";
        }
        cout << endl;
        return;
    }

    v.push_back(a[ind]);

    // pick the elememt as subsequences
    printSubsequence(ind + 1, v, a, n);

    v.pop_back();
    
    // not pick the element as subsequences
    printSubsequence(ind + 1, v, a, n);
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    int a[n];
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> v;
    int index = 0;

    printSubsequence(index, v, a, n);
}