#include<iostream>
using namespace std;

void countingSort(char arr[],int n){
    int x=INT_MAX;
    int y=INT_MIN;
    for(int i=0;i<n;i++){
        if(x>(int)arr[i]){
            x=(int)arr[i];
        }
        if(y<(int)arr[i]){
            y=(int)arr[i];
        }
    }
    int startingRange=x;
    int endingRange=y;
    int range=y-x+1;
    int AnotherArray[range+1]={0};
    
    for(int i=x;i<y+1;i++){
        AnotherArray[(int)arr[i-x]]+=1;
    }
    int p=0;
    for (int i = 0; i <=range ; i++)
    {
        for(int j=0;j<AnotherArray[i]-x+1;j++){
            arr[p]=i+x-1;
            p++;
        }
    }

    
}
int main(){
    char arr[]={'M','H','A','P','Z','J','K','E'};
    // int x=INT_MAX;
    // int y=INT_MIN;
    // for(int i=0;i<8;i++){
    //     if(x>(int)arr[i]){
    //         x=(int)arr[i];
    //     }
    //     if(y<(int)arr[i]){
    //         y=(int)arr[i];
    //     }
    // }

    countingSort(arr,8);
    for(char x:arr){
        cout<<x<<" ";
    }


    return 0;
}