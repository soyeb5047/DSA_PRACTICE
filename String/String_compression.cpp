/*
input:
a a b b c c c
output :
a2b2c3

input:
a b b

ouput : 
ab2

*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<char> compress(vector<char> &a)
{
    // int index = 0;
    int i = 0;
    int n = a.size();
    vector<char> v;

    while(i < n)
    {
        int j = i + 1;

        // j comes out from this loop when j faces a new character or it travers the whole loop
        while(j < n && a[i] == a[j])
        {
            j++;
        }

        // a[index++] = a[i];      // conditionwise  if there is one character which has no duplicate then only add this character
        v.push_back(a[i]);

        int count = j - i;      // we get the number where it has duplicates

        if(count > 1)
        {
            string str = to_string(count);

            for(int k = 0; k < str.length(); k++)
            {
                // a[index++] = str[k];
                v.push_back(str[k]);
            }
        }

        i = j;      // we transfer i in the jth position for the new character
    }
    return v;
}

int main()
{
    int n;
    cin >> n;

    vector<char> a;

    for(int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        a.push_back(x);
    }

    vector<char> v = compress(a);

    for(int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }cout << endl;
}