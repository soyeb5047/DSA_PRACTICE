#include <iostream>
using namespace std;

class tarik
{
  private:
  int date, month;
  
  public:
  void setData(int a, int b)
  {
      date = a;
      month = b;
  }
  
    //   use here friend function
  friend tarik nextDate(tarik);
  
  void getData(tarik t)
  {
      cout << "the next date is : " << date << " and month is : " << month << endl;
  }
};

tarik nextDate(tarik t)
{
    tarik temp;
    
    // for february we cosider here the year is not leap year
    if(t.date == 28 && t.month == 2)
    {
        temp.date = 1;
        temp.month = t.month + 1;
    }

    // take conditions for which month has last date 30
    else if(t.date == 30 && t.month >= 1 && t.month <= 7)
    {
        if(t.month % 2 == 0)
        {
            temp.date = 1;
            temp.month = t.month + 1;
        }
        else
        {
            temp.date = t.date + 1;
            temp.month = t.month;
        }
    }
    else if(t.date == 30 && t.month >= 8 && t.month <= 12)
    {
        if(t.month % 2 == 0)
        {
            temp.date = t.date + 1;
            temp.month = t.month;
        }
        else
        {
            temp.date = 1;
            temp.month = t.month + 1;
        }
    }
    
    else if(t.date == 31 && t.month == 12)
    {
        temp.date = 1;
        temp.month = 1;
    }
    
    // if the date is 31
    else if(t.date == 31 && t.month != 12)
    {
        temp.date = 1;
        temp.month = t.month + 1;
    }
    
    else
    {
        temp.date = t.date + 1;
        temp.month = t.month;
    }
    
    return temp;
}

int main()
{
    tarik t1;
    t1.setData(5, 7);
    
    tarik t2 = nextDate(t1);
    
    t2.getData(t2);
}
