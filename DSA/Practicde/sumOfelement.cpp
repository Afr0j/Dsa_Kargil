#include<iostream>
using namespace std;
int sumofElement(int *A,int n){
    int sum=0;
    while(n--){
      sum+=*A;
      A++;
    }
    return sum;

}
int main(){
    int a[5]={1,4,2,5,2};
    cout<<sumofElement(a,5);
}