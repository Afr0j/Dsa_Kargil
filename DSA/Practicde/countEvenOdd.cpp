#include<iostream>
using namespace std;
void countEvenOdd(int A[],int n){
    int *p=A;
    int even=0;
    int odd=0;
    while(n--){
        if(*p%2==0)
            even++;
        else odd++;
        p++;
    }
    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd<<endl;

}
int main(){
    int a[5]={1,4,2,5,2};
    countEvenOdd(a,5);
}