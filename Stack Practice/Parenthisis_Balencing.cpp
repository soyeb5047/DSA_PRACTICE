/*

Parenthesis Checker(Easy)

Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.




Input:
{([])}
Output: 
true
Explanation: 
{ ( [ ] ) }. Same colored brackets can form  balaced pairs, with 0 number of  unbalanced bracket.


*/

#include<bits/stdc++.h>
using namespace std;

int checker(char a,char b)
{
    if(a == '(' && b == ')')
    {
        return 1;
    }
    else if(a == '{' && b == '}')
    {
        return 1;
    }
    else if(a == '[' && b == ']')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int balencing(string str)
{
    stack<int>st;

    for(int i=0; i<str.length(); i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            st.push(str[i]);
        }
        else
        {
            if(st.empty())
            {
                return 0;
            }
            else
            {
            char temp = st.top();
            st.pop();

            if(!checker(temp,str[i]))
            {
                return 0;
            }
            }
        }
    }

    if(st.empty())
        return 1;
    else
        return 0;
}

int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;

    if(balencing(str))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}