#include<bits/stdc++.h>
using namespace std;

// int isPrime(int n)
// {
//     if(n <= 1)
//     {
//         return 0;
//     }

//     for(int i = 2; i < n; i++)
//     {
//         if(n % i == 0)
//             return 0;
//     }
//     return 1;
// }

// // O(n^2) approach
// void primes(int n)
// {
//     for(int i = 2; i < n; i++)
//     {
//         if(isPrime(i))
//             cout << i << " ";
//     }
//     cout << endl;
// }

// here we use seive of Eratosthenes 
// this approach is also called as segmented seive
void primes(int n)
{
    // same as countPrimeNumbers
    vector<bool> v(n + 1, true);

    v[0] = v[1] = false;

    for(int i = 2; i < n; i++)
    {
        if(v[i])
        {
            for(int j = 2 * i; j < n; j += i)
            {
                v[j] = false;
            }
        }
    }

    // check the prime indexes
    for(int i = 0; i < v.size() - 1; i++)
    {
        if(v[i])
            cout << i << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number where you find the prime numbers : ";
    cin >> n;

    primes(n);
}