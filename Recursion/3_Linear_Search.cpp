#include<iostream>
#include<string>
using namespace std;

// if says first position
// int LinearSearch(int *a, int n, int x)
// {
//     static int i = 0;
//     if(i == n) return -1;
    
//     if(a[i] == x) return i; i++;
    
//     return LinearSearch(a, n, x);
// }

// if says last position
int LinearSearch(int a[], int n, int x)
{
    if(n == 0) return -1;

    if(a[n - 1] == x) return n - 1;

    return LinearSearch(a, n - 1, x);
}

int main()
{
    int a[] = {2, 8, 4, 5, 8};
    int n = sizeof(a) / sizeof(a[0]);
    
    int x = 10;
    
    cout << LinearSearch(a, n, x);
    
    
}
