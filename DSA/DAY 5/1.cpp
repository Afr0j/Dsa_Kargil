#include<iostream>
using namespace std;
void str_n_Cat(string &s1, string &s2, int n){
     if(n>s2.length()){
        cout<<"INVALID"<<endl;
        exit(0);

    }
    // string s=s1;
    char *p=&s1[0];
    char *q=&s2[0];
    while(*p!='\0'){
        p++;
    }
    p=q;
    for(int i=0;i<n;i++){
        s1+=*p;
        p++;
    }
    *p='\0';
    
}
int main(){
    string s1="Afroj";
    string s2="Khan";
    str_n_Cat(s1,s2,3);
    cout<<s1;

    return 0;
}