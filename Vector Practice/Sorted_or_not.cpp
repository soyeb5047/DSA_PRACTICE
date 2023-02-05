#include<iostream>
#include<vector>
using namespace std;

int isSorted(vector<int> a)
{
    for(int i=0; i<a.size(); i++)
    {
        if(a[i] > a[i+1])
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n;i++)
    {
        cin>>v[i];
    }

    int x = isSorted(v);

    if(x == 1)
    {
        cout << "This Array is Sorted!\n";
    }
    else{
        cout << "This Array is Not Sorted!\n";
    }
}