#include<iostream>
#include<math.h>
using namespace std;

struct node
{
    int data;
    node *next;
}*head = NULL, *deleteedNode = NULL;

void createList(int *a, int n)
{
    // cout << "I am hre" << endl;
    node *temp, *last;

    temp = new node;
    temp->data = a[0];
    temp->next = NULL;
    head = temp;
    last= temp;

    for(int i = 1; i < n; i++)
    {
        temp = new node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

int decimal(node *p)
{
    // find the length
    int len = -1;
    node *temp = p;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    temp = p;
    int deci = 0;
    while(temp != NULL)
    {
        deci += temp->data * pow(2, len);
        temp = temp -> next;
        len--;
    }

    return deci;
}

int main()
{
    int n;
    cout << "Enter the size of the array : " ;
    cin >> n;

    int a[n];
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    createList(a, n);

    cout << "The decimal number is : " << decimal(head) << endl;
}