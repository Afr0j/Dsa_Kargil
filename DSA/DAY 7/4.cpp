#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int data){
    Node *newNode=new Node;
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}


int main(){
    Node *root=new Node;
    root->data=7;
    root->left=createNode(4);
    root->right=createNode(5);

    Node *p=root;
    p->left->left=createNode(43);
    p->left->right=createNode(23);

    p->right->left=createNode(53);
    p->right->right=createNode(46);

    

    return 0;
}