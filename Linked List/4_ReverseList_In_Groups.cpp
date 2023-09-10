#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
} *head = NULL ;

void create(int *a, int n)
{
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

void reverse(node *s, node *e)
{
    node *pre = NULL, *curr = s, *n = s->next;

    while(pre != e)
    {
        curr->next = pre;
        pre = curr;
        curr = n;

        if(n->next != NULL) n = n->next;
    }
}

node *ReverseGroups(node *p, int k)
{
    if( k = 1 || p == NULL || p->next == NULL ) return p;

    node *s = p, *e = p;

    // end pointer goes forward times
    int forward = k - 1;

    while(forward--)
    {
        e = e->next;

        // iif list is small compared to k it means don't change the list
        if(e == NULL)
            return p;
    }

    node *rem = ReverseGroups(e->next, k);

    // reverse this group
    reverse(s, e);

    // now connect this group with rem
    s->next = rem;

    // at the last the first node is remaining end(e) so return this end
    return e;

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
    cout << "Enter the size of the array : ";
    cin >>n;

    int a[n];
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    create(a, n);

    display(head);

    int k;
    cout << "Enter the size of the group : ";
    cin >> k;

    node *temp = ReverseGroups(head, k);

    display(temp);

}