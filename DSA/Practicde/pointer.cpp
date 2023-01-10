#include<iostream>
using namespace std;
int main()
{
    // -----------------------------------------
    // int a=10;
    // int *p=&a;
    // cout<<a<<" "<<p<<" "<<*p<<endl;
    // cout<<a<<" "<<p+1<<" "<<*p+1<<endl;
    // cout<<a<<" "<<p+2<<" "<<*(p+1)<<endl;
    // *p=*p+1;
    // cout<<a;
    // ---------------------------------------

//     int a=1025;
//     int *pa=&a;
//     cout<<sizeof(a)<<endl;
//     cout<<a<<" "<<pa<<" "<<*pa<<endl;
//     cout<<a<<" "<<pa+1<<" "<<*pa+1<<endl;
//     cout<<a<<" "<<pa+1<<" "<<*(pa+1)<<endl;

//     // char paC=pa;//show error
//     char *paC=(char*)pa;
//     cout<<paC<<" "<<*paC<<endl;
//     printf("%d %d",paC,*paC);
//     cout<<endl;
//     printf("%d %d",paC+1,*paC+1);//jis byte pe point kr rha oosme 1 add kr diya 
//     cout<<endl;
//     printf("%d %d",paC,*(paC+1));//point to the next byte example 200 se 201
//     cout<<endl;

//     void *pV=pa;
//     cout<<pV;
//     cout<<pV+1;//Error
//     cout<<*pV; //Error
// --------------------------------------------------------------------------
        int a=5;
        int *p=&a;
        // int **q=&a;--Error
        int **q=&p;
        int ***r=&q;
        int ****s=&r;

        // cout<<a<<" "<<p<<" "<<q<<" "<<r<<" "<<s;
        // cout<<endl;
        // cout<<a<<" "<<*p<<" "<<*q<<" "<<*r<<" "<<*s;
        // cout<<endl;
        // cout<<a<<" "<<*p<<" "<<**q<<" "<<**r<<" "<<**s;
        // cout<<endl;
        // cout<<a<<" "<<*p<<" "<<**q<<" "<<***r<<" "<<****s;
        // cout<<endl;

        cout<<a<<" "<<p<<" "<<q<<" "<<r<<" "<<s;
        cout<<endl;
        cout<<a<<" "<<&p<<" "<<&q<<" "<<&r<<" "<<&s;
        cout<<endl;
        // cout<<a<<" "<<*p<<" "<<**q<<" "<<**r<<" "<<**s;
        // cout<<endl;
        // cout<<a<<" "<<*p<<" "<<**q<<" "<<***r<<" "<<****s;
        // cout<<endl;



}