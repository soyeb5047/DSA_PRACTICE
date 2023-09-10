#include<iostream>
#include<string>
using namespace std;

// void say(int *a, int n, int &sum)
// {
//     if(n == 0) return;
    
//     sum += a[0];
    
//     say(a + 1, n - 1, sum);
// }

int say(int *a, int n)
{
    static int sum = 0;

    if(n == 0) return sum;

    sum += a[n - 1];
    say(a, n - 1);
    // sum += a[n - 1];

    return sum;
}

int main()
{
    int a[] = {2, 8, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    
    // int sum = 0;
    
    //  say(a, n, sum);
    //  cout << sum;

    cout << say(a, n);
}
