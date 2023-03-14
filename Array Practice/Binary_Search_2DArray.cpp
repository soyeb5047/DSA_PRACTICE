/*
input : 
1 2 3 4
5 6 7 8
9 10 11 12

element = 3;

this array in linear form ->
1 2 3 4  5 6 7 8  9 10 11 12

we firstly find the mid -> 
    so the row index of mid element -> mid_Index / col_Number
    so the col index of mid element -> mid_Index % col_Number

*/


#include<bits/stdc++.h>
using namespace std;

#define size 6

int Binary(int a[size][size], int m, int n, int k)
{
    int start = 0;
    int end = m * n - 1;
    while(start < end)
    {
        int mid = (start + end) / 2;
        int element = a[mid / n][mid % n];

        if(element == k)
        {
            // if we find the element
            return 1;
        }
        else if(element > k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    // if we dont find the element
    return 0;
}

int main()
{
    int m, n;
    cout << "Enter the row number : ";
    cin >> m;

    cout << "Enter the col number : ";
    cin >> n;

    int a[size][size];

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int ele;
    cout << "Enter the number which you want to search in 2D Array : ";
    cin >> ele;

    if(Binary(a, m, n, ele))
        cout << "this element is present in this 2D Array\n";
    else
        cout << "The element is not present in this 2D Array\n";
}