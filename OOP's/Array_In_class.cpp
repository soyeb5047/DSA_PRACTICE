#include<bits/stdc++.h>
using namespace std;

class shop
{
    private:
    int proId[50];
    int proPrice[50];
    int count;

    public:

    void counter()
    {
        count = 0;
    }

    void setPrice()
    {
        cout << "Enter the id of this product " << count + 1 << " : ";
        cin >> proId[count];
        cout << "Enter the price of this product : ";
        cin >> proPrice[count];

        count++;
    }

    void display()
    {
        for(int i = 0; i < count; i++)
        {
            cout << "the id and the price is : " << proId[i] << " " << proPrice[i] << endl;
        }
    }
};

int main()
{
    shop s;
    // cout << "The size of the empty object is : "<< sizeof(s) << endl;

    s.counter();
    s.setPrice();
    s.setPrice();
    s.display();
}