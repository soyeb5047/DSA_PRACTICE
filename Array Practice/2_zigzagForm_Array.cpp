/*
arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n]. 

Example 1:
Input:
N = 7
Arr[] = {4, 3, 7, 8, 6, 2, 1}
Output: 3 7 4 8 2 6 1
Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1

Example 2:
Input:
N = 4
Arr[] = {1, 4, 3, 2}
Output: 1 4 2 3
Explanation: 1 < 4 > 2 < 3

algorithm:
if(flag == true) check < condition
    if it is not satisfies swap those numbers
if(flag == false) check > condition
    if it is not satisfies swap those numbers
*/

#include<bits/stdc++.h>
using namespace std;

void ZigZag(vector<int>&a, int n)
{
    bool flag = true;
    for(int i = 0; i < n - 1; i++)
    {
        if(flag == true)
        {
            if(a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
            }
        }else
        {
            if(a[i] < a[i + 1])
            {
                swap(a[i], a[i + 1]);
            }
        }

        flag = !flag;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    vector<int> a;
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    ZigZag(a, n);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }cout << endl;
}