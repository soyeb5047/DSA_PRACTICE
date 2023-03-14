/*
input : 
s1 = ab, s2 = eidbaooo
output : Yes

input : 
s1 = ab , s2 = eiadbooo
output : No

input : 
s1 = ab, s2 = a
output : No

*/

#include<bits/stdc++.h>
using namespace std;

bool check(int count1[], int count2[])
    {
        for(int i = 0; i < 26; i++)
        {
            // if any index are not equal then return 0
            if(count1[i] != count2[i])
            {
                return 0;
            }
        }
        return 1;
    }

    bool checkInclusion(string s1, string s2) {
        // all characters count of s1
        int count1[26] = {0};

        for(int i = 0; i < s1.length(); i++)
        {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // make window for checking 
        int windowSize = s1.length();
        int i = 0;

        // make an count array for s2
        int count2[26] = {0};

        // check for the first windowSize
        while(i < windowSize && i < s2.length())
        {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        // check first s1.length() size of s2
        if((check(count1, count2)))
            return 1;

        // if not equal then check again from ith index
        while(i < s2.length())
        {
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            // if i = 0 then we decrease the count of 0th index
            char oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            count2[index]--;

            i++;

            // then check again 
            if((check(count1, count2)))
                return 1;
        }
        return 0;

    }

int main()
{
    string s1, s2;
    cin>> s1 >> s2;

    if(checkInclusion(s1,s2))
    {
        cout << "The permutation present in this string.\n";
    }
    else
    {
        cout << "The permutation is not present.\n";
    }
}