#include<iostream>
using namespace std;
void countEvenOddUsingDoublePointer(int *p,int n){
    
    int **A=&p;
    int even=0;
    int odd=0;
    while(n--){
        if(**A%2==0)
            even++;
        else odd++;
        *A+=1;
    }
    cout<<"Even = "<<even<<endl;
    cout<<"Odd = "<<odd<<endl;

}
int main(){
    int a[5]={1,4,2,5,2};
    countEvenOddUsingDoublePointer(a,5);
}