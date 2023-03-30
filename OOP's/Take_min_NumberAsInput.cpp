#include <iostream>
#include<math.h>
using namespace std;

class first
{
  private:
  int a;
  
  public:
  void setData(int n)
  {
      a = n;
  }
  
  int getData()
  {
      return a;
  }
};

class sec
{
    private:
    int b;
    
    public:
    void assign(int n)
    {
        b = n;
    }
    
    int take()
    {
        return b;
    }
};

class third
{
  private:
  int p;
  
  public:
  void data(int n)
  {
      p = n;
  }
  
  int get()
  {
      return p;
  }
};

int main()
{
    first f;
    f.setData(10);
    
    sec s;
    s.assign(5);
    
    third t;
    // int x = min(f.getData(), s.take());
    
    t.data(min(f.getData(), s.take()));
    
    cout << t.get() << endl;
}
