#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

class HashSet
{
    public:

    // make list of array
    list<int> hash[10001];

    HashSet()
    {

    }

    int index(int key)
    {
        return key % 10001;
    }

    list<int> :: iterator search(int key)
    {
        int i = index(key);

        return find(hash[i].begin(), hash[i].end(), key);
    }

    void add(int key)
    {
        if(contains(key))
            return ;

        int i = index(key);
        hash[i].push_back(key);

    }

    void remove(int key)
    {
        if(!contains(key)) return;

        int i = index(key);
        list<int> :: iterator it = search(key);

        hash[i].erase(it);
    }

    bool contains(int key)
    {
        list<int> :: iterator it = search(key);

        int i = index(key);

        if(it == hash[i].end())
            return false;

        return true;
    }
};

int main()
{
    HashSet a;

    // add some keys
    a.add(22);
    a.add(100021);
    a.add(22);
    a.add(89);

    // check contains or not
    cout << a.contains(100021) << endl << endl;

    cout << a.contains(22) << endl << endl;

    // remove
    a.remove(100021);
    a.remove(22);

    // check contains or not
    cout << a.contains(100021) << endl << endl;

    cout << a.contains(22) << endl << endl;

    cout << a.contains(89) << endl << endl;
}