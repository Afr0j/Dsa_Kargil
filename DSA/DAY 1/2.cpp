#include<iostream>
using namespace std;
int sumOfElement(int arr[],int n){
    int sum=0;
    if(n>=0){
        sum+=arr[n-1];
        sumOfElement(arr,n-1);
    }
    return sum;
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<sumOfElement(arr,5);
}