/*
Removing consecutive duplicates(Easy)

You are given string str. You need to remove the consecutive duplicates from the given string using a Stack.
 

Input: 
aaaaaabaabccccccc

Output: 
ababc

Explanation: 
The order is in the following way 6->a, 1->b, 2->a, 1->b, 7->c. 
So, only one element from each group will remain and rest all are removed.
Therefore, final string will be:- ababc.


*/



#include<bits/stdc++.h>
using namespace std;

void remove(string str)
{
    stack<char>st;
    st.push(str[0]);
    int n = str.length();

    for(int i=1; i<n; i++)
    {
        if(st.top() != str[i])
        {
            st.push(str[i]);
        }
    }

    string s = " ";

    while(!st.empty())
    {
        s += st.top();
        st.pop();
        
    }

    reverse(s.begin(),s.end());
    cout << s << endl;
}

int main()
{
    string str;

    cout << "Enter a string : ";
    cin >> str;

    remove(str);
}