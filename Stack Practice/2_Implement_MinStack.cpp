#include<bits/stdc++.h>
using namespace std;

class MinStack
{
  private:
  stack<pair<int, int>> st;
  
  public:
  
  void push(int x)
  {
    int mini;
      if (st.empty()) {
        mini = x;
      } else {
        mini = min(st.top().second, x);
      }
      st.push({x,mini});
  }
  
  void pop()
  {
    st.pop();  
  }
  
  int getMin()
  {
    return st.top().second;  
  }
  
  int top()
  {
    return st.top().first;  
  }
};

int main()
{
    MinStack s;
    
    s.push(-2);
    s.push(0);
    s.push(-3);
    
    cout << "min : " << s.getMin() <<endl;
    s.pop();
    cout << "Top : " << s.top() << endl;
    cout << "min : " << s.getMin() << endl;
    
}