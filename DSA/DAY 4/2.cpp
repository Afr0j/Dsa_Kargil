#include<iostream>
using namespace std;
string Compare(string s1,string s2){
    char *c1=&s1[0];
    char *c2=&s2[0];
    int i=s1.length();
    if(s1.length()<s2.length() ){
        return s2;
    }
    else if(s1.length()>s2.length() ){
        return s1;
    }
    else{
    for(int j=0;j<i;j++){
        if(s1[j]>s2[j]){
            return s1;
        }
        else if(s1[j]<s2[j]){
            return s2;
        }
    }
    }
    return "BOTH ARE EQUAL";
}
int main(){
    string s1="afroj";
    string s2="afroj";
    cout<<Compare(s1,s2);
    return 0;
}