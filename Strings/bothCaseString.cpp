#include<iostream>
using namespace std;
void bothCaseString(string s){
    int i=0;
    string str="";
    while(s[i]!='\0'){
        if(s[i]>='A' && s[i]<='Z'){
            str+=s[i]+32;
        }
        else if(s[i]>'a' && s[i]<='z'){
            str+=s[i]-32;
        }
        else{
            str+=s[i];//for spaces
        }
        i++;
    }
    cout<<str;
}
int main(){
    cout<<"Enter String:";
    string s;
    getline(cin,s);
    cout<<"\n--------------------------"<<endl;
    bothCaseString(s);
}