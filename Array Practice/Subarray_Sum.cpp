// firstly we need to find the all the subarray
// then find the maximum subarray sum

#include <bits/stdc++.h>
using namespace std;

int KadanseAlgorithm(int *a, int n)
{
    // O(n) time complexity
    int sum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        // 1. update sum
        sum += a[i];

        // 2. compare with max sum
        maxSum = max(maxSum, sum);

        // 3. if sum is negative then sum is set to 0
        sum = sum < 0 ? 0 : sum;
    }
    return maxSum;
}

int prefixSum(int *a, int n)
{
    int pre[n];
    pre[0] = a[0];

    for(int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum = i < 0 ? pre[j] : pre[j] - pre[i - 1];
            
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int maxsum(int *a, int n)
{
    int sum = 0, maxSum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            // for the third loop i, j configaration means -> subarray
            sum = 0;
            for(int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            
            if(sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    return maxSum;
}

void subarray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            // for the third loop i, j configaration means -> subarray
            for(int k = i; k <= j; k++)
            {
                cout << a[k] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // subarray(a, n);

    // cout << "The maximum subarray sum is : " << maxsum(a, n) << endl;

    // using prefixSum method
    // cout << "The maximum subarray sum is : " << prefixSum(a, n) << endl; 

    // using kadanse algorithm
    cout << KadanseAlgorithm(a, n) << endl;
}