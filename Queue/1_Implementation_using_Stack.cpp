#include<bits/stdc++.h>
using namespace std;

// using two stack
// push method
// 1. shift elements s1 to s2
// 2. push element in s1
// 3. shift elements s2 to s2
// class Queue
// {
//     private :
//     stack<int> s1,s2;
    
//     public:
    
//     void push(int x)
//     {
//         // O(n)
//         while(!s1.empty())
//         {
//             int a = s1.top();
//             s1.pop();
//             s2.push(a);
//         }
//         s1.push(x);
        
//         while(!s2.empty())
//         {
//             int b = s2.top();
//             s2.pop();
//             s1.push(b);
//         }
        
//     }
    
//     int pop()
//     {
//         int a = s1.top();
//         s1.pop();
//         return a;
//     }
//     int peek()
//     {
//         return s1.top();
//     }
    
//     bool empty()
//     {
//         if(!s1.empty()) return false;
//         else return true;
//     }
// };


// using two stack but somewhere optimized
class Queue
{
  private:
  stack<int> in, ou;
  
  public:
  void push(int x)
  {
      in.push(x);
  }
  
  int pop()
  {
      int top;
      
      if(!ou.empty())
      {
        //   O(1)
        top = ou.top();
        ou.pop();
        return top;
      }
      else
      {
        //   O(n)
          while(!in.empty())
          {
              int top = in.top();
              ou.push(top);
              in.pop();
          }
          top = ou.top();
            ou.pop();
            return top;
      }
  }
  
  int peek()
  {
    if(!ou.empty())
      {
        //   O(1)
        return ou.top();
      }
      else
      {
        //   O(n)
          while(!in.empty())
          {
              int top = in.top();
              ou.push(top);
              in.pop();
          }
          return ou.top();
      }  
  }
  
  bool empty()
  {
    if(!ou.empty()) return false;
    else return true;
  }
  
};

int main()
{
    Queue q;
    q.push(3);
    q.push(4);
    q.push(1);
    cout << q.peek() << endl;
    cout << q.pop() << endl;;
    cout << q.peek() << endl;
}