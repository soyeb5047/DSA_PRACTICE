#include<bits/stdc++.h>
using namespace std;

vector<int> factor1(int n)
{
    vector<int> v;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            v.push_back(i);

            if(n % i != i)
            {
                v.push_back(n / i);
            }
        }
    }

    sort(v.begin(), v.end());
    return v;
}

void factors(int n)
{
    for(int i = 2; i <= n / 2; i++ )
    {
        if(n % i == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    factors(n);

    // using sqrt method
    vector<int> v = factor1(n);

    for(auto i = v.begin(); i < v.end(); i++)
    {
        cout << *i <<  " ";
    }
}