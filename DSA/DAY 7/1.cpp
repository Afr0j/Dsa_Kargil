#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
Node *tail = NULL;

void createNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        newNode->next = NULL;
    }
    else
    {
        Node *p = head;
        while (p->next)
        {
            p = p->next;
        }
        p->next = tail = newNode;
        newNode->next = NULL;
    }
}

void display()
{
    Node *p = head;
    if (p == NULL)
    {
        cout << "There is No Linked List Exist";
    }
    else
    {
        while (p)
        {
            cout << p->data;
            if (p->next != NULL)
            {
                cout << " --> ";
            }
            p = p->next;
        }
    }
    cout << endl;
}

int countNode()
{
    Node *p = head;
    int count = 0;
    while (p)
    {
        p = p->next;
        count += 1;
    }

    return count;
}

void insertAtPosition(int data, int pos)
{
    if (pos > countNode())
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        Node *newNode = new Node;
        newNode->data = data;
        Node *p = head;
        if (pos == 0)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            while (--pos)
            {
                p = p->next;
            }
            newNode->next = p->next;
            p->next = newNode;
        }
    }
}

// void oddEvenLeftRight()
// {

//     Node *pEven = head;
//     Node *pOdd = head;
//     Node *pEven = head;
//     Node *pOdd = head;
//     while (pEven || pOdd)
//     {
//         if (pEven != NULL)
//         {
//             if (pEven->data % 2 == 0)
//             {
                
//             }
//         }
//     }
// }

void reverseLL(){
    Node*p=head;
    Node *q=NULL;
    Node *r=NULL;
    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}






int main()
{

    createNode(1);
    createNode(2);
    createNode(3);
    createNode(4);
    createNode(5);
    display();
    // oddEvenLeftRight();
    reverseLL();
    display();

    return 0;
}