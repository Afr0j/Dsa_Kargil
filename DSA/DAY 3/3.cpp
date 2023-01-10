#include<iostream>
using namespace std;
int stringLength(string s){
    char *p=&s[0];
    int l=0;
    while(*p!='\0'){
        l+=1;
        p++;
    }
    return l;
}

void reverseString(string s){
    
    

}
string concat(string s1,string s2){
    char *str1=&s1[0];
    char *str2=&s2[0];
    string str="";
    int i=0;
    while(*str1!='\0'){
        str+=str1[i];
        str1++; 
        i++; 
    }
    str1=str2;
    i=0;
    while(*str2!='\0'){
        str+=str2[i];
        str2++; 
        i++; 
    }
    return str;
}
int main(){
    string s1="qwert";
    string s2="asdfgh";

    cout<<concat(s1,s2);
}