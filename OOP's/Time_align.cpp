#include<iostream>
#include<string>
using namespace std;

class tim
{
  private:
  int h;
  int m;
  int s;
  
  public:
  tim(int hou, int min, int sec)
  {
      h = hou;
      m = min;
      s = sec;
  }
  
  void align()
  {
      int carry = 0;
      
          if(s >= 60)
          {
              carry = s / 60;
              s = s % 60;
          }
          m += carry;
          if(m >= 60)
          {
              carry = m / 60;
              m = m % 60;
              
          }
      h += carry;
  }
  
  void display()
  {
      string a = to_string(h);
      string b = to_string(m);
      string c = to_string(s);
      
      cout << a + ":" + b + ":" + c << endl;
  }
  
};

int main()
{
    tim t(4, 100, 100);
    
    t.align();
    
    t.display();
}
