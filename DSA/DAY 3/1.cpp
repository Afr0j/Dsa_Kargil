//check how many elements are greater than with respect to an element upto ith index
// check next greatest element
#include<iostream>
#include<stack>
using namespace std;

int *greatestNumber(int a[], int r[],int n){
    int count=0;
    
    for(int i=0,j=1;j<=n;j++){
        if(j==n){
            r[i]=count;
            count=0;
            i++;
            j=i+1;
        }
        if(a[j]-a[i]>0){
            count+=1;
        }
    }

        return r;
    
}

int main(){
    int arr[]={4,9,2,3,10,11};
    int res[6];
    int *p=greatestNumber(arr,res,6);
    for(int i=0;i<6;i++){
        cout<<res[i]<<" ";
    }
}