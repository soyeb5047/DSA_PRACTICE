#include<bits/stdc++.h>
using namespace std;

vector<int> greaterNext(int *a, int n)
{
    vector<int> v;
    stack<int> st;

    // at the first we do the brute force approach
    // time complexity - O(n^2)
    // int greater;
    // for(int i = 0; i < n; i++)
    // {
    //     greater = -1;
    //     for(int j = i + 1; j < n; j++)
    //     {
    //         if(a[i] < a[j])
    //         {
    //             greater = a[j];
    //             break;
    //         }
    //     }

    //     v.push_back(greater);

    // }

    // time complexity - O(n)
    for(int i = n - 1; i >= 0; i--)
    {
        while(!st.empty() && a[i] > st.top())
        {
            st.pop();
        }
        if(st.size() == 0)
        {
            v.push_back(-1);
        }
        else
        {
            v.push_back(st.top());
        }
        st.push(a[i]);
    }

    reverse(v.begin(), v.end());
    return v;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter the array element : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<int> v = greaterNext(a, n);

    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}