//left right 
#include<iostream>
using namespace std;
void leftRight(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
         if(i==j){
                if(arr[i]>arr[j+1]){
                    swap(arr[i],arr[j+1]);

                }
            }
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
           
        }
        i++;
        j--;
    }
    
}
int main(){
    int arr[9]={2,-5,6,-4,-7,-5,6,-6,6};
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    leftRight(arr,9);

    for(int x:arr){
        cout<<x<<" ";
    }

}