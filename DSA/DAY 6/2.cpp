#include<iostream>
using namespace std;

void countingSort(int A[],int n,int range){
   
    int b[range+1]={0};
    for (int i = 0; i < n; i++)
    {
        b[A[i]]+=1;
    }
    int s=0;
    for(int i=0;i<=range;i++){
        for(int j=0;j<b[i];j++){
        A[s]=i;
        s++;
        }
    }
    }  
int main(){
    int arr[]={2,1,3,2,4,3,1,2};
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    countingSort(arr,8,5);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}