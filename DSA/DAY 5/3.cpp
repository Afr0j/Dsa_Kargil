#include<iostream>
using namespace std;
void str_n_replace(string &s1,string &s2,int n){
    if(n>s2.length()){
        cout<<"INVALID"<<endl;
        exit(0);

    }
    string s="";
    for(int i=0;i<n;i++){
        s1[i]=s2[i];
    }
}
int main(){
    string s1="Afroj";
    string s2="Khan";
    str_n_replace(s1,s2,2);
    cout<<s1;
    return 0;
}