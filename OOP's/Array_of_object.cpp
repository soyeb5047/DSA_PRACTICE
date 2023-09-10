#include<bits/stdc++.h>
using namespace std;

class employee
{
    int id;
    int sal;

    public:
    void setId()
    {
        sal = 200;
        cout << "Enter the id of the employee : ";
        cin >> id;
    }

    void getId()
    {
        cout << "The id is : " << id << " and salary is : " << sal << endl;
    }
};

int main()
{
    // array of object
    employee e[4];

    for(int i = 0; i < 4; i++)
    {
        e[i].setId();
        e[i].getId();
        
    }
}