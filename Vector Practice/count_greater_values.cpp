#include<iostream>
#include<vector>
using namespace std;

int Count(vector<int> a, int v)
{
    int count = 0;

    for(int i=0; i<a.size(); i++)
    {
        if(a[i] > v)
        {
            count++;
        }
    }
    return count;
}


int main()
{
    int n;
    cin>> n;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    int ele;
    cin>>ele;

    cout << Count(v,ele);


}