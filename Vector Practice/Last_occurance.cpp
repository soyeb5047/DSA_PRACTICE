#include<iostream>
#include<vector>
using namespace std;

int last(vector<int> v,int key)
{
    int pos = -1;
    for(int i=0; i<v.size(); i++)
    {
        if(v[i] == key)
        {
            pos = i;
        }
    }
    return pos;
}

int main()
{
    int n,key;
    cin >> n >> key;

    vector<int> v(n);

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    cout << last(v,key);

}