#include<iostream>
using namespace std;

void sortCharArray(char c[],int n){
    for(int p=0,i=p,j=n-1;i<j;i++){
        if(c[i]>c[i+1]){
            // char t=c[i];
            // c[i]=c[i+1];
            // c[i+1]=t;
            swap(c[i],c[i+1]);
        }
        if(i==j-1){
            j=j-1;
            i=0;
        }
    }
    swap(c[0],c[1]);
}
int main(){
    char c[]={'M','H','P','A','D','Z','T','G'};
    for(char x:c){
        cout<<x<<" ";
    }

    cout<<"\n";
    sortCharArray(c,9);

    for(char x:c){
        cout<<x<<" ";
    }

    return 0;
}