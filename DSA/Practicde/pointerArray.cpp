#include<iostream>
using namespace std;
int main(){
    int A[]={1,4,8,5,9};
    cout<<A<<" "<<*A;
    cout<<endl;
    // cout<<A[0]<<" "<<*A[0];--Here *A[0] give error
    // cout<<A[0]<<" "<<&A[0];
    // int *p=&A;//Error
    int *p=A;
    int **q=&p;
    // cout<<*(p+1)<<endl;
    // *p++;
    // A++;--ERROR
    cout<<*(*q+1)<<endl;


    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<*(p+1)<<" ";
    // }

    
    


    
} 