#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> a, int key)
{
    int s = 0;
    int e = a.size() - 1;
    int count = 0;

    while (s <= e)
    {
        if (a[s] + a[e] == key)
        {
            return 1;
        }
        else if (a[s] + a[e] > key)
        {
            e--;
        }
        else if (a[s] + a[e] < key)
        {
            s++;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cin >> key;

    if (sum(a, key))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}