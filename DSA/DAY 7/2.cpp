#include<iostream>
using namespace std;
struct LNode
{
    int data;
    LNode* down=NULL;
    LNode* forward;
};
LNode *head=NULL;
LNode *tail=NULL;

void insertForward(int data){
    LNode *newNode=new LNode;
    if(head==NULL){
        head=tail=newNode;
        newNode->forward=NULL;
    }
    else{
        LNode *q=head;
        while(q->forward){
            q=q->forward;
        }
        q->forward=newNode;
        newNode->forward=NULL;
    }
}

void insertDown(int data){
    LNode *q=new LNode;
    q->data=data;

    if(head==NULL){
        cout<<"Invalid Statement"<<endl;
    }
    else if(head->down==NULL){
        head->down=q;
        q->down=NULL;
    }
    else{

        LNode *p=head;
        while(p->forward){
            p=p->forward;
        }

        while(p->down){
            p=p->down;
        }
        p->down=q;
        q->down=NULL;  
    }
}

void display(){
    if(head==NULL){
        cout<<"There is No LinkedList"<<endl;
    }
    else{
        LNode *p=head;
        while(p){
            if(p->down){
                LNode *q=p;
                while(q){
                cout<<q->data;
                if(q->down){
                    cout<<" v ";
                }
                else{
                    cout<<" --> ";
                }
                }
            }
            p=p->forward;
        }
    }
}
int main(){

    insertForward(5);
    insertDown(7);
    insertDown(8);
    insertForward(11);
    insertDown(14);
    insertForward(19);
    insertDown(23);
    insertDown(45);
    insertForward(20);
    insertDown(38);
    insertDown(40);
    insertDown(42);
    insertForward(50);
    insertDown(53);

    return 0;
}

