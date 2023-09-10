#include<iostream>
using namespace std;

class HashSet
{
    public:
    int hash[100001];

    HashSet()
    {
        for(int i = 0; i < 100001; i++)
        {
            hash[i] = 0;
        }
    }

    void add(int key)
    {
        hash[key] = 1;
    }

    bool contains(int key)
    {
        return hash[key];
    }

    void remove(int key)
    {
        hash[key] = 0;
    }
};

int main()
{
    HashSet a;

    // add key in hashset
    a.add(10);

    // check it contains or not
    cout << a.contains(10) << endl;

    // remove 
    a.remove(10);

    // check again contains function
    cout << a.contains(10);
}