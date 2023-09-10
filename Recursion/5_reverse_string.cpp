#include <bits/stdc++.h>
using namespace std;

void reverseString(string &str)
{
    static int start = 0, end = str.length() - 1;

    if(start > end) return ;

    swap(str[start], str[end]);
    start++, end--;

    reverseString(str);
}

int main()
{
    string name;
    getline(cin, name);


    // using in built function
    // reverse(name.begin(), name.end());

    reverseString(name);

    cout << name;
}