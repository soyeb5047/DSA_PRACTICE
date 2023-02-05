/*
Given a stack of integers and Q queries. The task is to perform the operation on stack according to the query.

The queries can be of 4 types:

i x: (adds element x in the stack).

r: (removes the topmost element from the stack).

h: Prints the topmost element.

f y: (check if the element y is present or not in the stack). Print "Yes" if present, else "No".
 

Example 1:

Input: 
1
6 
I 2
I 4
i 3
I 5
H
f, 8

Output: 
5
No
Explanation: 
Inserting 2, 4, 3, and 5  onto the stack. Returning top element which is 5. Finding 8 will give No, 
as 8 is not in the stack.

*/

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void mypush(stack<int>st, int x)
{
    st.push(x);

}

void mypop(stack<int>st)
{
    st.pop();
}

void topele(stack<int>st)
{
    int x = st.top();
    cout << x << endl;
}

int find(stack<int>st,int x)
{
    int flag = 0;

    while(!st.empty())
    {
        int val = st.top();
        st.pop();
        if(val == x)
            flag = 1;
    }

    if(flag == 1)
        return 1;
    else
        return 0;
}

int main()
{
    int t;
    cout << "Enter the test cases : ";
    cin >> t;
    while(t--)
    {
        int n;
        cout << "Enter the query number : ";
        cin >> n;

        stack<int>st;

        for(int i=1; i<=n; i++)
        {
            char q;
            cout << "Enter the query : ";
            cin >> q;

            if(q == 'i')
            {
                int x;
                cout << "Enter a number : ";
                cin >> x;

                mypush(st,x);
            }
            else if(q == 'r')
            {
                mypop(st);
            }
            else if(q == 'h')
            {
                cout << "The top most element in Stack is : " ;
                 topele(st);
            }
            else if(q == 'f')
            {
                int x;
                cout << "Enter a number which you want to find : ";
                cin >> x;

                if(find(st,x))
                {
                    cout << "Yes \n";
                }
                else
                {
                    cout << "No\n";
                }
            }
        }
    }
}