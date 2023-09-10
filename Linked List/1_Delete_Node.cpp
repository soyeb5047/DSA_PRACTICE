#include<bits/stdc++.h>
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

void deleteNode(node *p, int ele)
{
    node *q;

    while(p != NULL)
    {
        if(p->data == ele && p != NULL)
        {
            // we swap the value of this node with the next node of it and delete the next node
            q = p->next;
            swap(q->data, p->data);
            p->next =  q->next;

            delete q;
        }
        p = p->next;
    }

    // cout << "Not Found the node\n";
    // exit(0);
}

void display(node *p)
{
    cout << "The Elements of the list is : ";
    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl << endl;
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

    display(head);

    int ele;
    cout << "Enter the Node which you want to delete : ";
    cin >> ele;

    // deleteedNode->data = ele;
    // deleteedNode->next = NULL;

    deleteNode(head, ele);

    display(head);

}