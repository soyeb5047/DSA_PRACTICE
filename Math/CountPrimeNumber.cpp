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
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// // O(n^2) approach
// int countPrime(int n)
// {
//     int count = 0;
//     for(int i = 2; i < n; i++)
//     {
//         if(isPrime(i))
//             count++;
//     }

//     return count;
// }

// Sieve of Eratosthenes approach
// time complexity O(n * log(log n))
int countPrime(int n)
{
    int count = 0;

    // make an array of n + 1 size and make them all true means they are all prime number
    vector<bool> v(n + 1, true);

    // 0 and 1 is not a prime number so that make them false
    v[0] = v[1] = 0;

    for(int i = 2; i < n; i++)
    {
        // if v[i] == 1 them count++
        if(v[i])
        {
            count++;

            // the numbers which is multiplied by v[i] make them all false
            for(int j = i * 2; j < n; j += i)
            {
                v[j] = 0;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the last number : ";
    cin >> n;

    cout << "Total prime number in between the last number is : " << countPrime(n);

}