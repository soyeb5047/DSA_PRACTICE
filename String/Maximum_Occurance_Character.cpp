/*
input : 
test
output :
t beacuse t have his occurance 2 times
*/

#include<bits/stdc++.h>
using namespace std;

char occu(string str)
{
    int a[26] = {0};
    for(int i = 0; i < str.length(); i++)
    {
        int index = str[i] - 'a';
        a[index] = a[index] + 1;
    }

    int max = a[0];
    int index;

    for(int i = 0; i < 26; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            index = i;
        }
    }

    char x = index + 'a';

    return x;
}

int main()
{
    string str;
    cin >> str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << occu(str) << endl;
}