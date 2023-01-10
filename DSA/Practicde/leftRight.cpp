#include<iostream>
using namespace std;
void leftRight(int A[],int n){
    int *p=&A[0];
    int *q=&A[n-1];
    n=(n/2)+1;
    while(n--){
     if(*q<0 && *p>0){
        swap(*q,*p);
         p+=1;
         q-=1;
     }
     else if(*q>0 && *p<0)
     {
        p+=1;
        q-=1;
     }
     else if(*q>0 && *p>0)
     {
        q-=1;
     }
     else if(*q<0 && *p<0){
        p+=1;
     }
    
    }
    
}
int main(){
    int a[16]={-1,5,-2,5,-1,5,-1,-51,51,1,1,-1,41,41,5,-4};
    leftRight(a,16);
    for(int x:a){
        cout<<x<<" ";
    }
}