#include<iostream>
using namespace std;
void ReverseArray(int a[],int size){
    int *p=a;
    int *q=&a[size-1];
    while(p<q){
        int temp=*p;
        *p=*q;
        *q=temp;
        p++;q--;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    for(int x:arr){
        cout<<x<<" ";
    } 
    cout<<endl;
    ReverseArray(arr,5);
    for(int x:arr){
        cout<<x<<" ";
    }

}