/*
input :
"s o,o s"

output :
    yes pailndrome
*/

#include <bits/stdc++.h>
#include <string>
#include<algorithm>
using namespace std;

bool valPalindrome(string s)
{
    int n=s.size();
    string sentence="";
    for(int i=0;i<n;i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            sentence+=s[i];
    }
    transform(sentence.begin(),sentence.end(),sentence.begin(),::tolower);

    int start=0;
    int end=sentence.size()-1;
    while(start<=end)
    {
        if(sentence[start]!=sentence[end])
            return false;
        else
            start++,end--;
    }
    return true;
}

int main()
{
    string str;
    getline(cin, str);

    if (valPalindrome(str))
    {
        cout << "Yes this string is palindrome\n";
    }
    else
    {
        cout << "This string is not a palindrome\n";
    }
}