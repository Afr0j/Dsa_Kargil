#include<iostream>
using namespace std;

void countEvenOdd(int arr[],int n){
    int even=0;
    int odd=0;
    int *p=arr;
    for(int i;i<n;i++){
        if(*p%2==0){
            even++;
        }
        else{
            odd++;
        }
        p++;
    }
    cout<<even<<" "<<odd;
}
int main(){
    // int a=20;
    // int *b=&a;
    // int **c=&b;

    // cout<<a<<endl;
    // cout<<*(&a)<<endl;
    // cout<<*b<<endl;

    // b+=1;

    // cout<<b;
    int arr[5]={1,2,3,4,5};
    countEvenOdd(arr,5);
 
  
}