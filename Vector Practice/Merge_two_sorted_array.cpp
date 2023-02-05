#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> a, vector<int> s)
{
    vector<int> q(a.size() + s.size());
    int k = 0, i = 0, j = 0;

    while (i < a.size() && j < s.size())
    {
        if (a[i] > s[j])
        {
            q[k++] = s[j++];
        }

        else if (a[i] < s[j])
        {
            q[k++] = a[i++];
        }

        else if (a[i] == s[j])
        {
            q[k++] = s[j++];
            i++;
        }
    }

    while (i < a.size())
    {
        q[k++] = a[i++];
    }
    while (j < s.size())
    {
        q[k++] = s[j++];
    }

    return q;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> s(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    vector<int> c = merge(a, s);

    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
}