/*
Reverse Array Using Stack(Easy)
You are given an array arr[] of size N, the task is to reverse the array elements in-place by using a stack.

Example 1:

Input: N = 5, arr[] = {1, 2, 3, 4, 5}
Output: 5 4 3 2 1
Explanation: After the reverse, array will 
look like {5, 4, 3, 2, 1}.

*/

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void rev(int *a,int n)
{
    stack<int>st;

    for(int i=0; i<n; i++)
    {
        st.push(a[i]);
    }

    int i = 0;

    while(!st.empty())
    {
        a[i] = st.top();
        st.pop();
        i++;
    }
}

 


int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }


    

    rev(a,n);

    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}