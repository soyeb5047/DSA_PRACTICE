#include<bits/stdc++.h>
using namespace std;

string add(string a, string b)
{
    
    // time complexity = O(alen + blen)
    string ans="";
    int alen = a.length();
    int blen = b.length();
    int carry = 0, i = 0;

    /*
    1 + 0 = 1, carry = 0
    1 + 1 = 0, carry = 1
    */

    while(i < alen || i < blen || carry != 0)
    {
        // store the character of the last index of a string
        int x = 0;
        if(i < alen && a[alen - i - 1] == '1')
            x = 1;

        // store the last character of b string
        int y = 0;
        if(i < blen && b[blen - i - 1] == '1')
            y = 1;

        ans = to_string((x + y + carry) % 2) + ans;
        carry = ((x + y + carry) / 2);
        i++;
    }
    return ans;
}

int main()
{
    string a, b;
    cin >> a >> b;

    cout << add(a, b) << endl;
}