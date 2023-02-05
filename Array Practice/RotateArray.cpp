#include<iostream>
using namespace std;

void rotate(int *a, int n, int pos)
{
    pos = pos%n;

    int b[n];
    int k=0;    // k is the index of array b

    for(int i=n-pos; i<n; i++)  // we store array elements after the pos in b array
    {
        b[k++] = a[i];

    }

    for(int i=0; i<=pos; i++)       // we store array elements till the pos in b array
    {
        b[k++] = a[i];
    }

    for(int i=0; i<n; i++)      // we copied array b in array a
    {
        a[i] = b[i];
    }
}

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int pos;        // from where position we rotate our from last
    cin >> pos;

    rotate(a,n,pos);

    for(int i=0; i<n ;i++)
    {
        cout << a[i] << " ";
    }

}