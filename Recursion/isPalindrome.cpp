#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int n = str.length();
    static int l = 0;

    if(l >= n / 2)
        return true;

    if(str[l] != str[n - l - 1])
    {
        return false;
    }
    l++;
    isPalindrome(str);
}

int main()
{
    string str;
    cout << "Enter a string : ";
    cin >> str;

    if(isPalindrome(str))
        cout << "This string is palindrome.\n";
    else
        cout << "This string is not palindrome.\n";
}