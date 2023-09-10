#include<bits/stdc++.h>
using namespace std;

// 1. using two queue
class Stack{
    
    /*
    Approach: 
    
    1. push element in 2nd queue
    2. take elements from the 1st queue to 2nd queue. in this way, we get the new element as front 
    3. swap the 2ns queue with 1st queue
    */
    
  private:
  queue<int> q1, q2;
  
  public:
  
  void push(int x)
  {
      q2.push(x);
      
      while(!q1.empty())
      {
          q2.push(q1.front());
          q1.pop();
      }
      
      q2.swap(q1);
  }
  
  int pop()
  {
      int x = q1.front();
      q1.pop();
      return x;
  }
  
  int top()
  {
      return q1.front();
  }
  
  int size()
  {
      return q1.size();
  }
  
  bool empty()
  {
    if(q1.size() == 0)
        return true;
    else
        return false;
  }
  
};

// 2. using one queue
// class Stack
// {
//   private:
//   queue<int> q;
  
//   public:
  
//   void push(int x)
//   {
//       q.push(x);
      
//         //   size of queue
//       int size = q.size();
      
//     //   push every front element for getting the new element at the front of queue
    
//     for(int i = 1; i < size; i++)
//     {
//         q.push(q.front());
//         q.pop();
//     }
//   }
  
//   void pop()
//   {
//       q.pop();
//   }
  
//   int top()
//   {
//       return q.front();
//   }
  
//   int size()
//   {
//       return q.size();
//   }
// };

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    cout << "the top element of the stack is : " << s.top() <<endl;
    s.pop();
    cout << "the top element of the stack is : " << s.top() <<endl;
    
    if(s.empty())
    {
        cout << "The Stack is Empty.\n";
    }
    else
    {
        cout << "Stack is not Empty.\n";
    }
    
    
}