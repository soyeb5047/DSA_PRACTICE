/*
1. Floor value is the largest value in array which is smaller than key
    -> we do this using just reverse of the lower bound approach

2. Ceil value is the smaller value in array which is greater than key
    -> we do this using lower bound approach

Example 1:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5
Result: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

Example 2:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 8
Result: 8 8
Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.

*/

#include<bits/stdc++.h>
using namespace std;

int Floor(vector<int> &a, int key)
{
    int s = 0, e = a.size() - 1, pos = -1;

    while(s <= e)
    {
        int mid = (s + e) / 2;

        if(a[mid] <= key)
        {
            pos = a[mid];
            s = mid + 1;
        }
        else
            e = mid - 1;
    }
    return pos;
}

int Ceil(vector<int> &a, int key)
{
    int s = 0, e = a.size() - 1, pos = -1;

    while(s <= e)
    {
        int mid = (s + e) / 2;

        if(a[mid] >= key)
        {
            pos = a[mid];
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return pos;
}

pair<int, int> CeilFloor(vector<int> &a, int key)
{
    pair<int, int> p;

    p.first = Floor(a, key);
    p.second = Ceil(a, key);
    return p;
}

int main()
{
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    vector<int> a;

    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }

    int key;
    cout << "Enter the key value : ";
    cin >> key;

    pair<int, int> p = CeilFloor(a, key);

    cout << "The Floor value is : " << p.first << " and the ceil value is : " << p.second << endl;
}

