#include<iostream>
using namespace std;
void str_n_cpy(string &s1,string &s2,int n){
     if(n>s2.length()){
        cout<<"INVALID"<<endl;
        exit(0);

    }
    char *str2=&s2[0];
    string s="";
    for(int i=0;i<n;i++){
        s+=*str2;
        str2++;
    }
    *str2='\0';
    s1=s;
}
int main(){
    string s1="Afroj";
    string s2="Khan";
    str_n_cpy(s1,s2,2);
    cout<<s1;
    return 0;
}