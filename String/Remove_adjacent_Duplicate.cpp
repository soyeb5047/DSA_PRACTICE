#include <iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;

/*
// using recursion
string remDup(string a)
{
    string ans;
  int i = 0;
  
  while(a[i])
  {
    if(a[i] != a[i+1] && a[i] != a[i - 1])
    {
      ans += a[i];
      
    }
    i++;
    
    
  }
  if(a.size() == ans.size())
      return ans;
    return  remDup(ans);
}
*/

string rem(string str)
{
  int n = str.size();
  string ans;
  int i = 0;
  while(i < n)
  {
    if(i < n - 1 && str[i] == str[i+1])
    {
      while(i < n - 1 && str[i] == str[i+1])
      {
        i++;
      }
    }
    else
    {
      ans.push_back(str[i]);
    }
    i++;
  }
  return ans;
}

string remDup(string a) 
{
  // Complete the function
  
  string s = "";
  while(a.size() != s.size())
  {
    s = a;
    a = rem(a);
  }
  return a;
}

int main()
{
    string str;
    cin >> str;
    
    string s = remDup(str);
    
    cout <<s;
}
