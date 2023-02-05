/*
You are given an array arr of size N. You need to push the elements of the array into a stack and then print them while popping.

Input:
1
5
1 2 3 4 5
Output:
1
5
5 4 3 2 1

*/


#include <iostream>
#include<vector>
#include<stack>
using namespace std;

void print(vector<int> a,stack<int> st)
{
    for(int i=0; i<a.size(); i++)
    {
        st.push(a[i]);
    }

    while(!st.empty())
    {
        int x = st.top();
        cout << x << " ";
        st.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {

    int n;
    cin >> n;

    vector<int>a(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    stack<int> st;

    print(a,st);
    
    }

}