#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *creatNode(int data){
    Node *newNode=new Node;
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

void preOrderTraversal(Node *p){
    if(p!=NULL){
        cout<<p->data<<" ";
        preOrderTraversal(p->left);
        preOrderTraversal(p->right);
    }
}

void postOrderTraversal(Node *p){
    if(p!=NULL){
        postOrderTraversal(p->left);
        postOrderTraversal(p->right);
        cout<<p->data<<" ";
    }
}

void inOrderTraversal(Node *p){
    if(p!=NULL){
        inOrderTraversal(p->left);
        cout<<p->data<<" ";
        inOrderTraversal(p->right);
    }
}


int main(){

   Node *root= creatNode(35);
   Node *nL= creatNode(45);
   Node *nR=creatNode(64);
   Node *nLL=creatNode(85);
   Node *nLR=creatNode(89);
   Node *nRL=creatNode(65);
   Node *nRR=creatNode(24);


   root->left=nL;
   root->right=nR;

   nL->left=nLL;
   nL->right=nLR;

   nR->left=nRL;
   nR->right=nRR;

    cout<<"PreOrder: ";
    preOrderTraversal(root);
    cout<<endl;

    cout<<"PostOrder: ";
    postOrderTraversal(root);
    cout<<endl;

    cout<<"InOrder: ";
    inOrderTraversal(root);
    cout<<endl;
    
    return 0;
}