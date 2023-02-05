#include <iostream>
#include <vector>
using namespace std;

/*int Equilibrium(vector<int> a) // equilibrium point is in which point prefix sum and suffix sum must be same
{
    for (int i = 0; i < a.size(); i++)
    {
        int preSum = 0;
        for (int j = 0; j < i; j++)
        {
            preSum += a[j];
        }

        int sufSum = 0;
        for (int k = i + 1; k < a.size(); k++)
        {
            sufSum += a[k];
        }

        if (preSum == sufSum)
        {
            return i;
        }
    }
    return -1;

    
}*/

int Equilibrium(vector<int> a)
{
    int n = a.size();
    int prefix[n];
    prefix[0] = a[0];

    for(int i = 1; i<a.size(); i++)
    {
        prefix[i] = a[i] + prefix[i-1];
    }

    int sum = prefix[n-1];

    for(int i = 0; i < a.size(); i++)
    {
        int leftsum = prefix[i] - a[i];
        int rightsum = sum - prefix[i];

        if(leftsum == rightsum)
        {
            return i;
        }
    }
    return -1;
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

    cout << "The Equilibrium point is : " << Equilibrium(a);
}