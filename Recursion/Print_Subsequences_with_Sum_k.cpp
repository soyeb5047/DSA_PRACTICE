/*
arr = {1 2 1}
output:
1 1 => 2
2 => 2
*/

#include<bits/stdc++.h>
using namespace std;

// print all subsequences
// void print(int ind, vector<int> &v, int *a, int n, int k, int sum)
// {
//     if(ind == n)
//     {
//         if(sum == k)
//         {
//             for(auto it  = v.begin(); it != v.end(); it++)
//             {
//                 cout << *it << " ";
//             }
//             cout << endl;
//         }
//         return;
//     }

//     // pick the element and update the sum
//     v.push_back(a[ind]);
//     sum += a[ind];

//     print(ind + 1, v, a, n, k, sum);

//     // not pick the element and update the sum
//     v.pop_back();
//     sum -= a[ind];

//     print(ind + 1, v, a, n, k, sum);
// }

// if it says print only one subsequences
// bool print(int ind, vector<int> &v, int *a, int n, int k, int sum)
// {
//     if(ind == n)
//     {
//         if(sum == k)
//         {
//             for(auto it  = v.begin(); it != v.end(); it++)
//             {
//                 cout << *it << " ";
//             }
//             cout << endl;
//             return true;
//         }
//         else
//             return false;
//     }

//     // pick the element and update the sum
//     v.push_back(a[ind]);
//     sum += a[ind];

//     if(print(ind + 1, v, a, n, k, sum))
//     {
//         return true;
//     }

//     // not pick the element and update the sum
//     sum -= a[ind];
//     v.pop_back();
    

//     if(print(ind + 1, v, a, n, k, sum) == true)
//     {
//         return true;
//     }

//     return false;
// }

// if it says return total count of the subsequences
int print(int ind, vector<int> &v, int *a, int n, int k, int sum)
{
    if(sum > k) return 0;
    
    if(ind == n)
    {
        if(sum == k)
        {
            return 1;
        }
        else
            return 0;
    }

    // pick the element and update the sum
    v.push_back(a[ind]);
    sum += a[ind];

    int l = (print(ind + 1, v, a, n, k, sum));
    

    // not pick the element and update the sum
    sum -= a[ind];
    v.pop_back();
    

    int r = (print(ind + 1, v, a, n, k, sum));
    

    return l + r;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int a[n];
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];


    int total;
    cout << "Enter the sum : ";
    cin >> total;

    int index = 0;
    vector<int> v;
    int sum = 0;

    // print(index, v, a, n, total, sum);
    cout << "Total subsequences are : " << print(index, v, a, n, total, sum) << endl;
}