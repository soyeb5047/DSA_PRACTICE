#include<iostream>
#include<vector>
using namespace std;

int difference(vector<int> a)
{
    int E_sum=0,O_sum=0;

    for(int i=0; i<a.size(); i++)
    {
        if(i%2 == 0)
        {
            E_sum += a[i];
        }
        else{
            O_sum += a[i];
        }
    }
    return (E_sum - O_sum);
}

int main()
{
    int n;
    cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << difference(a);

}