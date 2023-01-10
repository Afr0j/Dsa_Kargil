#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *root = NULL;

Node *creatNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void preOrderTraversal(Node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        preOrderTraversal(p->left);
        preOrderTraversal(p->right);
    }
}

void preOrderTraversal_for_check_max_heap(Node *p)
{
    if (p != NULL)
    {
        preOrderTraversal_for_check_max_heap(p->left);
        preOrderTraversal_for_check_max_heap(p->right);
    }
}

void postOrderTraversal(Node *p)
{
    if (p != NULL)
    {
        postOrderTraversal(p->left);
        postOrderTraversal(p->right);
        cout << p->data << " ";
    }
}

void inOrderTraversal(Node *p)
{
    if (p != NULL)
    {
        inOrderTraversal(p->left);
        cout << p->data << " ";
        inOrderTraversal(p->right);
    }
}

void genrateBinaryTree(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    if (root == NULL)
    {
        root = newNode;
    }
    else
    {
        Node *p = root;
        while (p->left)
        {
            p = p->left;
        }
        p->left = newNode;
        p = root;
    }
}

bool check_max_Heap(Node *p){
    int max=p->data;
    preOrderTraversal_for_check_max_heap(p->left);
    if(max<p->data){
        return false;
    }
    preOrderTraversal_for_check_max_heap(p->right);
    if(max<p->data){
        return false;
    }
    return true;
}

void insertNode(int data)
{
    Node *p = creatNode(45);
    p->left = NULL;
    p->right = NULL;

    if (root == NULL)
    {
        root = p;
    }
    else
    {
        Node *a, *b, *c;

        while (a || c)
        {
            a = a->left;
            c = c->right;
        }
    }
}
int main()
{

    root = creatNode(35);
    Node *nL = creatNode(45);
    Node *nR = creatNode(64);
    Node *nLL = creatNode(85);
    Node *nLR = creatNode(89);
    Node *nRL = creatNode(65);
    Node *nRR = creatNode(24);

    root->left = nL;
    root->right = nR;

    nL->left = nLL;
    nL->right = nLR;

    nR->left = nRL;
    nR->right = nRR;

    cout << "PreOrder: ";
    preOrderTraversal(root);
    cout << endl;

    cout << "PostOrder: ";
    postOrderTraversal(root);
    cout << endl;

    cout << "InOrder: ";
    inOrderTraversal(root);
    cout << endl;
    cout<<check_max_Heap(root);
    return 0;
}