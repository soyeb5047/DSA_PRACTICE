#include<bits/stdc++.h>
using namespace std;

class binary
{
    string s;
    void isBinary();
    public:
    void read();
    void onesComplement();
    void display();
};

void binary::read()
{
    cout << "ENter the Binary number : ";
    cin >> s;
}

void binary::isBinary()
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "This is not a binary number.\n";
            exit(0);
        }
    }
    cout << "It is a binary number.\n";
}

void binary:: onesComplement()
{
    // it is a nesting function
    isBinary();

    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s[i] = '1';
        }
    }
}

void binary:: display()
{
    for(int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.isBinary();
    b.display();
    b.onesComplement();
    b.display();
}