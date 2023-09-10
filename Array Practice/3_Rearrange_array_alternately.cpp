/*
Given a sorted array of positive integers. Your task is to rearrange the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
Note: Modify the original array itself. Do it without using any extra space. You do not have to return anything.

Example 1:
Input:
n = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.


Example 2:
Input:
n = 11
arr[]={10,20,30,40,50,60,70,80,90,100,110}
Output:110 10 100 20 90 30 80 40 70 50 60
Explanation: Max element = 110, min = 10, 
second max = 100, second min = 20, and 
so on... Modified array is : 
110 10 100 20 90 30 80 40 70 50 60.

company --> zoho

algo:
    if even index = a[i] = (a[k] % key) * key + a[i];
    else a[i] = (a[j] % key) * key + a[i];
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size : ";
    cin >> n;

    int a[n];
    cout << "Enteer the array elements : ";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key = a[n - 1] + 1;
    int j = 0, k = n - 1;

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            a[i] = (a[k] % key) * key + a[i];
            k--;
        }
        else{
            a[i] = (a[j] % key) * key + a[i];
            j++;
        }
    }

    for(int i= 0; i < n; i++)
    {
        a[i] /= key;
        cout << a[i] << " ";
    }cout <<  endl;
}
