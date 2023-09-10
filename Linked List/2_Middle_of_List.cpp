#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head = NULL;

void create(int *a, int n)
{
    node *temp, *last;

    temp = new node;
    temp->data = a[0];
    temp->next = NULL;
    head = temp, last = temp;

    for(int i = 1; i < n; i++)
    {
        temp = new node;
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

// node *middleNode(node *p)
// {
//     // find the length
//     int len = 0;
//     node *temp = p;
//     while(temp != NULL)
//     {
//         len++;
//         temp = temp-> next;
//     }

//     // now go to the middle node
//     temp = p;
//     int count = 0;
//     int mid = len / 2;
//     while(temp != NULL && count != mid)
//     {
//         count++;
//         temp = temp->next;
//     }

//     return temp;

// }


// using two pointers
node *middleNode(node *p)
{
    // make slow and fast pointer
    node *slow = p, *fast = p;

    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// void display(node *p)
// {
//     while(p != NULL)
//     {
//         cout << p->data << " ";
//         p = p->next;
//     }cout << endl;
// }

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;


    int a[n];
    cout << "Enter the array elements : ";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    create(a, n);

    // display(head);
    

    node *temp = new node;
    temp = middleNode(head);


    cout << "The middle node value is : " << temp->data << endl;

}