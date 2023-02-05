#include<iostream>
#include<vector>
using namespace std;

int count_Occu(vector<int> x, int ele)
{
    vector<int>::iterator it;
    int count=0;

    for(it = x.begin(); it!=x.end(); it++)
    {
        if(*it == ele)
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

    cout << count_Occu(v,ele);

}