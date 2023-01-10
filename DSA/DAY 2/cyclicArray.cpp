#include<iostream>
using namespace std;
void rightCycle(int *a,int size){
    
       int temp=a[0];
       for (int i = 1; i < size-1; i++)
       {
            a[i+1]=a[i];
       }
       a[1]=temp;
       
      
        
}
int main(){
    // cout<<sizeof(int);

    int a[]={1,2,3,4,5};
    // int *q=&a[0];
    // int p=4*sizeof(int);
    // q+=1;
    // cout<<*q;

    rightCycle(a,5);
    for(int x:a){
        cout<<x<<" ";
    }

}