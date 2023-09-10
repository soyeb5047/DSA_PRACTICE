#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;

} *head = NULL ;

void createList(int *a, int n)
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

    // make list cyclic
    last->next = head->next->next;
}

int detectNode(node *p)
{
    node *fast = p, *slow = p;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) break;
    }

    // it means node is not cyclic
    if(slow == NULL || fast == NULL || fast->next == NULL) return -1;

    // if list is cyclic
    node *x = p;

    while(x != slow)
    {
        x = x->next;
        slow = slow->next;
    }
    return slow->data;
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

    if(detectNode(head) == -1)
    {
        cout << "This List is not is not cyclic\n";
    }
    else
    {
        cout << "This List is cyclic at " << detectNode(head) << " Node\n";
    }
}