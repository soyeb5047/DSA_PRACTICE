#include<bits/stdc++.h>
using namespace std;

int Index(vector<int> a, int key)
{
    // for(int i =0; i < a.size(); i++)
    // {
    //     if(a[i] >= key)
    //     {
    //         return i;
    //     }
    // }
    // return a.size();

    // using lower bound
    int s= 0, e = a.size() - 1, pos = a.size();
    while(s <= e)
    {
        int mid = (s + e) / 2;

        if(a[mid] >= key)
        {
            pos = mid;
            e = mid - 1;
        }
        else if(a[mid] < key)
            s = mid + 1;
    }
    return pos;

}

int main()
{
    vector<int> v;

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int key;
    cout << "Enter the element: ";
    cin >> key;

    cout << "The position is : " << Index(v, key);
}