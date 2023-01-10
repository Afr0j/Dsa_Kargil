#include<iostream>
using namespace std;
void oddEvenUsingDoublePointer(int arr[],int n){
    int *p=arr;
    int **q=&p;
    int even=0;
    int odd=0;
    for (int i = 0; i < n; i++)
    {
        if(**q%2==0){
            even++;
        }
        else{
            odd++;
        }
        *q++;
    }
    cout<<even<<" "<<odd;
    
}

int main(){
    int arr[5]={1,2,3,4,5};
    oddEvenUsingDoublePointer(arr,5);
}